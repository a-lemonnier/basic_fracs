#include <iostream>
#include <cstdlib>
#include <cstdio>

#include "include/basic_fracs.hpp"

int main(int argc, char **argv) {
   
    _frac<> A(1,3);
    _frac<> B=A;
    
    for (int i=0; i<20; i++) {
        _frac<> C=A^i;
        B=B+C;
        B.show();
        std::cout <<"\n";
    }
   
    B++; B.show(); std::cout <<"\n";
    B--; B.show(); std::cout <<"\n";
   
   return EXIT_SUCCESS;
}
