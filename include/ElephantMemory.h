#pragma once
#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>

/**
 * @struct Entity
 * @brief Represents an entity in the knowledge graph.
 */
struct Entity {
    std::string id;    ///< The unique identifier for the entity.
    std::string name;  ///< The name of the entity.
    std::string type;  ///< The type of the entity.
};

/**
 * @struct Relationship
 * @brief Represents a relationship between two entities.
 */
struct Relationship {
    std::string from;      ///< The ID of the entity where the relationship originates.
    std::string relation;  ///< The name of the relationship.
    std::string to;        ///< The ID of the entity where the relationship terminates.
};

/**
 * @class ElephantMemory
 * @brief A knowledge-graph-powered memory engine.
 */
class ElephantMemory {
public:
    /**
     * @brief Adds an entity to the memory.
     * @param id The unique identifier for the entity.
     * @param name The name of the entity.
     * @param type The type of the entity.
     */
    void addEntity(const std::string& id, const std::string& name, const std::string& type);

    /**
     * @brief Adds a relationship between two entities.
     * @param from The ID of the entity where the relationship originates.
     * @param relation The name of the relationship.
     * @param to The ID of the entity where the relationship terminates.
     */
    void addRelationship(const std::string& from, const std::string& relation, const std::string& to);

    /**
     * @brief Prints the entire knowledge graph to the console.
     */
    void printGraph() const;

private:
    std::unordered_map<std::string, Entity> entities;
    std::vector<Relationship> relationships;
};
