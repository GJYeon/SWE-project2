#ifndef RENTBIKECONTROL_H
#define RENTBIKECONTROL_H
#include "LoginManager.h"
#include "BikeRepository.h"
#include <tuple>

class RentBikeControl {
    LoginManager* auth;
    BikeRepository* repo;
public:
    RentBikeControl(LoginManager* l, BikeRepository* r);
    tuple<string, string> rentBike(string id);
    
};

#endif
