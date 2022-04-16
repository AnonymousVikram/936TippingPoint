#include "main.h"

void clampDecisionMaker(bool butA, bool butB) {
    if(butA) {
        // if(clamping) {
        //     ringClamperL.set_value(false);
        //     ringClamperR.set_value(false);
        // }
        // else {
        //     ringClamperL.set_value(true);
        //     ringClamperR.set_value(true);
        // }
        clampingBack = !clampingBack;
        ringClamperL.set_value(clampingBack);
        ringClamperR.set_value(clampingBack);
    }
    if(butB) {
        clampingFront = !clampingFront;
        liftClamperL.set_value(clampingFront);
        liftClamperR.set_value(clampingFront);
    }
}