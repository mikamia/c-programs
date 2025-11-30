# WARP.md

This file provides guidance to WARP (warp.dev) when working with code in this repository.

## Project overview

This is a small C project that builds a single executable named `main` from `src/main.c` using a `Makefile`. The program currently prints a greeting string to standard output.

## Repository layout

- `Makefile`: Defines how to build and clean the `main` executable.
- `src/main.c`: Entry point (`main`) for the program.

## Build, run, and clean commands

All commands are intended to be run from the repository root.

### Build

```sh path=null start=null
make
```

This compiles `src/main.c` with `gcc` using `-Wall -Wextra -std=c11 -g` and produces the `main` binary.

### Run

After building:

```sh path=null start=null
./main
```

### Clean

Remove the built binary:

```sh path=null start=null
make clean
```

## Testing and linting

- There is currently no automated test suite or test runner configured.
- There are no dedicated linting or formatting targets in the `Makefile`; compilation uses `gcc` with warnings enabled via `-Wall -Wextra`.

## Notes for future Warp sessions

- Prefer invoking the existing `Makefile` targets (`make`, `make clean`) instead of calling `gcc` directly, so that new source files or flags added later remain in effect.
- If you add new source files, update the `SRC` variable in `Makefile` (or refactor it) so they are included in the build.
