#include <Arduino.h>
#include <unity.h>
#include <utils.h>

void test_get_number_padding() {
	TEST_ASSERT_EQUAL_STRING(
		"000022",
		Utils::getNumberStrWithPaddingZero(6, 22).c_str()
	);
}

void test_negative_digit() {
	TEST_ASSERT_EQUAL_STRING(
		"",
		Utils::getNumberStrWithPaddingZero(-1, 22).c_str()
	);
}

void test_should_return_empty_string() {
	TEST_ASSERT_EQUAL_STRING(
		"",
		Utils::getNumberStrWithPaddingZero(4, 10000).c_str()
	);
}

void test_should_be_00300() {
	TEST_ASSERT_EQUAL_STRING(
		"00300",
		Utils::getNumberStrWithPaddingZero(5, 300).c_str()
	);
}

void setup() {
  Serial.begin(115200);
  delay(2000);

  UNITY_BEGIN();
  RUN_TEST(test_get_number_padding);
  RUN_TEST(test_negative_digit);
  RUN_TEST(test_should_return_empty_string);
  UNITY_END();
}

void loop() {}