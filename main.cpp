#include <iostream>
#include <assert.h>
#include "ReferenceManual.h"

// Forward declaration of test runner from Tests.cpp
namespace TelCoColorCoder {
    void RunAllTests();
}

using namespace TelCoColorCoder;

int main() {
    // Run all unit tests
    RunAllTests();

    // Print reference manual for wiring personnel
    PrintReferenceManual();

    return 0;
}

