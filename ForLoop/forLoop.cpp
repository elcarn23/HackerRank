#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int start_value, end_value; 
    cin >> start_value;
    cin >> end_value;

    // Here's the print string literal for an integer 0-9
    // They don't really say what to do if it is a zero but we'll handle that
    // anyways.
    for (int n = start_value; n <= end_value; n++) {
      if (n == 0) {
        cout << "zero" << endl;
      } else if (n == 1) {
        cout << "one" << endl;
      } else if (n == 2) {
        cout << "two" << endl;
      } else if (n == 3) {
        cout << "three" << endl;
      } else if (n == 4) {
        cout << "four" << endl;
      } else if (n == 5) {
        cout << "five" << endl;
      } else if (n == 6) {
        cout << "six" << endl;
      } else if (n == 7) {
        cout << "seven" << endl;
      } else if (n == 8) {
        cout << "eight" << endl;
      } else if (n == 9) {
        cout << "nine" << endl;
      } else if (n > 9) {
        if (n % 2 == 0) {
            cout << "even" << endl;
        }
        else {
            cout << "odd" << endl;
        }
        //cout << "Greater than 9" << endl;
      }
    }

    return 0;
}
