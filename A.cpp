#include<bits/stdc++.h>
// #define int long long
#define pb push_back
#define vi vector<int>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb   push_back
#define mp   make_pair
#define ff   first
#define ss   second
#define pop pop_back
#define in(a,n) for(int i=0;i<n;i++)cin>>a[i];
#define test int t;cin>>t;while(t--)
 
using namespace std;
 
bool isprime(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)  return false;
    }
    return true;
}
int gcd(int a,int b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int lcm(int a,int b){
    return (a*b)/(gcd(a,b));
}
 
int fact(int n)
{
    int s=1;
    for(int i=1,s=1;i<=n;i++)
    {
        s*=i;
        if(i==n)    return s;
    }
    return 1;
}
 
int comb(int a,int b)
{
    int mi=min(b,a-b);
    int ma=max(b,a-b);
    int s=1;
    for(int i=a;i>ma;i--)   {s*=i;cout<<i<<" ";}cout<<endl;
    return s/fact(mi);
}
 
 
signed main()
{
    fast
    int h=0;
    test
    {
        h++;
        int t=0,r=0,c=0;
        int n;cin>>n;
        int a[n][n];
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            map<int,int>m;
            for(j=0;j<n;j++)
            {
                int q=a[i][j];
                m[q]++;
                if(i==j)    t+=a[i][j];
            }
            if(m.size()!=n) r++;
        }
        for(j=0;j<n;j++)
        {
            map<int,int>m;
            for(i=0;i<n;i++)
            {
                m[a[i][j]]++;
            }
            if(m.size()!=n) c++;
        }
        cout<<"Case #"<<h<<": "<<t<<" "<<r<<" "<<c<<endl;
    }
}