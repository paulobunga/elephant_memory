#include "ElephantMemory.h"

void ElephantMemory::addEntity(const std::string& id, const std::string& name, const std::string& type) {
    entities[id] = {id, name, type};
}

void ElephantMemory::addRelationship(const std::string& from, const std::string& relation, const std::string& to) {
    relationships.push_back({from, relation, to});
}

void ElephantMemory::printGraph() const {
    std::cout << "Entities:\n";
    for (const auto& [id, e] : entities) {
        std::cout << id << ": " << e.name << " (" << e.type << ")\n";
    }
    std::cout << "Relationships:\n";
    for (const auto& r : relationships) {
        std::cout << r.from << " --[" << r.relation << "]--> " << r.to << "\n";
    }
}
