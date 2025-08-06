# Elephant Memory User Guide

Welcome to the Elephant Memory User Guide. This guide provides a comprehensive overview of the Elephant Memory library, its core concepts, and how to use it in your projects.

## Table of Contents

- [Introduction](#introduction)
- [Core Concepts](#core-concepts)
  - [Entities](#entities)
  - [Relationships](#relationships)
  - [Knowledge Graph](#knowledge-graph)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Building the Library](#building-the-library)
- [Using the C++ API](#using-the-c-api)
- [Using the C API for Cross-Language Support](#using-the-c-api-for-cross-language-support)
  - [Python Example](#python-example)
- [API Reference](#api-reference)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Elephant Memory is a high-performance, knowledge-graph-powered memory engine written in C++. It's designed to provide a permanent memory for AI agents, applications, and systems. The library allows you to store information as a graph of interconnected entities and relationships, making it easy to represent complex knowledge.

## Core Concepts

### Entities

An entity represents any object, person, place, or concept. Each entity has:

-   `id`: A unique identifier.
-   `name`: A human-readable name.
-   `type`: A category or classification for the entity.

### Relationships

A relationship connects two entities, describing how they are related. Each relationship has:

-   `from`: The ID of the source entity.
-   `relation`: The name of the relationship (e.g., "likes," "owns," "is_a").
-   `to`: The ID of the target entity.

### Knowledge Graph

The combination of entities and relationships forms a knowledge graph. This graph represents the stored knowledge and can be traversed to find connections and infer new information.

## Getting Started

### Prerequisites

-   A C++ compiler (e.g., g++, clang)
-   CMake

### Building the Library

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/your_username/elephant-memory-cpp.git
    cd elephant-memory-cpp
    ```
2.  **Create a build directory:**
    ```bash
    mkdir build
    cd build
    ```
3.  **Configure and build:**
    ```bash
    cmake ..
    make
    ```

This will produce a static library (`libElephantMemory.a`) and a shared library (`libElephantMemory.so` or `ElephantMemory.dll`) in the `build` directory.

## Using the C++ API

The C++ API provides a simple, object-oriented way to interact with Elephant Memory.

```cpp
#include "ElephantMemory.h"

int main() {
    ElephantMemory mem;

    // Add entities
    mem.addEntity("1", "Alice", "Person");
    mem.addEntity("2", "Bob", "Person");
    mem.addEntity("3", "C++", "Programming Language");

    // Add relationships
    mem.addRelationship("1", "knows", "2");
    mem.addRelationship("1", "likes", "3");

    // Print the graph
    mem.printGraph();

    return 0;
}
```

## Using the C API for Cross-Language Support

The C API allows you to use Elephant Memory from other programming languages. Here's an example of how to use it with Python.

### Python Example

This example assumes you have built the shared library (`libElephantMemory.so` or `ElephantMemory.dll`).

```python
import ctypes

# Load the shared library
lib = ctypes.CDLL('./build/libElephantMemory.so')

# Define the C function prototypes
lib.em_create.restype = ctypes.c_void_p
lib.em_free.argtypes = [ctypes.c_void_p]
lib.em_add_entity.argtypes = [ctypes.c_void_p, ctypes.c_char_p, ctypes.c_char_p, ctypes.c_char_p]
lib.em_add_relationship.argtypes = [ctypes.c_void_p, ctypes.c_char_p, ctypes.c_char_p, ctypes.c_char_p]
lib.em_print_graph.argtypes = [ctypes.c_void_p]

# Create an ElephantMemory instance
mem = lib.em_create()

# Add entities
lib.em_add_entity(mem, b"1", b"Python", b"Language")
lib.em_add_entity(mem, b"2", b"C++", b"Language")

# Add a relationship
lib.em_add_relationship(mem, b"1", b"is_friends_with", b"2")

# Print the graph
lib.em_print_graph(mem)

# Free the memory
lib.em_free(mem)
```

## API Reference

For a detailed API reference, please see the Doxygen-commented header files in the `include` directory. You can generate the documentation by running `doxygen` in the root of the project (assuming you have Doxygen installed).

## Contributing

We welcome contributions! Please see the `README.md` for details on how to contribute.

## License

Elephant Memory is licensed under the MIT License. See the `LICENSE` file for more information.
