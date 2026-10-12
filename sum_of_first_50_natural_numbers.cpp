#include<iostream>
using namespace std;
int main()
{
    int sum = 0; 
    int n = 50;
    
    for(int i = 1; i <= n; ++i)
    {
        sum+=i;
    }
    cout <<"The sum of the first 50 natural numbers is : " << sum << endl;
    
    return 0;
}