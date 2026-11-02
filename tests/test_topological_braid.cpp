#include <iostream>
#include <cassert>
#include <cmath>
#include "torky/topological_braid_engine.hpp"

using namespace torky::topological::braid;

int main() {
    std::cout << "[TEST RUNNER] Verifying torky-topological-braid..." << std::endl;
    assert(sizeof(TorkyCellDtype) == 9);
    double v0 = TopologicalBraidEngine::evaluate_v_finite(0.0);
    assert(v0 > 0.0);
    double braid = TopologicalBraidEngine::evaluate_anyon_braid(1.0);
    assert(!std::isnan(braid));
    std::cout << ">>> ALL torky-topological-braid KERNELS PASSED (v24.0.0-GA)!" << std::endl;
    return 0;
}
