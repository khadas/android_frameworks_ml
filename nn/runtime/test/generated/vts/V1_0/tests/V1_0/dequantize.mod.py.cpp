// Generated from dequantize.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::dequantize {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::dequantize

namespace android::hardware::neuralnetworks::V1_0::generated_tests::dequantize {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, dequantize) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::dequantize::get_examples());
}

TEST_F(ValidationTest, dequantize) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::dequantize

