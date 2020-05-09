#include <iostream>
#include <string>
using namespace std;

string addPrefix(const string s) {
  return "pre" + s;
}

int main() {
  string s;
  cout << "Please type a word: ";
  cin >> s;
  cout << "Your word with pre added is: " << addPrefix(s);
}
