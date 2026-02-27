#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
  private:
    std::string ideas[100];
  public:
    Brain();
    Brain(const Brain &copy);
    ~Brain();
    Brain &operator=(const Brain &copy);
    void setIdea(const int index, std::string const &idea);
    std::string getIdea(int index) const;
};

#endif