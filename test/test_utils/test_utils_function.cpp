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

void setup() {
  Serial.begin(115200);
  delay(2000);

  UNITY_BEGIN();
  RUN_TEST(test_get_number_padding);
  RUN_TEST(test_negative_digit);
  UNITY_END();
}

void loop() {}