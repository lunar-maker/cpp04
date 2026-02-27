#include "Brain.hpp"

Brain::Brain() {
  std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &copy) {
  std::cout << "Brain copy constructor" << std::endl;
  *this = copy;
} 

Brain::~Brain() {
  std::cout << "Brain default destructor" << std::endl;
}

Brain &Brain::operator=(const Brain &copy) {
  std::cout << "Brain assignation operator" << std::endl;
  for (int i = 0; i < 100; i++)
    ideas[i] = copy.ideas[i];
  return *this;
}

std::string Brain::getIdea(int index) const {
  return ideas[index];
}

void Brain::setIdea(const int index, std::string const &idea) {
  ideas[index] = idea;
}
