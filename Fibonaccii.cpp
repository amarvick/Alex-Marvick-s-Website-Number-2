#include <iostream>

using namespace std;

int main()

{
    
    int sumi = 0;
    int sumj = 0;
    
    for (int i = 0; i <= 1000; i += 3)
        
        {
            sumi = sumi + i;
        }
    
    for (int j = 0; j <= 1000; j += 5)
    
        {
            sumj = sumj + j;
        }
    
    cout << "sumi = " << sumi << endl;
    cout << "sumj = " << sumj << endl;
    cout << "sumi + sumj = " << sumi + sumj << endl;
    
    return(0);
    
}