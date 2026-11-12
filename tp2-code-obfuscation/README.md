# Code Obfuscation with Tigress — Advanced Security (Part 2)

Lab report and artifacts for the **Code (de-)Obfuscation** lab (Master Cybersecurity, UGA).
Author: **DANG Nhat Minh**. Tool: **Tigress 4.2.1**.

The report highlights the main obfuscation feature of each Tigress transformation, with the
generated source code (static analysis) and **real gdb output** (dynamic analysis) as evidence.

## Contents
- **`report.pdf`** — the report (read this first). `report.tex` is its LaTeX source.
- **`src/`** — the original (un-obfuscated) programs:
  - `simple.c` — `int main(){ int x=42; return x++; }` (for Virtualize / EncodeLiterals)
  - `collatz.c` — `classify(n)` with a loop + conditionals (for Flatten / AddOpaque / …)
- **`obfuscated/`** — the code produced by Tigress (proof of work):
  - `simple_virt.c` — **Virtualize** (bytecode + VM interpreter)
  - `collatz_flat.c` — **Flatten** (control-flow → state machine)
  - `collatz_opaque.c` — **AddOpaque** (opaque predicates)
  - `collatz_encA.c` — **EncodeArithmetic** (MBA expressions)
  - `simple_encL.c` — **EncodeLiterals** (constant hidden)
  - `collatz_selfmod.c` — **SelfModify** (code rewrites itself at run time)
  - `collatz_t.c` — `collatz.c` + `#include <time.h>` (needed by opaque/selfmod)
  - `tigress.h` — header required to compile the generated files
- **`snippets/`** — the exact code excerpts and **gdb output** embedded in the report.
- **`part1/`** — Part 1 warm-up (self-modifying C): `foo_add_ex1.c`, `foo_shell_sol.c`.

## Reproduce
Generated with: `tigress --Environment=x86_64:Linux:Gcc:4.6 --Transform=<T> --Functions=<f> in.c --out=out.c`
(Tigress uses random internal names/addresses, so values may differ on each run; the meaning is the same.)

Build the report:
```
pdflatex report.tex && pdflatex report.tex
```
