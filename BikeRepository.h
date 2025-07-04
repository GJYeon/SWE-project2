#ifndef BIKEREPOSITORY_H
#define BIKEREPOSITORY_H
#include <vector>
#include "bike.h"

class BikeRepository {
private:
    vector<Bike*> bikes;

public:
    void addBike(Bike* bike);
    Bike* findBikeById(string id);
};

#endif