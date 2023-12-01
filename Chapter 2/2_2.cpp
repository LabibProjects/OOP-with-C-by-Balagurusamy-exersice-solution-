#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    cout << "Enter your preferred two numbers: \n";
    cin >> num1;
    cin >> num2;
    
    if (num1 > num2)
    {
        cout << num1 << endl;
    }
    else if (num1 < num2)
    {
        cout << num2 << endl;
    }
    
    else()
    {
        cout << "Equal" << endl;
    }

    return 0;
}