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
std::cout << "If you wanna try another sum, please change a and b, and repeat compile." << std::endl;
std::cout << std::endl;

//2
int c = 2;
if (c % c == 0 && c % 1 == 0 && c == 2 || c == 3 || c == 5 || c == 7) {
  std::cout << "NUM: " << c << "  This number is prime because it is divisible by 1 and by itself" << std::endl;
}
else if (c > 7 && c % c == 0 && c % 1 == 0 && c != 2 && c != 3 && c !=5 && c % 2 != 0 && c % 3 != 0 && c % 4 != 0 && c %5 != 0) {
  std::cout << "NUM: " << c << "  This number is prime because it is divisible by 1 and by itself" << std::endl;
}
  else {
    std::cout << "NUM: " << c << "  This number is not prime, since it has more divisors than 1 and the number itself" << std::endl;
  };
std::cout << "If you wanna try another number, please change c, and repeat compile." << std::endl;
std::cout << std::endl;

//3
const int p1 = 6;
const int p2 = 4;
if (p1 == 10 && p2 == 10) {
  std::cout << "NUM p1 = " << p1 << "  and NUM p2 = " << p2 << " and they equal to 10" << std::endl;
}
  else if (p1 == 10 && p2 != 10) {
    std::cout << "NUM p1 = " << p1 << "  and equal to 10, p2 not equaled to 10" << std::endl;
  }
  else if (p2 == 10 && p1 != 10) {
  std::cout << "NUM p2 = " << p2 << "  and equal to 10, p1 not equaled to 10" << std::endl;
}
else if (p1 + p2 == 10) {
 std::cout << "NUM p1 + p2 = " << p1 + p2 << "  and equal to 10" << std::endl;
}
else {
std::cout << "NUM p1: " << p1 << "  and NUM p2: " << p2 << "  not equal to 10, and their sum not equal to 10" << std::endl;
}
std::cout << "If you wanna try another number, please change p1 and p2, and repeat compile." << std::endl;
std::cout << std::endl;

//4

     return 0;
}
