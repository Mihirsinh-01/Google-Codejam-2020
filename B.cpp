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
    for(int i=a;i>ma;i--)   {s*=i;}
    return s/fact(mi);
}
 
 
signed main()
{
    fast
    int h=0;
    test
    {
        h++;
        string s,d="";
        cin>>s;
        int i,j;
        int e=s[0]-'0';
        for(i=0;i<e;i++)   d+='(';d+=s[0];
        for(i=1;i<s.length();i++)
        {
            int q=s[i]-s[i-1];
            if(q>0)
            {
                for(j=0;j<q;j++)    d+='(';d+=s[i];
            }
            if(q<0)
            {
                q*=(-1);
                for(j=0;j<q;j++)    d+=')';d+=s[i];
            }
            if(q==0)    d+=s[i];
        }
        int l=s.length();
        int v=s[l-1]-'0';
        for(i=0;i<v;i++)  {d+=')';}
        cout<<"Case #"<<h<<": "<<d<<endl;
    }
}