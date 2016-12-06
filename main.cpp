//============================================================================
// Name        : main.cpp
// Author      : Ak0s
//============================================================================

#include <iostream>
#include "carrier.hpp"
#include "aircraft.hpp"
#include "f16.hpp"
#include "f35.hpp"

using namespace std;


int main() {

  Carrier carrier1(300,5000);
  carrier1.add_aircraft("F16");
  carrier1.add_aircraft("F16");
  carrier1.add_aircraft("F35");

  Carrier carrier2(10,400);
  carrier2.add_aircraft("F16");
  carrier2.add_aircraft("F35");
  carrier2.add_aircraft("F35");


  carrier1.fill();
  carrier2.fight(carrier1);
  cout << carrier1.get_status();


	return 0;
}
