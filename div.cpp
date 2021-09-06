#include<iostream>
using namespace std;

float division(int a, int b)
{
    if(b == 0)
    {
        throw(0);
    }
    return (float)a/b;
}

int main()
{
    int a,b;
    cin >> a >> b;
    
    try{
        cout << division(a,b) << endl;
    }
    catch(int e)
    {
        cout << "Denominator cannot be 0" << endl;
    }
    return 0;
}

