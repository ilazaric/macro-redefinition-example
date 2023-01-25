#pragma once

#include <cstdio>

#define LOG_GENERIC(x) printf("INFO: " x "\n")
#define LOG LOG_GENERIC

void general_fn(){
  LOG("general usage");
}
