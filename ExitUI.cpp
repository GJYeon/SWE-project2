#include "ExitUI.h"

ExitUI::ExitUI(ExitControl* control) {
    this->control = control;
}

bool ExitUI::startInterface(ofstream& out_fp) {
    out_fp << "6.1. ����";
    return control->shouldExit();
}
