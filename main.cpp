
#include <iostream>

using namespace std;

// Function to compute the sum of numbers from 1 to n
int sum(int n) {
  int total = 0;
  for (int i = 1; i <= n; ++i) {
    total += i;
  }
  return total;
}

int main() {
  int n;

  // Ask the user for a number
  cout << "Enter a number: ";
  cin >> n;

  // Call the sum function and display the result
  int result = sum(n);
  cout << "The sum of numbers from 1 to " << n << " is " << result << "." << endl;
  
  
  return 0;
}
