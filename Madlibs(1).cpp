#include <iostream>
#include <string>
using namespace std;
int main()

{cout << "Hello, my name is __1__ ___2___ __3__, and I am __4__ years old." "\nI am majoring in ______5______ at ______6______. My favorite color " "\nis ___7___. I am interested in becoming a/an ___8___ in the future." << endl;
    
    cout << "\nPlease fill out one-word answers only. Use an underscore '_' otherwise. \n\n";
    
    string firstName, middleName, lastName, age, major, school, color, career;
    
    cout << "1. ";
    cin >> firstName;
    
    cout << "2. ";
    cin >> middleName;
    
    cout << "3. ";
    cin >> lastName;
    
    cout << "4. ";
    cin >> age;
    
    cout << "5. ";
    cin >> major;
    
    cout << "6. ";
    cin >> school;
    
    cout << "7. ";
    cin >> color;
    
    cout << "8. ";
    cin >> career;
    
    cout << " " << endl;
    cout << " " << endl;
    
    cout << "Hello, my name is " << firstName << " " << middleName << " " << lastName << ", and I am " << age << " years old. \n";
    cout << "I am majoring in " << major << " at " << school << ". My favorite color is " << color << "." << endl;
    cout << "I am interested in becoming a/an " << career << " in the future.";
    
    return 0;
    
}