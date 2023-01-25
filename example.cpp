#include "general.hpp"
#include "specific.hpp"

void after_specfic_fn(){
  LOG("after specific usage");
}

int main(){
  general_fn();
  specific_fn();
  after_specfic_fn();
}
