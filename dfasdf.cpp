#include <iostream>
#include <string>

using namespace std;

int main()

{int MAXPETS = 6;
    string inventory[6];
    int items = 0;
    inventory[items++] = "Cate";
    inventory[items++] = "Doge";
    inventory[items++] = "Meow";
    inventory[items++] = "Wow";
    inventory[items++] = "Yay";
    
    cout << "Here is your inventory. You may hold up to 6 items.\n\n";
    
    for (int i = 0; i < items ; ++i)
    {cout << inventory[i] << endl;}
    
    cout << endl;
    
    cout << "You abandon 'Wow' for a 'Fow'." << endl << endl;
    inventory[3] = "Fow";
    
    cout << "You find a 'Bazinga'." << endl << endl;
    
    if (items < MAXPETS)
    {inventory[items++] = "Bazinga";}
    
    else
    {cout << "You have too many items and you can't carry a 'Bazinga'." << endl << endl;}
    
    for (int i = 0; i < items; ++i)
    {cout << inventory[i] << endl;}
    
    cout << endl;
    
    cout << "You find a 'Sheldon'. Number of items: " << items << endl << endl;
    
    if (items < MAXPETS)
    {inventory[items++] = "Sheldon";}
    
    else
    {cout << "You cannot carry a 'Sheldon' because you have too many items." << endl;}
    
}