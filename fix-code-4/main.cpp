#include <iostream>
#include <string>
using namespace std;

int intTemperature(int input) {
  return input * 1;
}

float floatTemperature(float input) {
  return input * 100;
}

int main() {
  cout << "the temperature should be 6: " << intTemperature(6.0);
}
