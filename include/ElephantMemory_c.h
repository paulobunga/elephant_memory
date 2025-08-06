#pragma once
#include "ElephantMemory.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief An opaque handle to an ElephantMemory instance.
 */
typedef void* ElephantMemoryHandle;

/**
 * @brief Creates a new ElephantMemory instance.
 * @return A handle to the new ElephantMemory instance.
 */
ElephantMemoryHandle em_create();

/**
 * @brief Frees an ElephantMemory instance.
 * @param handle A handle to the ElephantMemory instance to be freed.
 */
void em_free(ElephantMemoryHandle handle);

/**
 * @brief Adds an entity to the memory.
 * @param handle A handle to the ElephantMemory instance.
 * @param id The unique identifier for the entity.
 * @param name The name of the entity.
 * @param type The type of the entity.
 */
void em_add_entity(ElephantMemoryHandle handle, const char* id, const char* name, const char* type);

/**
 * @brief Adds a relationship between two entities.
 * @param handle A handle to the ElephantMemory instance.
 * @param from The ID of the entity where the relationship originates.
 * @param relation The name of the relationship.
 * @param to The ID of the entity where the relationship terminates.
 */
void em_add_relationship(ElephantMemoryHandle handle, const char* from, const char* relation, const char* to);

/**
 * @brief Prints the entire knowledge graph to the console.
 * @param handle A handle to the ElephantMemory instance.
 */
void em_print_graph(ElephantMemoryHandle handle);

#ifdef __cplusplus
}
#endif
