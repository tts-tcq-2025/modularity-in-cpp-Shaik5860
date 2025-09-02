#ifndef COLORUTILS_H
#define COLORUTILS_H

#include "ColorPair.h"

namespace TelCoColorCoder {

ColorPair get_color_from_pair_number(int pair_number);
int get_pair_number_from_color(MajorColor major, MinorColor minor);

} // namespace TelCoColorCoder

#endif // COLORUTILS_H
