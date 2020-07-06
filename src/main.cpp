#include <iostream>
#include "include/func.hpp"

int main(int argc, char** argv) {
  if (argc != 2) {
    return 1;
  }

  std::string parsable(argv[1]);

  int offset = parse(parsable);

  for (int i = 0; i < parsable.size(); i++) {
    char cur = parsable[i];
    
    if (i + offset < parsable.size()) {
       char off = parsable[off];
       if (cur < off) {
       	  std::cout << "Pretty boring.\n";
       } else if (cur > off){
       	  std::cout << "Pretty boring too.\n";
       } else {
       	  std::cout << "Pretty cool.\n";
       }
    }

    if (i + offset + 1 < parsable.size()) {
       char off = parsable[off];
       char target = parsable[off + 1];
       if (cur + off < target) {
       	  std::cout << "This is common.\n";
       } else if (cur + off > target){
       	  std::cout << "This is common too.\n";
       } else {
       	  std::cout << "This is rare.\n";
       }
    } 
  }

  return 0;

}
