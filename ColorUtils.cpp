#include "ColorUtils.h"
#include <stdexcept>

namespace TelCoColorCoder {

ColorPair get_color_from_pair_number(int pair_number) {
    if (pair_number < 1 || pair_number > numberOfMajorColors * numberOfMinorColors) {
        throw std::out_of_range("Pair number out of range");
    }
    int zero_index = pair_number - 1;
    MajorColor major = static_cast<MajorColor>(zero_index / numberOfMinorColors);
    MinorColor minor = static_cast<MinorColor>(zero_index % numberOfMinorColors);
    return ColorPair(major, minor);
}

int get_pair_number_from_color(MajorColor major, MinorColor minor) {
    return static_cast<int>(major) * numberOfMinorColors + static_cast<int>(minor) + 1;
}

} // namespace TelCoColorCoder
