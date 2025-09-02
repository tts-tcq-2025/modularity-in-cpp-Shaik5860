#include "ReferenceManual.h"
#include "ColorUtils.h"
#include <iostream>

namespace TelCoColorCoder {

void print_reference_manual() {
    std::cout << "------ 25-Pair Color Code Reference Manual ------\n";
    for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) {
        ColorPair cp = get_color_from_pair_number(i);
        std::cout << "Pair " << i << ": " << cp.to_string() << "\n";
    }
    std::cout << "------------------------------------------------\n";
}

} // namespace TelCoColorCoder
