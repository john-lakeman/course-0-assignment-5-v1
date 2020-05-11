#include <iostream>
#include <string>
using namespace std;

int main() {
  int number; 
  int factorial;
  cout << "Enter a number." << endl;
  cin >> number;
  if (number < 0) {
    cout << "Negative numbers don't have valid factorials.";
  }
  else if (number == 0 || number == 1) {
    cout << "The factorial of " << number << " is 1.";
  }
  else if(number > 1) {
    factorial = number;  // if number = 4 then factorial = 4;
    int num = number; 
    while(num > 1) {
      factorial = factorial * (num -1); // factorial = 4 * 3; factorial = 12 * 2 or 24; 
      num = (num -1); // number = 3; number = 2; number = 1; loop terminates;
    }
    cout << "The factorial of " << number << " is " << factorial << endl;
  }
  else {
    cout << "Error due to invalid input."; 
  }
}

/*int main() {
  int number = Input();
  int factorial = Factorial(number);

  cout << "The factorial of " << number << " is " << factorial << endl;

  return 0;
}
*/