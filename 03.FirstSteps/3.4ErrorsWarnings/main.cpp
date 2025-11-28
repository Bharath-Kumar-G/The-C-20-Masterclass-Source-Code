#include <iostream>

int main(){
   
   //Compile time error -> already fixed with ; in the base file
   std::cout << "Hello Word!" << std::endl;

   //Run time error -> fixed by changing 0 to 1 to avoid the divide by zero error but this was also caught during compilation.
   int value = 7/1;
   std::cout << "value : " << value << std::endl;

    return 0;
}