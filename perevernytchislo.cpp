//нужно "перевернуть" число с произвольным количеством цифр.
#include <iostream>
 
long int reverse( long int number ) {
    long int revNum = 0;
    
    while ( number ) {
       revNum = revNum * 10 + number % 10;
       number /= 10;
    }
    
    return revNum;
}
 
int main() {
  int number; 
   std::cout<<"Vvedite chislo: ";
    std::cin>>number;
   std::cout << reverse( number ) << std::endl;
   return 0;
}
