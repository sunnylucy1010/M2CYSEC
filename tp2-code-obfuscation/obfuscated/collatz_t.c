#include <time.h>
#include <stdlib.h>
#include <stdio.h>

// Non-trivial CFG: one loop, conditionals inside and outside the loop.
int classify(int n) {
    int steps = 0;
    if (n <= 0)                 // conditional OUTSIDE the loop
        return -1;
    while (n != 1) {            // the loop
        if (n % 2 == 0)        // conditional INSIDE the loop
            n = n / 2;
        else
            n = 3 * n + 1;
        steps++;
    }
    if (steps > 10)            // conditional OUTSIDE the loop
        return steps + 100;
    return steps;
}

int main(int argc, char **argv) {
    int n = (argc > 1) ? atoi(argv[1]) : 27;
    printf("classify(%d) = %d\n", n, classify(n));
    return 0;
}
