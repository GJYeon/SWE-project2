#include "BikeRepository.h"


void BikeRepository::addBike(Bike* bike) {
    bikes.push_back(bike);
}
Bike* BikeRepository::findBikeById(string id) {
    for (Bike* b : bikes) {
        if (b->getId() == id) return b;
    }
    return nullptr;
}
