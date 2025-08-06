#pragma once
#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>

struct Entity {
    std::string id;
    std::string name;
    std::string type;
};

struct Relationship {
    std::string from;
    std::string relation;
    std::string to;
};

class ElephantMemory {
public:
    void addEntity(const std::string& id, const std::string& name, const std::string& type);
    void addRelationship(const std::string& from, const std::string& relation, const std::string& to);
    void printGraph() const;

private:
    std::unordered_map<std::string, Entity> entities;
    std::vector<Relationship> relationships;
};
