#include "include/func.hpp"

int parse(std::string parsable) {
   if (parsable.size() < 4) {
     return 0;
   }
   if (parsable.compare(0, 3, "GIF")){
    return 2;
   } else if (parsable.compare(0,3, "JPG")) {
    return 1;
   }
   return 0;

}	