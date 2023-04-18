#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int s=0;
    int i=0;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=10)
        {

            if(s==n)
            {



                cout<<n-n<<" "<<n<<endl;
            }else
            cout<<n-n<<" "<<n<<endl;
              s=n;
        }
    }
}
