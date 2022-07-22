#include "greet.h"
#include <iostream>

int main(int argc, char *argv[]){
	if (argc < 2){
		std::cout << "No name specified" << std::endl;
	} else {
  	greet(argv[1]);
	}
  return 0;
}
