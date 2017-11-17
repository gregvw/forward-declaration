#include "Foo.hpp"
#include "Bar.hpp"
#include <iostream>

int main( int argc, char *argv[] ) {

  Foo<int> f(3);
  Bar<int> b(5);

  int x1 = f.applyBar(b);   // 
  int x2 = b.applyFoo(x1);  //

  int y1 = b.applyFoo(f);   //
  int y2 = f.applyBar(y1);  // 

  // Should print:  8,40
  //                15,18
  std::cout << x1 << "," << x2 << std::endl;
  std::cout << y1 << "," << y2 << std::endl;
  
  return 0;
}

