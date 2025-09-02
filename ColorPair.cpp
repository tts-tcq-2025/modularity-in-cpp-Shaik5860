#include "ColorPair.h"

namespace TelCoColorCoder {

const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };
const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };

const int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

ColorPair::ColorPair(MajorColor major, MinorColor minor)
    : major_(major), minor_(minor) {}

MajorColor ColorPair::get_major() const { return major_; }

MinorColor ColorPair::get_minor() const { return minor_; }

std::string ColorPair::to_string() const {
    return std::string(MajorColorNames[major_]) + " " +
           MinorColorNames[minor_];
}

} // namespace TelCoColorCoder
