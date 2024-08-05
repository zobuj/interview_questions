# Makefile to compile each C file into its own executable

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -O2

# Source files
SRCS = $(wildcard *.c)

# Executable files
EXES = $(SRCS:.c=)

# Default target
all: $(EXES)

# Rule to compile each source file into an executable
%: %.c
	$(CC) $(CFLAGS) -o $@ $<

run: all
	@for exe in $(EXES); do \
		echo "Running $$exe:"; \
		./$$exe; \
		echo; \
	done


# Clean target to remove executables
clean:
	rm -f $(EXES)


