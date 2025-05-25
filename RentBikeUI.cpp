#include "RentBikeUI.h"
#include <fstream>

RentBikeUI::RentBikeUI(RentBikeControl* c) {
    this->control = c;
}
void RentBikeUI::rentBike(ofstream& out_fp, string id) {
    string bikeid, name;
    tie(bikeid, name) = control->rentBike(id);

    out_fp << "> " << bikeid << " " << name << endl << endl;
}
void RentBikeUI::startInterface(ifstream& in_fp, ofstream& out_fp) {
    string id;
    in_fp >> id;
    out_fp << "4.1. 자전거 대여" << endl;
    rentBike(out_fp, id);
}