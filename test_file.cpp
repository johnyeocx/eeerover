#include <iostream>
#include <cmath>

char bitArrToByte(int arr[8]) {
  int val = 0;
  for (int i = 0; i < 7; i++) {
    val += pow(2, i) * arr[i];
  }

  std::cout<<"Val: "<<val<<std::endl;
  return char(val);
}

int main() {
    int arr[8] = {1, 1, 0, 0, 0, 1, 0, 0};

    char c = bitArrToByte(arr);
    std::cout<<"Char: "<<c<<std::endl;
}