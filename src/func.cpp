#include <iostream>
#include "include/func.hpp"

int parse(std::string parsable) {
   if (parsable.size() < 4) {
     return 0;
   }
   if (parsable.compare(0, 3, "GIF") == 0){
    return 2;
   } else if (parsable.compare(0,3, "JPG") == 0) {
    return 1;
   }
   return 0;

}	
