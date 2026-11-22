# C Programming Practice

Beginner C programs written while learning the basics: input and output,
conditions, loops and functions.

## Programs

| File | Topic | What it does |
|---|---|---|
| `hello.c` | Output | Prints "Hello, World!" |
| `name.c` | Input | Asks for your name and greets you |
| `agree.c` | Conditions | Reads y/n and reports whether you agreed |
| `if_else_compare.c` | Conditions | Compares two numbers with if / else if / else |
| `increment_for_loop.c` | Loops | Prints "Hello" 3 times with a counting-up `for` loop |
| `increment_while_loop.c` | Loops | Same, with a `while` loop |
| `decrement_for_loop.c` | Loops | Prints "Hello" 3 times with a counting-down `for` loop |
| `decrement_while_loop.c` | Loops | Same, with a `while` loop |
| `repeat.c` | Loops | Reads n and prints "Hello" n times |
| `hello_function.c` | Functions | Calls a `hello()` function 3 times |
| `hello_function_n_times.c` | Functions | Passes a number to `hello(n)` to print it n times |
| `hello_two_functions.c` | Functions | Validates a positive number, then prints "Hello" that many times |
| `mario.c` | Loops | Work in progress |
| `calculator.c` | — | Work in progress |

## Compile and run

```bash
gcc hello.c -o hello
./hello            # Windows: hello.exe
```

Compiled programs (`.exe`, `a.out`) are ignored by git through `.gitignore`.
