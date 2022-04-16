#include "utils.h"

String Utils::getNumberStrWithPaddingZero(int maxDigit, long data) {
  if (maxDigit < 0) {
		return "";
	}
	
  String padding;
  for (int i = 0; i < maxDigit; i++) {
    padding.concat("0");
  }

  String dataStr = String(data);
  if (dataStr.length() > maxDigit) {
    return "";
  }

  String format = padding.substring(dataStr.length()) + dataStr;
  return format;
}