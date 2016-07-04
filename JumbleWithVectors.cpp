#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{vector<string> name;
    name.push_back("Alexander");
    name.push_back("Michael");
    name.push_back("Joseph");
    name.push_back("Marguerite");
    name.push_back("Mike");
    name.push_back("Marvick");
    name.push_back("Shea");
    name.push_back("Frank");
    name.push_back("Vyerl");
    name.push_back("Shassey");
    
    srand(static_cast<unsigned int>(time(0)));
    int randno = rand() % 10;
    string correct = name[randno];
    string scramble = name[randno];
    
    for (int i = 0; i < 100; ++i)
    {int index1 = rand() % scramble.length();
        int index2 = rand() % scramble.length();
        char replace = scramble[index1];
        scramble[index1] = scramble[index2];
        scramble[index2] = replace;}
    
    cout << scramble << endl << endl;
    string guess;
    
    do
    {cout << "Guess: ";
        cin >> guess;
        cout << endl;
        
        if (guess != correct)
        {cout << "Try again." << endl;
            cout << endl;}
        
        else
        {cout << "Correct." << endl;
            break;}
        
	 	 } while (guess != correct);
}