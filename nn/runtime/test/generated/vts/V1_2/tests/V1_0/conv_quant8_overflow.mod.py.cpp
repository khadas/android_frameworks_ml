// Generated from conv_quant8_overflow.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::conv_quant8_overflow {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::conv_quant8_overflow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv_quant8_overflow {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, conv_quant8_overflow) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::conv_quant8_overflow::get_examples());
}

TEST_F(ValidationTest, conv_quant8_overflow) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::conv_quant8_overflow::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv_quant8_overflow

namespace generated_tests::conv_quant8_overflow {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::conv_quant8_overflow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv_quant8_overflow {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, conv_quant8_overflow_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::conv_quant8_overflow::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, conv_quant8_overflow_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::conv_quant8_overflow::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv_quant8_overflow

