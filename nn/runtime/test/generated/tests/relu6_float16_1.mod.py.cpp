// clang-format off
// Generated file (from: relu6_float16_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace relu6_float16_1 {
// Generated relu6_float16_1 test
#include "generated/examples/relu6_float16_1.example.cpp"
// Generated model constructor
#include "generated/models/relu6_float16_1.model.cpp"
} // namespace relu6_float16_1

TEST_F(GeneratedTests, relu6_float16_1) {
    execute(relu6_float16_1::CreateModel,
            relu6_float16_1::is_ignored,
            relu6_float16_1::get_examples());
}
