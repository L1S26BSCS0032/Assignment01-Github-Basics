/*
    Program Title: Sum of First 50 Natural Numbers
    Name: Tayyabah Khawaja
    Registration Number: L1S26SCS0032
    Assignment Number 01
*/
#include<iostream>
using namespace std;
int main()
{
    int sum = 0; 
    
    //Method 1: through loop
    
    for(int i = 1; i <= 50; ++i)
    {
        sum += i;
    }
    cout <<"Sum of the first 50 natural numbers is : " << sum << endl;
    
    //Method 2: using the formula
    
    int n = 50;
    int formulaSum = n * (n + 1) / 2;
    cout << "Sum using formula n(n+1)/2: " << formulaSum << endl;
    
    return 0;
}
