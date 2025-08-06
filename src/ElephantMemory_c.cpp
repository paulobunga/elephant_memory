#include "ElephantMemory_c.h"

ElephantMemoryHandle em_create() {
    return new ElephantMemory();
}

void em_free(ElephantMemoryHandle handle) {
    delete static_cast<ElephantMemory*>(handle);
}

void em_add_entity(ElephantMemoryHandle handle, const char* id, const char* name, const char* type) {
    static_cast<ElephantMemory*>(handle)->addEntity(id, name, type);
}

void em_add_relationship(ElephantMemoryHandle handle, const char* from, const char* relation, const char* to) {
    static_cast<ElephantMemory*>(handle)->addRelationship(from, relation, to);
}

void em_print_graph(ElephantMemoryHandle handle) {
    static_cast<ElephantMemory*>(handle)->printGraph();
}
