#include <ExampleLib.h>
#include "base.h"
#include <iostream>

using namespace DoSomething;

int main()
{
    setlocale(LC_ALL, "Russian");

    Base::base base; // V1 base
    PerformerSomething performer; // V2 base user

    performer.Perform();

    base.Do();

    return 0;
}