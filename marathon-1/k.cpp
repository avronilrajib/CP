#include<bits/stdc++.h>
using namespace std;
void CGPA()
{
     int t;cin>>t;
    int i=1;
    while(t--)
    {
        int a; cin>>a;
        double  d,f=0,k=0;
        int count=0;
        while(a--)
        {
            double  b,c;
            cin>>b>>c;
            if(b<=100&&b>=80)
            {
                k+=c;
                d=(c*4);
                f+=d;

            }
            else if(b<80&&b>=75)
            {
                k+=c;
                d=(c*3.75);
                f+=d;

            }
            else if(b<75&&b>=70)
            {
                k+=c;
                d=(c*3.50);
                f+=d;
            }
            else if(b<70&&b>=65)
            {
                k+=c;
                d=(c*3.25);
                f+=d;
            }
            else if(b<65&&b>=60)
            {
                k+=c;
                d=(c*3.00);
                f+=d;
            }
            else if(b<60&&b>=55)
            {
                k+=c;
                d=(c*2.75);
                f+=d;
            }
            else if(b<55&&b>=50)
            {
                k+=c;
                d=(c*2.50);
                f+=d;
            }
            else if(b<50&&b>=45)
            {
                k+=c;
                d=(c*2.25);
                f+=d;
            }
            else if(b<45&&b>=40)
            {
                k+=c;
                d=(c*2.00);
                f+=d;
            }

             else if(b<40)
            {
                count++;
            }

        }

        if(count>1)
        {

            cout<<"Case "<<i<<": "<<"Sorry, you have failed in "<<count<<" courses!"<<endl;

        }
        else if(count==1)
            printf("Case %d: Sorry, you have failed in 1 course!\n",i);
        else
        {

            cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<(f/k)<<endl;

        }
        i++;

    }

}
int main()
{
    CGPA();


}
