// clang-format off
// Generated file (from: pad_quant8.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace pad_quant8 {
// Generated pad_quant8 test
#include "generated/examples/pad_quant8.example.cpp"
// Generated model constructor
#include "generated/models/pad_quant8.model.cpp"
} // namespace pad_quant8

TEST_F(GeneratedTests, pad_quant8) {
    execute(pad_quant8::CreateModel,
            pad_quant8::is_ignored,
            pad_quant8::get_examples());
}
