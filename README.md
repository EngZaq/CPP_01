# CPP Module 01

This project is part of the 42 School C++ curriculum. It focuses on memory allocation, pointers to members, references, and switch statements.

## 📋 Exercises

### ex00 - BraiiiiiiinnnzzzZ
**Topic:** Stack vs Heap allocation

Implementation of a `Zombie` class demonstrating the difference between stack and heap memory allocation:
- `newZombie()` - Creates a zombie on the **heap** (returns a pointer)
- `randomChump()` - Creates a zombie on the **stack** (automatically destroyed)

### ex01 - Moar brainz!
**Topic:** Heap allocation with arrays

Implementation of `zombieHorde()` function that allocates N zombies in a single allocation using `new[]`.

### ex02 - HI THIS IS BRAIN
**Topic:** Pointers and References

Simple program demonstrating the relationship between pointers and references by printing memory addresses and values.

### ex03 - Unnecessary Violence
**Topic:** References vs Pointers

Implementation of `Weapon`, `HumanA`, and `HumanB` classes:
- `HumanA` always has a weapon (uses reference)
- `HumanB` may or may not have a weapon (uses pointer)

### ex04 - Sed is for losers
**Topic:** File manipulation and string replacement

A program that reads a file and replaces all occurrences of a string `s1` with `s2`, writing the result to a new file.

**Usage:**
```bash
./sed_is_for_losers <filename> <s1> <s2>
```

### ex05 - Harl 2.0
**Topic:** Pointers to member functions

Implementation of a `Harl` class with complaint levels (DEBUG, INFO, WARNING, ERROR) using pointers to member functions instead of if/else chains.

### ex06 - Harl filter
**Topic:** Switch statements

A filter for Harl's complaints using a switch statement to display messages at or above a given level.

**Usage:**
```bash
./harlFilter <level>
```

## 🛠️ Compilation

Each exercise has its own Makefile with the following rules:
- `make` - Compile the program
- `make clean` - Remove object files
- `make fclean` - Remove object files and executable
- `make re` - Recompile everything

**Compiler flags:** `-Wall -Wextra -Werror -std=c++98`

## 📁 Project Structure

```
CPP_01/
├── ex00/          # Zombie stack/heap
├── ex01/          # Zombie horde
├── ex02/          # Pointers and references
├── ex03/          # Weapon and Humans
├── ex04/          # Sed replacement
├── ex05/          # Harl complaints
├── ex06/          # Harl filter
└── README.md
```

## 👤 Author

**EngZaq** - 42 Student