#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define lli long long int
#define ld long double
#define fore(i,a,b) for (int i = a; i < b; i++)
#define forr(i,a,b) for (int i = a; i > b; i--)
#define forn(i,n) for (int i = 0; i < n; i++)
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef map<int, int> mii;

void notNum(string &s, int &i,int &j){
    set<char> nums = {'1','2','3','4','5','6','7','8','9'};
    for(;nums.count(s[i]) == 0; i++);
    for(;nums.count(s[j]) == 0; j--);
}

int main() {
    fast_io
    string s;
    int convert;
    ll ans = 0;
    
    while(getline(cin, s)){
		if(s == "")break;
        int i = 0, j = s.size()-1;
        notNum(s,i,j);
        convert = (s[i] - '0') * 10 + (s[j] - '0');
        cout<<convert<<endl;
        ans += convert;
    }
    
    cout<<ans<<endl;
    return 0;
}