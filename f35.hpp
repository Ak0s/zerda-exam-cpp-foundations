//============================================================================
// Name        : f35.hpp
// Author      : Ak0s
//============================================================================

#ifndef F35_HPP_
#define F35_HPP_

#include <iostream>
#include "aircraft.hpp"

class F35 : public aircraft {
public:
  F35();
  void set_ammo(unsigned int ammo);
  ~F35() {}
};

#endif /* F35_HPP_ */
