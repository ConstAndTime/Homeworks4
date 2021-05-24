#include <iostream>

int main(int argc, const char** argv) {

  for ( int j = 0; j < 10; ++j) {
    if (j % 2 != 0) continue;
    std::cout << j << "-";

    if (j == 6) {
      break;
    }
  }

std::cout << std::endl;

for (int y = 1; y < 10; y++) {
  for (int x = 1; x < 10; x++) {
    if (y != x) continue; {
            }
        printf("%3d", y * x);
  }
        std::cout << std::endl;
}
  return 0;
}
