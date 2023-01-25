#pragma once

// this represents a commonly included header in our codebase
// with some generic utility and includes

#include <cstdio>

// the generic version LOG version we are happy if people use it wherever
#define LOG(x) printf("INFO: " #x "\n")

namespace general {
  void use_log_macro(){
    LOG(hello world);
  }
}

