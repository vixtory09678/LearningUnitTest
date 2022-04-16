#ifndef UTILS_H
#define UTILS_H

#include <Arduino.h>

class Utils {
public:
  static String getNumberStrWithPaddingZero(int maxDigit, long data);
};

#endif