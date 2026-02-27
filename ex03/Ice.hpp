#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {
  private:
    std::string name;
  public:
    Ice();
    Ice(Ice const & src);
    ~Ice();
    Ice & operator=(Ice const & src);
    void use(ICharacter& target);
    Ice *clone() const;
};