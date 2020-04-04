#include <bits/stdc++.h>
#define pb push_back
#define vi vector<int>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb   push_back
#define mp   make_pair
#define all(a) begin(a),end(a)
#define ff   first
#define ss   second
#define pop  pop_back
#define	mii  map<int,int>
#define in(a,n) for(int i=0;i<n;i++)cin>>a[i];
#define test int t;cin>>t;while(t--)
#define all(a) begin(a),end(a)

using namespace std;
const int inf = 1e9 + 5, N = 2e5 + 5, d1[] = { 0,0,1,-1 }, d2[] = { 1,-1,0,0 };

void fun(string& str){
    for(char& c:str){
        if(c=='1')c='0';
        else if(c=='0')c='1';
    }
}

int main() {
    //fast
    int t,n;cin>>t>>n;
    while(t--){
        int i,j,row=-1,col=-1;
        char l,ok;
        string str(n,'?');
        for(i=1,j=0;j<n/2;i+=2){
            if(i>10 && i%10==1){
                if(col!=-1){
                    cout << col+1 << endl;
                    cin >> l;
                    if(str[col]!=l)fun(str);
                }
                else {cout << "1\n";cin>>l;}
                if(row!=-1){
                    cout << row+1 << endl;
                    cin >> l;
                    if(str[row]!=l)reverse(all(str));
                }
                else {cout << "1\n";cin>>l;}
            }
            else{
                cout << j+1 << endl;
                cin >> str[j];
                cout << n-j << endl;
                cin >> str[n-1-j];
                if(str[j]==str[n-1-j])col=j;
                else if(str[j]!=str[n-1-j])row=j;
                ++j;
            }
        }
        cout << str << endl;
        cin>>ok;
        if(ok=='N')return 0;
    }
}
