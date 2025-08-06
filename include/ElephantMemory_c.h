#pragma once
#include "ElephantMemory.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void* ElephantMemoryHandle;

ElephantMemoryHandle em_create();
void em_free(ElephantMemoryHandle handle);
void em_add_entity(ElephantMemoryHandle handle, const char* id, const char* name, const char* type);
void em_add_relationship(ElephantMemoryHandle handle, const char* from, const char* relation, const char* to);
void em_print_graph(ElephantMemoryHandle handle);

#ifdef __cplusplus
}
#endif
