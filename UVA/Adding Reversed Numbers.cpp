#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ff first
#define ss second
#define all(a) a.begin(), a.end()
#define endl '\n'
#define sz(v) ((int)((v).size()))
#define EPS 1e-8
#define inf INT_MAX
#define pb push_back

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;
typedef tree<pair<int,int> ,null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> pbds;
/*
// find_by_order, order_of_key
*/
void fastio()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}
void file()
{
  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
  #endif
}



void solve(){
    string s1,  s2;
    cin >> s1 >> s2;
    int n = max(s1.size(), s2.size());
    vector<int>v1,v2;
    for(auto a : s1){v1.pb(a-'0');}
    for(auto a : s2){v2.pb(a-'0');}
    vector<int>ans(n+1,0);

    while(v1.size() < n) v1.pb(0);
    while(v2.size() < n) v2.pb(0);
    reverse(all(v1));
    reverse(all(v2));

    for(int i = n-1; i>=0; i--){
        int sum = v1[i]+v2[i]+ans[i+1];
        ans[i+1] = sum%10;
        ans[i] = sum/10;
    }
    while(ans.front() == 0 and ans.size() > 1) ans.erase(ans.begin());
    reverse(all(ans));
    while(ans.front() == 0 and ans.size() > 1) ans.erase(ans.begin());
    for(auto a : ans) cout << a;
    cout << endl;


}

void solve1(){


}

int main() //:-3<)--<--<
{

  file();
  fastio();
  int t = 1;
  cin >> t;
  while(t--)
    solve();

}

