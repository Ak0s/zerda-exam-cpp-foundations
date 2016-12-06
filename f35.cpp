//============================================================================
// Name        : f35.cpp
// Author      : Ak0s
//============================================================================

#include "f35.hpp"

F35::F35() : aircraft() {
  set_dmg(50);
  set_type("F35");
}


void F35::set_ammo(unsigned int _ammo) {
  try {
    if (ammo <= 12) {
      this->ammo = ammo;
    }
    else {
      throw "Maximum ammo of an F35 is 12!";
    }
  }
  catch (const char* excp) {
    std::cout << excp << std::endl;
  }
}
