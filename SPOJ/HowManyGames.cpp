// problem link : https://www.spoj.com/problems/GAMES/ 
// :)


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


void solve()
{
  string s;
  cin >> s;
  ll num = 0, cnt = 0;
  bool flag = 0;
  for (ll i = s.size() - 1; i >= 0; i--)
  {
    if(s[i] == '.')
    {
      flag = 1;
      break;
    }
    else
      cnt++;
  }

  ll ind = 0;
  for (ll i = s.size() - 1; i >= 0; i--)
  {
    if(s[i] != '.')
    {
      num += (pow(10, ind) * (ll)(s[i] - '0')), ind++;
      //cout << s[i] << ' ' << s[i] - '0' << endl;
    }

  }

  ll den = 1;
  if(flag) den = pow(10, cnt);


  ll g = __gcd(num, den);

  //cout << cnt << ' ' << num << ' ' << g << endl;
  cout << den / g << endl;
}

int main() //:-3<)--<--< B. Chemistry
{
  file();
  fastio();
  int t = 1;
  cin >> t;
  while (t--)
  solve();
}
