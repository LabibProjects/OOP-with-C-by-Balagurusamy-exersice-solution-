#include <iostream>
using namespace std;

int main()

{
    int tempc,temf, d ;

    cout << " Give temperature in Fahrenheit " ; cin >> temf ;

    d = temf-32 ;
    tempc = d*5/9;

    
    cout <<  tempc << " °"; 
    return 0;
}