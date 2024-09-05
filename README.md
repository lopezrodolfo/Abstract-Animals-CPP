# Dog Class Implementation

## Overview

This project implements a simple hierarchy of classes to represent animals, specifically focusing on dogs. The `Animal` class is an abstract base class, while `Mammal` is a derived class that further specializes the `Animal` class. The `Dog` class inherits from `Mammal` and implements specific behaviors.

## Author

Rodolfo Lopez

## Date

Fall 2021

## File Structure

- **Animal.h**: Defines the abstract `Animal` class with basic properties and pure virtual methods.
- **Mammal.h**: Inherits from `Animal` and serves as a base class for all mammals.
- **Dog.h**: Inherits from `Mammal` and implements the specific behavior for dogs.
- **Dog.cpp**: Contains the implementation of the `Dog` class methods.

## Class Descriptions

### Animal

- **Properties**:
  - `name`: The name of the animal.
- **Methods**:
  - `getName()`: Returns the name of the animal.
  - `setName()`: Sets the name of the animal.
  - `move()`: Pure virtual method to be implemented by derived classes.
  - Overloaded operators for output and comparison.

### Mammal

- Inherits from `Animal`.
- Contains a pure virtual `move()` method.

### Dog

- Inherits from `Mammal`.
- **Properties**:
  - `age`: The age of the dog.
- **Methods**:
  - `getAge()`: Returns the age of the dog.
  - `setAge()`: Sets the age of the dog.
  - `move()`: Implements the movement behavior for dogs.
  - Overloaded operators for output and comparison.

## Compilation

To compile the project, use the following command:

```bash
g++ -o demo demo.cpp Dog.cpp
```

## Execution

Run the compiled program with:

```bash
./demo
```
