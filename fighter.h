#include "airplane.h"
#include "weapon.h"

#ifndef FIGHTER
#define FIGHTER


class Fighter : public Airplane
{
public:
  Fighter(const Weapon& wp){
    wpn = wp;
  }

private:
  Weapon wpn;
};

#endif //FINGHTER
