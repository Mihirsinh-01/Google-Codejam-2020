#include<bits/stdc++.h>
// #define int long long
#define pb push_back
#define vi vector<int>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb   push_back
#define mp   make_pair
#define ff first
#define ss second
#define pop pop_back
#define in(a,n) for(int i=0;i<n;i++)cin>>a[i];
#define test int t;cin>>t;while(t--)

using namespace std;
signed main()
{
	fast
	int x,h=1;
	test
	{
		int n;
		cin>>n;
		map<pair<int,int>,int>ma;
		vector<pair<int,int> >v;
		for(int i=0;i<n;i++){
			int x,y;
			cin>>x>>y;
			ma[mp(x,y)]=i;
			v.push_back({x,y});
		}
		sort(v.begin(),v.end());
		string d="";
		for(int i=0;i<n;i++) d+="C";
	    d[ma[{v[0].ff,v[0].ss}]]='C';
	    int c=v[0].ss,j,extra=0,ima=0;
	    for(int i=1;i<n;i++){
	    	if(v[i].ff>=c){
	    		d[ma[{v[i].ff,v[i].ss}]]='C';
	    		c=v[i].ss;
			}
			else if(v[i].ff<c && extra==0){
				extra=1;
				j=v[i].ss;
				d[ma[{v[i].ff,v[i].ss}]]='J';
			}
			else if(v[i].ff<c && v[i].ff>=j){
				j=v[i].ss;
				d[ma[{v[i].ff,v[i].ss}]]='J';
			}
			else if(v[i].ff<c && v[i].ff<j){
				ima=1;
				break;
			}
		}
		if(ima==1) cout<<"Case #"<<h<<": "<<"IMPOSSIBLE"<<endl;
		else cout<<"Case #"<<h<<": "<<d<<endl;
		h++;
	}
}
