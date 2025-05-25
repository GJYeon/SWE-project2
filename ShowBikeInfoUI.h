#ifndef SHOWBIKEINFOUI_H
#define SHOWBIKEINFOUI_H
#include "ShowBikeInfoControl.h"


class ShowBikeInfoUI {
    ShowBikeInfoControl* control;
public:
    ShowBikeInfoUI(ShowBikeInfoControl* c);
    void showBikeInfo(ofstream& out_fp);
    void startInterface(ofstream& out_fp);
};

#endif

