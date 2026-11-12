// Exercise 2 solution: mutate foo() so its 2nd call runs the shellcode (spawns /bin/sh).
// Hint from the lab: just copy the shell code to foo()'s address with memcpy.
// The page holding foo() was already made RWX by change_page_permissions_of_address().

#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/mman.h>

void foo(void);
int change_page_permissions_of_address(void *addr);

int main(void) {
    void *foo_addr = (void*)foo;

    if(change_page_permissions_of_address(foo_addr) == -1) {
        fprintf(stderr, "Error while changing page permissions of foo(): %s\n", strerror(errno));
        return 1;
    }

    puts("Calling foo");
    foo();                                   // normal foo: prints i: 1

    // execve("/bin/sh", ...) shellcode (from exploit-db 13691)
    char shellcode[] =
        "\x48\x31\xd2"                              // xor    %rdx, %rdx
        "\x48\x31\xc0"                              // xor    %rax, %rax
        "\x48\xbb\x2f\x62\x69\x6e\x2f\x73\x68\x00"  // mov    $0x0068732f6e69622f, %rbx  ("/bin/sh")
        "\x53"                                      // push   %rbx
        "\x48\x89\xe7"                              // mov    %rsp, %rdi
        "\x50"                                      // push   %rax
        "\x57"                                      // push   %rdi
        "\x48\x89\xe6"                              // mov    %rsp, %rsi
        "\xb0\x3b"                                  // mov    $0x3b, %al   (execve syscall nr)
        "\x0f\x05";                                 // syscall

    // *** MUTATION: overwrite foo()'s machine code with the shellcode ***
    memcpy(foo_addr, shellcode, sizeof(shellcode));

    puts("Calling foo");
    foo();                                   // foo is now the shellcode -> /bin/sh

    return 0;
}

void foo(void) {
    int i=0;
    i++;
    printf("i: %d\n", i);
}

int change_page_permissions_of_address(void *addr) {
    int page_size = getpagesize();
    addr -= (unsigned long)addr % page_size;
    if(mprotect(addr, page_size, PROT_READ | PROT_WRITE | PROT_EXEC) == -1) {
        return -1;
    }
    return 0;
}
