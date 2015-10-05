#include <iostream>
#include <iomanip>
#include "parser.H"

using namespace std;
int main(int argc,char* argv[]) {
   const char* fn = 0;
   if (argc == 2)
      fn = argv[1];
   Parser p;
   p.run(fn);
   if (p.isGood()) {
     std::cout << "Input OK" << std::endl;
   } else 
     std::cout << "Input BAD" << std::endl;
}
