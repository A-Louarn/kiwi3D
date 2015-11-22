#include <iostream>
#include "kiwi-system/KiWindowGL.h"
#include "kiwi-system/KiParameters.h"

int main(int argc, char ** argv)
{
    kiwi::Parameters p;
    kiwi::WindowGL w(&p);

    return w.exec();
}
