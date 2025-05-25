#ifndef EXITUI_H
#define EXITUI_H

#include "ExitControl.h"
#include <fstream>
using namespace std;

class ExitUI {
    ExitControl* control;
public:
    ExitUI(ExitControl* control);
    bool startInterface(ofstream& out_fp);
};



#endif
