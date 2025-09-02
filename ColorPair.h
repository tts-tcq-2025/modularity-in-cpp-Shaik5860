#ifndef COLORPAIR_H
#define COLORPAIR_H

#include <string>

namespace TelCoColorCoder {

enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
extern const int numberOfMajorColors;
extern const int numberOfMinorColors;

class ColorPair {
 public:
    ColorPair(MajorColor major, MinorColor minor);
    MajorColor get_major() const;
    MinorColor get_minor() const;
    std::string to_string() const;

 private:
    MajorColor major_;
    MinorColor minor_;
};

} // namespace TelCoColorCoder

#endif // COLORPAIR_H
