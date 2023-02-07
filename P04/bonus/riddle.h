#ifndef __RIDDLE_H
#define __RIDDLE_H

#include <ostream>

class Riddle {
  public:
    Riddle(std::string question);
    virtual ~Riddle();
    Riddle(const Riddle& riddle);
    Riddle& operator=(const Riddle& riddle);
    void add_solution(std::string solution);
    friend std::ostream& operator<<(std::ostream& ost, const Riddle& riddle);
  private:
    std::string* _question;
    std::string* _solution;
};
#endif
