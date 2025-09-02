#include "ReferenceManual.h"
#include "ColorUtils.h"
#include <iostream>

namespace TelCoColorCoder
{
    void PrintReferenceManual() {
        int totalPairs = numberOfMajorColors * numberOfMinorColors;
        std::cout << "------ 25 Pair Color Code Reference Manual ------\n";
        for (int i = 1; i <= totalPairs; i++) {
            ColorPair cp = GetColorFromPairNumber(i);
            std::cout << "Pair " << i << ": " << cp.ToString() << std::endl;
        }
        std::cout << "------------------------------------------------\n";
    }
}
