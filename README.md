# Elephant Memory C++

Elephant Memory is a **permanent, knowledge-graph-powered memory engine** implemented in **C++** for maximum performance and cross-language support.

## Features
- **Permanent Memory**: Stores facts and relationships forever.
- **Knowledge Graph**: Efficient graph structure for contextual recall.
- **Semantic Search Ready**: Hooks for embedding/vector search integration.
- **Cross-language**: Build as `.so` / `.dll` to use in Go, Python, Rust, etc.

## Project Structure
```
include/        # Public headers for the library
src/            # Implementation files
examples/       # Example usage
build/          # Compiled output
```

## Build
```bash
mkdir build && cd build
cmake ..
make
```

## Example
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

## License
MIT
