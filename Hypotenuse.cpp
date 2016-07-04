#include <iostream>
#include <cmath> //imports the math library, which is required if you want to perform calculations with exponents
#define newline '\n'

using namespace std;

int main()

{cout << "HYPOTENUSE CALCULATOR";
    
    cout << newline;
    cout << newline;
    
    double O, A, H;
    cout << "Opposite side: ";
    cin >> O;
    cout << "Adjacent side: ";
    cin >> A;
    H = pow(pow(O, 2) + pow(A, 2), 0.5); //Raises 'O^2' + 'A^2' to the 1/2 power. SIMPLE CLARIFICATION: O^2 = pow(O, 2)
    
    cout << newline;
    
    cout << "The Hypotenuse of this triangle with the given lengths is equal to " << H << "." << endl;
    return 0;
}