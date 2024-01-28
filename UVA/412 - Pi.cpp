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

int a[1001][1011] = {};
int c(int n, int r){
    if(n == r or r == 0) return 1;
    if(r == 1) return n;
    if(a[n][r] != 0) return a[n][r];

    a[n][r] = c(n-1, r-1) + c(n-1, r);
    return a[n][r];
}
int numofPairs(vector<int>v) {
    int n = v.size();
    int cnt = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(__gcd(v[i], v[j]) == 1){
                cnt++;
                //cout << v[i] << ' ' << v[j] << endl;
            }
        }
    }
    return cnt;
}
void solve(){
   int n;
   while(cin >> n and n){
    vector<int>v(n);
    for(auto& a : v)
        cin >> a;

    int f = numofPairs(v);
    if(!f){
        cout << "No estimate for this data set.\n";
        continue;
    }
    //cout << f << endl;
    int nn = n*(n-1)/2;
    double pi = sqrt(6.0 * (double)nn/(double)f);
    cout << fixed << setprecision(6) << pi << endl;
   }
}



int main() //:-3<)--<--<
{

  file();
  fastio();
  int t = 1;
  //cin >> t;
  while(t--)
    solve();

}
