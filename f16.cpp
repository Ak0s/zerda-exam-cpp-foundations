//============================================================================
// Name        : f16.cpp
// Author      : Ak0s
//============================================================================

#include "f16.hpp"


F16::F16() : aircraft() {
  set_ammo(0);
  set_dmg(30);
  set_type("F16");
}


void F16::set_ammo(unsigned int ammo) {
  try {
    if (ammo <= 8) {
      this->ammo = ammo;
    }
    else {
      throw "Maximum ammo of an F16 is 8!";
    }
  }
  catch (const char* excp) {
    std::cout << excp << std::endl;
  }
}
