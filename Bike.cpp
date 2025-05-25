#include "Bike.h"
#include <string>
#include <vector>
#include <tuple>

Bike::Bike(string id, string name) : id(id), name(name) {}
bool Bike::rentBike() {
    isrented = true;
    return isrented;
}
tuple<string, string> Bike::getBikeDetail() {
    return make_tuple(id, name);
}
string Bike::getId() { return id; };