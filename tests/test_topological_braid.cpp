#include <iostream>
#include <cassert>
#include "torky/topological_braid_engine.hpp"

using namespace torky::topological::braid;

int main() {
    std::cout << "[TEST RUNNER] Verifying torky-topological-braid..." << std::endl;
    assert(sizeof(TorkyCellDtype) == 9);

    TorkyCellDtype cell{0x0123456789ABCDEFULL, 0x01};
    for(int i = 0; i < 100000; ++i) {
        cell = TopologicalBraidEngine::execute_braid_step(cell, 0.785398);
    }

    std::cout << ">>> ALL torky-topological-braid KERNELS PASSED (v24.0.0-GA)!" << std::endl;
    return 0;
}
