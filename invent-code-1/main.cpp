#include <iostream>
#include <string>
using namespace std;

// Uncomment and fill out this function for Part 2.
float CostOfIngredient(const string ingredient) {
  string new_ingredient;
  cout << "What ingredient would you like to add: ";
  cin >> new_ingredient;

  int num_new_ingredient;
  cout << "How many " << num_new_ingredient << " are in the recipe: ";
  cin >> num_new_ingredient;
  if (num_new_ingredient > 0) {
    int price_new_ingredient;
    cout << "What is the price of an " << new_ingredient << ": ";
    cin >> price_new_ingredient;
    int price_of_new_ingredient = num_new_ingredient * price_new_ingredient;
  }
}

int main() {
  float total_cost = 0;

  int num_avocados;
  cout << "How many avocados are in the recipe: ";
  cin >> num_avocados;
  if (num_avocados > 0) {
    int price_avocado;
    cout << "What is the price of an avocado: ";
    cin >> price_avocado;
    int price_of_all_avocados = num_avocados * price_avocado;
    total_cost = total_cost + price_of_all_avocados;
  }

  int num_tomatoes;
  cout << "How many tomatoes are in the recipe: ";
  cin >> num_tomatoes;
  if (num_tomatoes > 0) {
    int price_tomato;
    cout << "What is the price of a tomatoe: ";
    cin >> price_tomato;
    int price_of_all_tomatoes = num_tomatoes * price_tomato;
    total_cost = total_cost + price_of_all_tomatoes;
  }

  int num_onions;
  cout << "How many onions are in the recipe: ";
  cin >> num_onions;
  if (num_onions > 0) {
    int price_onion;
    cout << "What is the price of an onion: ";
    cin >> price_onion;
    int price_of_all_onions = num_onions * price_onion;
    total_cost = total_cost + price_of_all_onions;
  }

  cout << "The total cost of the recipe will be: $" << total_cost << endl;
}
