#include <iostream>
#define nL '\n'
using namespace std;

int main()
{cout << "Average of the two inflows minus average of the two outflows, multiplied by the\ntime interval" << endl;
    float t, i1, i2, i3, i4, i5, o1, o2, o3, o4, o5, r1, r2, r3, r4, r5;
    cout << nL;
    cout << "Time interval: ";
    cin >> t;
    cout << "Inflow 1: ";
    cin >> i1;
    cout << "Inflow 2: ";
    cin >> i2;
    cout << "Inflow 3: ";
    cin >> i3;
    cout << "Inflow 4: ";
    cin >> i4;
    cout << "Inflow 5: ";
    cin >> i5;
    cout << "Outflow 1: ";
    cin >> o1;
    cout << "Outflow 2: ";
    cin >> o2;
    cout << "Outflow 3: ";
    cin >> o3;
    cout << "Outflow 4: ";
    cin >> o4;
    cout << "Outflow 5: ";
    cin >> o5;
    r1 = 0;
    r2 = ((((i1+i2)/2) - ((o1+o2)/2)))*t;
    r3 = ((((i2+i3)/2) - ((o2+o3)/2)))*t;
    r4 = ((((i3+i4)/2) - ((o3+o4)/2)))*t;
    r5 = ((((i4+i5)/2) - ((o4+o5)/2)))*t;
    
    cout << nL;
    cout << "Interval       Inflow       Outflow      Average" << endl;
    cout << "________________________________________________" << endl;
    cout << "   " << t*0 << "            " << i1 << "            " << o1 << "            " << r1 << "     " << endl;
    cout << "_________________________________________________" << endl;
    cout << "   " << t*1 << "            " << i2 << "            " << o2 << "            " << r2 + r1 << "     " << endl;
    cout << "_________________________________________________" << endl;
    cout << "   " << t*2 << "            " << i3 << "            " << o3 << "            " << r3 + r2 + r1 << "     " << endl;
    cout << "_________________________________________________" << endl;
    cout << "   " << t*3 << "            " << i4 << "            " << o4 << "            " << r4 + r3 + r2 + r1 << "     " << endl;
    cout << "_________________________________________________" << endl;
    cout << "   " << t*4 << "            " << i5 << "            " << o5 << "            " << r5 + r4 + r3 + r2 + r1 << "     " << endl;
    cout << "_________________________________________________" << endl;
    return 0;
    
    
}