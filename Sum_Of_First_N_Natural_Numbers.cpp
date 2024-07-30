#include <iostream>
using namespace std;

int main()
{
    int n, x, sum=0;
    cout<<"What is the value of n"<<endl;
    cin>>n;
    if(n>=0)
    {
        for(x=0; x<n; x++)
        {
            sum+=x;
        }
        cout<<"Sum of n natural numbers"<<endl<<sum<<endl;
        return 0;
    } else 
    {
        cout<<"Error : n is negative"<<endl;
        return 0;
    }
}
