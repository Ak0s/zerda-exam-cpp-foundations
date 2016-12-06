//============================================================================
// Name        : aircraft.cpp
// Author      : Ak0s
//============================================================================

#include "aircraft.hpp"

using namespace std;


aircraft::aircraft() {
  dmg = 0;
  ammo = 0;
}

void aircraft::set_ammo(unsigned int ammo) {
  this->ammo = ammo;
}

void aircraft::set_dmg(unsigned int dmg) {
  this->dmg = dmg;
}

void aircraft::set_type(std::string type) {
  this->type = type;
}

unsigned int aircraft::get_ammo() {
  return ammo;
}

unsigned int aircraft::get_dmg() {
  return dmg;
}

std::string aircraft::get_type() {
  return type;
}

std::string aircraft::get_status() {
  return "Type: " + type + ", Ammo: " + to_string(ammo) + ", Base Damage: " + to_string(dmg) + ", All Damage: " + to_string(ammo*dmg);
}

unsigned int aircraft::fight() {
  unsigned int total_dmg = ammo * dmg;
  ammo = 0;
  return total_dmg;
}

unsigned int aircraft::refill(unsigned int& store_of_ammo) {
  if (type == "F16") {
    if (store_of_ammo > f16_max_ammo) {
      ammo = f16_max_ammo;
      store_of_ammo -= f16_max_ammo;
    }
    else {
      ammo = store_of_ammo;
      store_of_ammo = 0;
    }
  }
  else if (type == "F35") {
    if (store_of_ammo > f35_max_ammo) {
      ammo = f35_max_ammo;
      store_of_ammo -= f35_max_ammo;
    }
    else {
      ammo = store_of_ammo;
      store_of_ammo = 0;
    }
  }
  return store_of_ammo;
}



