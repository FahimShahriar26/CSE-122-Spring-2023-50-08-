// code force code name: A. Team
// code number: 231A
#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,sum=0;
   cin>>n;
    for(int i=0;i<n;i++){
        cin >> a;
        cin >> b;
        cin >> c;
        if ( a+b+c > 1)

        sum=sum+1;
    }
    cout<< sum;

}

