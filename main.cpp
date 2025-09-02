#include "Tests.cpp"
#include "ReferenceManual.h"

using namespace TelCoColorCoder;

int main() {
    RunAllTests();             // Run all unit tests
    print_reference_manual();   // Print the wiring reference manual
    return 0;
}
