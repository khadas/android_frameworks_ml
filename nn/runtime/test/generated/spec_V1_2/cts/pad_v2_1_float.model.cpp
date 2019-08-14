// Generated from pad_v2_1_float.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::pad_v2_1_float {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 4, 7, 1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 4, 7, 1});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type3);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type5);
  auto param = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy, param}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type4);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy1, param1}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 4, 7, 1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type3);
  // Phase 2, operations
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, paddings},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type4);
  // Phase 2, operations
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, paddings},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 4, 7, 1});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type3);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type6);
  // Phase 2, operations
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy2, param2}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type4);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  // Phase 2, operations
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy3, param3}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_float16(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type7(Type::TENSOR_FLOAT16, {1, 2, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT16, {1, 4, 7, 1});
  OperandType type9(Type::FLOAT16, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type9);
  auto output0 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  static _Float16 pad_value_init[] = {9.300000190734863f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type10(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT16, {1, 2, 3, 1});
  OperandType type9(Type::FLOAT16, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type9);
  auto output0 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  static _Float16 pad_value_init[] = {9.300000190734863f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {1, 2, 3, 1});
  OperandType type12(Type::TENSOR_FLOAT16, {1});
  OperandType type6(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT16, {1, 4, 7, 1});
  OperandType type9(Type::FLOAT16, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type11);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type9);
  auto output0 = model->addOperand(&type8);
  auto input0_tmp = model->addOperand(&type11);
  auto dummy4 = model->addOperand(&type12);
  auto param4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  static _Float16 pad_value_init[] = {9.300000190734863f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(_Float16) * 1);
  static _Float16 dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(_Float16) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy4, param4}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type10(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type11(Type::TENSOR_FLOAT16, {1, 2, 3, 1});
  OperandType type12(Type::TENSOR_FLOAT16, {1});
  OperandType type6(Type::INT32, {});
  OperandType type9(Type::FLOAT16, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type11);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type9);
  auto output0 = model->addOperand(&type10);
  auto input0_tmp = model->addOperand(&type11);
  auto dummy5 = model->addOperand(&type12);
  auto param5 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  static _Float16 pad_value_init[] = {9.300000190734863f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(_Float16) * 1);
  static _Float16 dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy5, param5}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_float16_all_tensors_as_inputs(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type7(Type::TENSOR_FLOAT16, {1, 2, 3, 1});
  OperandType type8(Type::TENSOR_FLOAT16, {1, 4, 7, 1});
  OperandType type9(Type::FLOAT16, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type9);
  auto output0 = model->addOperand(&type8);
  // Phase 2, operations
  static _Float16 pad_value_init[] = {9.300000190734863f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, paddings},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type10(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT16, {1, 2, 3, 1});
  OperandType type9(Type::FLOAT16, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type9);
  auto output0 = model->addOperand(&type10);
  // Phase 2, operations
  static _Float16 pad_value_init[] = {9.300000190734863f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, paddings},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {1, 2, 3, 1});
  OperandType type12(Type::TENSOR_FLOAT16, {1});
  OperandType type6(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT16, {1, 4, 7, 1});
  OperandType type9(Type::FLOAT16, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type11);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type9);
  auto output0 = model->addOperand(&type8);
  auto input0_tmp = model->addOperand(&type11);
  auto dummy6 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type6);
  // Phase 2, operations
  static _Float16 pad_value_init[] = {9.300000190734863f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(_Float16) * 1);
  static _Float16 dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(_Float16) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy6, param6}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type10(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type11(Type::TENSOR_FLOAT16, {1, 2, 3, 1});
  OperandType type12(Type::TENSOR_FLOAT16, {1});
  OperandType type6(Type::INT32, {});
  OperandType type9(Type::FLOAT16, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type11);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type9);
  auto output0 = model->addOperand(&type10);
  auto input0_tmp = model->addOperand(&type11);
  auto dummy7 = model->addOperand(&type12);
  auto param7 = model->addOperand(&type6);
  // Phase 2, operations
  static _Float16 pad_value_init[] = {9.300000190734863f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(_Float16) * 1);
  static _Float16 dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy7, param7}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 4, 7, 1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 4, 7, 1});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type3);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy8 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy8, param8}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type4);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy9 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy9, param9}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_relaxed_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 4, 7, 1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type3);
  // Phase 2, operations
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, paddings},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type4);
  // Phase 2, operations
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, paddings},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 4, 7, 1});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type3);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy10 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  // Phase 2, operations
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy10, param10}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, input0_tmp},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float
namespace generated_tests::pad_v2_1_float {

void CreateModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type4);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy11 = model->addOperand(&type5);
  auto param11 = model->addOperand(&type6);
  // Phase 2, operations
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy11, param11}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, input0_tmp},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_v2_1_float