#ifndef COLORALL_H
#define COLORALL_H
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;

class colorsall{
  private:
  string line;
  int num;
  

  public:

    //ask for the number of colors
    int howManyColors(int&);

    //retrieve corresponding file for color combinatio 
    vector<int>whichColors(int&, string&);

};

#endif