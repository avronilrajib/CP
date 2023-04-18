#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t;cin>>t;
    cin>>n>>m;
    vector<int>v;
    while(t--)
    {
         for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);

    }
    sort(v.begin(),v.end());

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
       if(a==b)
       {
          if(a%2==0&&b%2==0)
          {
              int s=(a*2)+(b*2)-a;
              cout<<s<<endl;
          }
       }
       cout<<min(a,b);

    }
    }

}
