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

void readInput(vector<string> &inputs){
    ifstream file;
    file.open("input.txt", ios::in);
    string line;
    while(getline(file, line)){
        inputs.pb(line);
    }
}

void getColorandBoxes (string &input_,vector<pair<string,int>> &bags,set<char> &nums_set){
    pair<string,int> bag;
    

}

void solve(string input_, int &ans){
    set<char> nums_set = {'1','2','3','4','5','6','7','8','9'};
    vector<pair<char,int>> games;
    string subcadenas[] = { "ed,", "reen,", "ame,", "lue" };

    

    cout<<input_<<endl;
    
}

int main() {
    fast_io
    int ans = 0;
    vector<string> inputs;
    readInput(inputs);

    for(auto line : inputs){
        solve(line,ans);
    }
    
    return 0;
}