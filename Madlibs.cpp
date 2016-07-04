//Madlibs

#include <iostream>
#include <string>

using namespace std;

string phrase1();
string phrase2();
string phrase3();
string phrase4();
string phrase5();

int main()
{string Name = phrase1();
    string Color = phrase2();
    string Animals = phrase3();
    string Adverb = phrase4();
    string Friend = phrase5();
    
    cout << endl;
    
    cout << Name << " is the coolest person in the world, and he enjoys the color " << Color << ".\n";
    cout << Name << " lives to have a bunch of " << Animals << " in his house. More importantly,\n";
    cout << Name << " wants them " << Adverb << " around and about, and maybe they will make\n" << Name << "'s";
    cout << "good friend " << Friend << " laugh." << endl;}

string phrase1()
{string p1;
    cout << "Please enter your name: ";
    cin >> p1;
    return p1;}

string phrase2()
{string p2;
    cout << "Please enter your favorite color: ";
    cin >> p2;
    return p2;}

string phrase3()
{string p3;
    cout << "Please enter your favorite animal in plural form: ";
    cin >> p3;
    return p3;}

string phrase4()
{string p4;
    cout << "Please enter your favorite hobby as an adverb: ";
    cin >> p4;
    return p4;}

string phrase5()
{string p5;
    cout << "Please put the name of a close friend: ";
    cin >> p5;
    return p5;}

