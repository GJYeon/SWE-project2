#include "ShowBikeInfoUI.h"
#include <fstream>
#include <tuple>

ShowBikeInfoUI::ShowBikeInfoUI(ShowBikeInfoControl* c) {
    this->control = c;
}
void ShowBikeInfoUI::showBikeInfo(ofstream& out_fp) {
    vector<tuple<string, string>> bikes = control->showBikeInfo();
    for (auto& b : bikes) {
        string id = get<0>(b);
        string name = get<1>(b);
        out_fp << "> " << id << " " << name << endl;
    }
    out_fp << endl;
}
void ShowBikeInfoUI::startInterface(ofstream& out_fp) {
    out_fp << "5.1. 자전거 대여 리스트" << endl;
    showBikeInfo(out_fp);
}