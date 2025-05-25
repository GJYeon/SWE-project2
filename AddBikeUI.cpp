#include "AddBikeUI.h"
#include <fstream>

AddBikeUI::AddBikeUI(AddBikeControl* c) {
    this->control = c;
}
void AddBikeUI::addNewBike(ofstream& out_fp, string id, string name) {
    control->addNewBike(id, name);
    out_fp << "> " << id << " " << name << endl << endl;
}
void AddBikeUI::startInterface(ifstream& in_fp, ofstream& out_fp) {
    string id, name;
    in_fp >> id >> name;
    out_fp << "3.1. 자전거 등록" << endl;
    addNewBike(out_fp, id, name);
}