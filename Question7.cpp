#include <iostream>
using namespace std;

int main() {
    // Creating a 2D array of strings named "letters" with 2 rows and 4 columns
    string letters[2][4] = {{"A", "B", "C", "D"}, {"E", "F", "G", "H"}};

    // Printing the element in the first row and third column of the array
    cout << letters[0][2];

    // The main function returns 0 by default, indicating successful execution
    return 0;
}
