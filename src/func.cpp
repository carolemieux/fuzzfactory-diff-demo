#include <iostream>
#include "include/func.hpp"

int parse(std::string parsable) {
   if (parsable.size() < 4) {
     return 0;
   }
   if (parsable.compare(0, 3, "GIF") == 0){
    std::cout << "A changed piece of code\n";
    return 3;
   } else if (parsable.compare(0,3, "JPG") == 0) {
    return 1;
   }
   return 0;

}	
