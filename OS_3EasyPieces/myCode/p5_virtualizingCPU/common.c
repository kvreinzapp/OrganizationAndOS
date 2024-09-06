// common.c
#include "common.h"
#include <unistd.h> // For sleep function

void Spin(int seconds) {
  sleep(seconds); // Pause execution for a given number of seconds
}
