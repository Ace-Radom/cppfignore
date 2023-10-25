#include<iostream>
#include"cppfignore.h"

int main(){
    rena::cppfignore cfi;

    cfi.open( ".gitignore" );
    cfi.parse();
    std::cout << cfi.check( "build1/test" );
    std::cout << cfi.check( "cppfignore.code-workspace" );
    std::cout << cfi.check( "src/test.d" );
    std::cout << cfi.check( "src/build" );
    std::cout << cfi.check( "test" );
    std::cout << cfi.check( "test1" );

    return 0;
}