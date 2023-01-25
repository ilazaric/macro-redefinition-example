#pragma once

#include "general.hpp"

#pragma push_macro("LOG")
#undef LOG
#define LOG_SPECIFIC(x) do {printf("<SPECIFIC> "); LOG_GENERIC(x);} while (0)
#define LOG LOG_SPECIFIC

void specific_fn(){
  LOG("specific usage");
}

#undef LOG
#pragma pop_macro("LOG")
