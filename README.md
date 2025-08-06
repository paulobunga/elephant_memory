# Elephant Memory C++

Elephant Memory is a **permanent, knowledge-graph-powered memory engine** implemented in **C++** for maximum performance and cross-language support.

This project provides a simple yet powerful way to store and retrieve information in a graph-like structure. It's designed to be a long-term memory for AI agents, applications, and systems.

## About the Project

Elephant Memory is built with performance and flexibility in mind. It allows you to:

- **Store entities**: Represent any object, person, or concept as an entity with a unique ID, name, and type.
- **Create relationships**: Connect entities with relationships to build a knowledge graph.
- **Cross-language support**: Use the library in various programming languages through a C-style API.

## Getting Started

Follow these instructions to get a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

- C++ compiler (g++, clang, etc.)
- CMake

### Installation

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/your_username/elephant-memory-cpp.git
    cd elephant-memory-cpp
    ```
2.  **Build the project:**
    ```bash
    mkdir build
    cd build
    cmake ..
    make
    ```

## Usage

Here's how you can use Elephant Memory in your C++ projects.

### C++ Example

```cpp
#include "ElephantMemory.h"

int main() {
    ElephantMemory mem;
    mem.addEntity("1", "Paul", "Person");
    mem.addEntity("2", "RTX 4090", "GPU");
    mem.addRelationship("1", "likes", "2");
    mem.printGraph();
    return 0;
}
```

### C API Example

The C API allows you to use Elephant Memory in other languages like Python, Go, or Rust. Here's an example of how to use it:

```c
#include "ElephantMemory_c.h"

int main() {
    ElephantMemoryHandle mem = em_create();
    em_add_entity(mem, "1", "Paul", "Person");
    em_add_entity(mem, "2", "RTX 4090", "GPU");
    em_add_relationship(mem, "1", "likes", "2");
    em_print_graph(mem);
    em_free(mem);
    return 0;
}
```

## API Reference

The library exposes two main APIs:

-   **C++ API**: Defined in `include/ElephantMemory.h`. It provides an object-oriented interface for working with the memory engine.
-   **C API**: Defined in `include/ElephantMemory_c.h`. It's a C-style wrapper that allows you to use the library from other languages.

For detailed information about the API, please refer to the header files.

## Contributing

Contributions are what make the open-source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".

1.  Fork the Project
2.  Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3.  Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4.  Push to the Branch (`git push origin feature/AmazingFeature`)
5.  Open a Pull Request

## License

Distributed under the MIT License. See `LICENSE` for more information.
