#include <iostream>

int main (int argc, const char** argv) {
//1
int a = 8;
int b = 7;
if (10 <= a + b && a + b <= 20) {
  std::cout << "NUM: " << a + b << "  This sum fits the selected limits" << std::endl;
  }
else {
std::cout << "Sorry, sum are not fits the selected limits"<< std::endl;
}
std::cout << "If you wanna try another sum, please change a and b, and repeat compile" << std::endl;
std::cout << std::endl;

//2
int c = 2;
if (c == 2 && c == 3 && c == 5 && c == 7 && c % c == 0 && c % 1 == 0 ) {
  std::cout << "NUM: " << c << "  This number is prime because it is divisible by 1 and by itself" << std::endl;
}
else if
else if
else if
else if
else if (c > 7 && c % c == 0 && c % 1 == 0 && c != 2 && c != 3 && c !=5 && c % 2 != 0 && c % 3 != 0 && c % 4 != 0 && c %5 != 0) {
  std::cout << "NUM: " << c << "  This number is prime because it is divisible by 1 and by itself" << std::endl;
}
  else {
    std::cout << "NUM: " << c << "  This ar not prime number, because is didn't devisible by itself" << std::endl;
  };
std::cout << "If you wanna try another number, please change c, and repeat compile" << std::endl;
std::cout << std::endl;
     return 0;
}
