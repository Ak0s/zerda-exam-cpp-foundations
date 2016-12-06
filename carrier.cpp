//============================================================================
// Name        : carrier.cpp
// Author      : Ak0s
//============================================================================

#include "carrier.hpp"

Carrier::Carrier(unsigned int initial_ammo, unsigned int initial_hp) {
  this->store_of_ammo = initial_ammo;
  this->hp = initial_hp;
}

void Carrier::add_aircraft(std::string _new_aircraft) {
  if (_new_aircraft == "F16") {
    aircraft* new_aircraft = new F16;
    aircrafts.push_back(*new_aircraft);
  }
  else if (_new_aircraft == "F35") {
    aircraft* new_aircraft = new F35;
    aircrafts.push_back(*new_aircraft);
  }
  else {
    std::cout << "No such aircraft type exists!" << std::endl;
  }
}

void Carrier::fill() {
  if (store_of_ammo != 0) {
    for (unsigned int i = 0; i < aircrafts.size(); i++) {
      if (aircrafts[i].get_type() == "F16") {
        aircrafts[i].refill(store_of_ammo);
      }
      if (aircrafts[i].get_type() == "F35") {
         aircrafts[i].refill(store_of_ammo);
      }
//      if (store_of_ammo < need_for_refill()) {
//        if (aircrafts[i].get_type() == "F35") {
//          aircrafts[i].refill(store_of_ammo);       NEM SIKERÜLT BEFEJEZNI HOGY EDGE CASERE IS MENJEN!
              }
  }
  else {
    std::cout << "Out of ammo!";
  }
}

void Carrier::fight(Carrier& enemy_carrier) {
  enemy_carrier.hp -= store_of_ammo * (f35_counter()/(aircrafts.size() - f35_counter())) * 50 +
                      store_of_ammo * ((aircrafts.size() - f35_counter())/f35_counter()) * 30;
}

unsigned int Carrier::f35_counter() {
  unsigned int f35_counter = 0;
  for (unsigned int i = 0; i < aircrafts.size(); i++) {
    if (aircrafts[i].get_type() == "F35") {
      f35_counter++;
    }
  }
  return f35_counter;
}

unsigned int Carrier::need_for_refill() {
  return f35_counter() * 12 + (aircrafts.size() - f35_counter()) * 8;
}

std::string Carrier::get_status() {
  if (hp > 0) {

    std::string aircrafts_status;
    for (unsigned int i = 0; i < aircrafts.size(); i++) {
      aircrafts_status += "Type: " + aircrafts[i].get_type() + ", Ammo: " + std::to_string(aircrafts[i].get_ammo()) + ", Base damage: " + std::to_string(aircrafts[i].get_dmg()) + ", All damage: " + std::to_string(aircrafts[i].get_ammo() * aircrafts[i].get_dmg()) + "\n";
    }
    std::string carrier_status = "Aircraft count: " + std::to_string(aircrafts.size()) + ", Carrier HP: " + std::to_string(hp) + ", Ammo Storage: " + std::to_string(store_of_ammo) + ", Total damage: " + std::to_string((f35_counter() * 50 + (aircrafts.size() - f35_counter()) * 30) * store_of_ammo) + "\n";
    return carrier_status + aircrafts_status;
  }
  else {
    return "It's dead Jim! :(";
  }
}

