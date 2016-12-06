//============================================================================
// Name        : aircraft.hpp
// Author      : Ak0s
//============================================================================

#ifndef AIRCRAFT_HPP_
#define AIRCRAFT_HPP_

#include <iostream>
#include <string>

class aircraft {
  private:
    unsigned int dmg;
    unsigned const int f16_max_ammo = 8;
    unsigned const int f35_max_ammo = 12;
    std::string type;
  protected:
    unsigned int ammo;
  public:
    aircraft();
    virtual void set_ammo(unsigned int ammo);
    void set_dmg(unsigned int dmg);
    void set_type(std::string type);
    unsigned int get_ammo();
    unsigned int get_dmg();
    std::string get_type();
    std::string get_status();
    unsigned int fight();
    unsigned int refill(unsigned int& store_of_ammo);
    virtual ~aircraft() {}
};



#endif /* AIRCRAFT_HPP_ */
