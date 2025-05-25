#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H
#include "RentBikeControl.h"

class RentBikeUI {
    RentBikeControl* control;
public:
    RentBikeUI(RentBikeControl* c);
    void rentBike(ofstream& out_fp, string id);
    void startInterface(ifstream& in_fp, ofstream& out_fp);
};

#endif
