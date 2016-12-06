//============================================================================
// Name        : f16.hpp
// Author      : Ak0s
//============================================================================

#ifndef F16_HPP_
#define F16_HPP_

#include <iostream>
#include "aircraft.hpp"


class F16 : public aircraft {
public:
  F16();
  void set_ammo(unsigned int ammo);
  ~F16() {}
};

#endif /* F16_HPP_ */
