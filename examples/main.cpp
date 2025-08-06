#include "ElephantMemory.h"

int main() {
    ElephantMemory mem;
    mem.addEntity("1", "Paul", "Person");
    mem.addEntity("2", "RTX 4090", "GPU");
    mem.addRelationship("1", "likes", "2");
    mem.printGraph();
    return 0;
}
