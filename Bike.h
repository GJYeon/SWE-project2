#pragma once
#include <string>
#include <vector>
using namespace std;

class Bike {
private:
    string id, name;
    bool isrented = false;
public:
    Bike(string id, string name);
    bool rentBike();
    tuple<string, string> getBikeDetail();
    string getId();
};
