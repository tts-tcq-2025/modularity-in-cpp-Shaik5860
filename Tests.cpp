#include <iostream>
#include <assert.h>
#include "ColorUtils.h"

namespace TelCoColorCoder
{
    void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) {
        ColorPair colorPair = GetColorFromPairNumber(pairNumber);
        std::cout << "[TEST] Pair Number " << pairNumber 
                  << " -> " << colorPair.ToString() << std::endl;
        assert(colorPair.getMajor() == expectedMajor);
        assert(colorPair.getMinor() == expectedMinor);
    }

    void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
        int pairNumber = GetPairNumberFromColor(major, minor);
        std::cout << "[TEST] Colors " << MajorColorNames[major] << " " << MinorColorNames[minor]
                  << " -> Pair Number " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }

    void RunAllTests() {
        std::cout << "----- Running Unit Tests -----\n";

        testNumberToPair(4, WHITE, BROWN);
        testNumberToPair(5, WHITE, SLATE);

        testPairToNumber(BLACK, ORANGE, 12);
        testPairToNumber(VIOLET, SLATE, 25);

        std::cout << "----- All Tests Passed ✅ -----\n\n";
    }
}
