#include<bits/stdc++.h>
using namespace std;
void pblmB()
{
     long long int t;
    while(cin>>t)
    {
        if(0<=t&&t<=210000000)
        {
            cout<<(t*(t+1))/2+1<<endl;
        }
        else
        {
            break;
        }
    }
}
int main()
{
   pblmB();

}

