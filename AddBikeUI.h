#ifndef ADDBIKEUI_H
#define ADDBIKEUI_H

#include "AddBikeControl.h"

class AddBikeUI {
    AddBikeControl* control;
public:
    AddBikeUI(AddBikeControl* c);
    void addNewBike(ofstream& out_fp, string id, string name);
    void startInterface(ifstream& in_fp, ofstream& out_fp);
};

#endif
