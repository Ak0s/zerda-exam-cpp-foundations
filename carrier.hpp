//============================================================================
// Name        : carrier.hpp
// Author      : Ak0s
//============================================================================

#ifndef CARRIER_HPP_
#define CARRIER_HPP_

#include <iostream>
#include <vector>
#include <string>
#include "aircraft.hpp"
#include "f16.hpp"
#include "f35.hpp"

class Carrier {
  private:
    std::vector<aircraft> aircrafts;
    unsigned int store_of_ammo;
    unsigned int hp;
  public:
    Carrier(unsigned int intitial_ammo, unsigned int initial_hp);
    void add_aircraft(std::string new_aircraft);
    void fill();
    void fight(Carrier& enemy_carrier);
    unsigned int f35_counter();
    unsigned int need_for_refill();
    std::string get_status();
};



#endif /* CARRIER_HPP_ */
