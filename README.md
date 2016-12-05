# Zerda C++ Foundation Exam

## Aircraft Carrier
### Aircrafts
Create a class that represents an aircraft

There are 2 types of aircrafts: F16 and F35
Both aircraft should track how many ammo it has

#### F16
Max ammo: 8
Base damage: 30

#### F35
Max ammo: 12
Base damage: 50

All the aircrafts should be created with empty ammo store

Methods:

#### fight
It should use all the ammos (set it to 0) and it should return the damage it took
The damage is the multiplication of the base damage and the ammos

#### refill
It should take an number as reference and substract as much ammo as possibe,
it can't have more ammo than the number or the max ammo.

#### get_type
It should return it's type as a string

#### get_status
It should return a string like: `Type F35, Ammo: 10, Base Damage: 50, All Damage: 500`

### Carrier
Create a class that represents an aircraft-carrier

The carrier should be able to store aircrafts
(you can use the `std::vector`) It should store pointers to the aircrafts
Each carrier should have a store of ammo represented as number
The inital ammo should be give by a parameter in it's constructor
It should store a health point as a number

Methods:


#### add_aircraft
It should take a string as the type of the aircraft and add a new aircraft to
its store

#### fill
It should fill the aircraft with ammo and substract the needed ammo from the
ammo_storage. If there is not enough ammo than it should fill the F35 types first

#### fight
It should take another carrier as a refrence parameter and fire all the ammo
from the aircraft to it than substract all the damage from it's health points

#### get_status
It should give back a string about it's and all of its aircrafts status like:
```
Aircraft count: 4, Ammo Storage: 2300, Total damage: 2280
Aircrafts:
Type F35, Ammo: 12, Base Damage: 50, All Damage: 600
Type F35, Ammo: 12, Base Damage: 50, All Damage: 600
Type F35, Ammo: 12, Base Damage: 50, All Damage: 600
Type F16, Ammo: 8, Base Damage: 30, All Damage: 240
Type F16, Ammo: 8, Base Damage: 30, All Damage: 240
```
