#include <iostream>

int main (int argc, const char** argv) {
//1
std::cout << " #1 " << std::endl;
std::cout << std::endl;
int a = 8;
int b = 7;
if (10 <= a + b && a + b <= 20) {
  std::cout << "NUM: " << a + b << "  This sum fits the selected limits from 10 to 20" << std::endl;
  }
else {
std::cout << "Sorry, sum are not fits the selected limits from 10 to 20"<< std::endl;
}
std::cout << "If you wanna try another sum, please change a and b, and repeat compile." << std::endl;
std::cout << std::endl;

//2
std::cout << " #2 " << std::endl;
std::cout << std::endl;
int c = 13;
if (c == 2 || c == 3 || c == 5 || c == 7) {
  std::cout << "NUM: " << c << "  This number is prime because it is divisible by 1 and by itself" << std::endl;
}
else if (c % c == 0 && c % 1 == 0 && c != 2 && c != 3 && c !=5 && c % 2 != 0 && c % 3 != 0 && c % 4 != 0 && c %5 != 0) {
  std::cout << "NUM: " << c << "  This number is prime because it is divisible by 1 and by itself" << std::endl;
}
  else {
    std::cout << "NUM: " << c << "  This number is not prime, since it has more divisors than 1 and the number itself" << std::endl;
  };
std::cout << "If you wanna try another number, please change c, and repeat compile." << std::endl;
std::cout << std::endl;

//3
std::cout << " #3 " << std::endl;
std::cout << std::endl;
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
std::cout << " #4 " << std::endl;
std::cout << std::endl;
for (int t1 = 1; t1 <10; t1++) {
  for (int t2 = 1; t2 <10; t2++) {
  if (t1 == t2) {
    printf("%3d", t1 * t2 == 1);
}
          printf("%3d", t1 * t2 == 0);
          }
          std::cout << std::endl;
        }
        std::cout << "I am loose..." << std::endl;
std::cout << std::endl;

//5
std::cout << " #5 " << std::endl;
std::cout << std::endl;
int year = 2021;
if (year % 400 != 0 && year % 100 == 0 || year % 4 != 0) {
  std::cout << "Years: " << year << "  are not leap year, because " << year << " not divisible by 4, or is 100, other than 400." << std::endl;
}
  else {
  std::cout << "Years: " << year << "  are leap year, because " << year << " are divisible by 4, and is not 100, expect 400." << std::endl;
  }
std::cout << std::endl;
std::cout << "If you want to check another year, please change year, and repeat compile." << std::endl;

     return 0;
}
