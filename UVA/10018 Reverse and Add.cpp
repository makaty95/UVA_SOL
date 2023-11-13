/*
  link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=959
	problem : UVA 10018 - Reverse and Add
	by : mohamed makaty
	i hope this help :)
*/

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ff first
#define ss second
#define all(a) a.begin(), a.end()
#define endl '\n'
#define EPS 1e-8
#define inf INT_MAX
#define pb push_back
using namespace std;
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
  freopen("out.txt", "w", stdout);
#endif
}

//int dx[] = {1, 0, -1, 0, 1, -1, 1, -1};
//int dy[] = {0, 1, 0, -1, 1, -1, -1, 1};
// bool dequal(double a, double b)
// {
//   if(fabs(a-b) <= EPS)
//   return 1;
//   return 0;
// }


// int n, m;
// int cnt = 0;
// bool valid(int x, int y, int n, int m)
// {
//   return x < n && y < m && x >= 0 && y >= 0;
// }

bool pal(ll x)
{
  vector<ll> v;
  while(x)
  {
    v.pb(x % 10);
    x /= 10;
  }

  for (ll i = 0, j = v.size() - 1; i <= j; i++, j--)
  {
    if(v[i] != v[j])
      return 0;
  }
  return 1;
}

ll rev(ll num)
{
  ll ans = 0;
  ll i = 0;
  vector<ll> v;
  while(num)
  {
    v.pb(num % 10);
    num /= 10;
  }

  ll n = v.size();
  for (ll i = 0; i < n; i++)
  {
    ans += (v[i] * pow(10, n-1-i));
  }

  return ans;
}

void solve()
{
  ll num;
  cin >> num;
  ll cnt = 0;
  while(!pal(num))
  {
    ll f = rev(num);
    ll sum = f + num;
    num = sum;
    cnt++;
  }
  cout << cnt << ' ' << num << endl;
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
