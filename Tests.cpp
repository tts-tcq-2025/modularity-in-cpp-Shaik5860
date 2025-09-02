#include "ColorUtils.h"
#include <iostream>
#include <assert.h>

namespace TelCoColorCoder {

static void test_number_to_pair(int pair_number, MajorColor expected_major,
                                MinorColor expected_minor) {
    ColorPair cp = get_color_from_pair_number(pair_number);
    std::cout << "[TEST] Pair " << pair_number << " -> " << cp.to_string() << "\n";
    assert(cp.get_major() == expected_major);
    assert(cp.get_minor() == expected_minor);
}

static void test_pair_to_number(MajorColor major, MinorColor minor,
                                int expected_pair_number) {
    int pair_number = get_pair_number_from_color(major, minor);
    std::cout << "[TEST] Colors " << MajorColorNames[major] << " "
              << MinorColorNames[minor] << " -> Pair " << pair_number << "\n";
    assert(pair_number == expected_pair_number);
}

void RunAllTests() {
    std::cout << "----- Running Unit Tests -----\n";
    test_number_to_pair(4, WHITE, BROWN);
    test_number_to_pair(5, WHITE, SLATE);
    test_pair_to_number(BLACK, ORANGE, 12);
    test_pair_to_number(VIOLET, SLATE, 25);
    std::cout << "----- All Tests Passed ✅ -----\n\n";
}

} // namespace TelCoColorCoder
