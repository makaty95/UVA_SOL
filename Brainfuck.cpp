/*
  link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3107
	problem : UVA 11956 - Brainfuck
	name : mohamed makaty
	i hope this help :)
*/
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#define ll long long
#define ld long double
#define lp(i, a, n) for (ll i = a; i <= (n); i++)
#define ff first
#define ss second
#define all(a) a.begin(), a.end()
#define endl '\n'
#define EPS 1e-8
#define pb push_back
using namespace std;
#define SZ 100000003
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

int dx[] = {1, 0, -1, 0, 1, -1, 1, -1};
int dy[] = {0, 1, 0, -1, 1, -1, -1, 1};
// bool dequal(double a, double b)
// {
//   if(fabs(a-b) <= EPS)
//   return 1;
//   return 0;
// }


 //vector<vector<int>> adj;

//int vis[100001] = {};

// int n, m;
// int cnt = 0;
// bool valid(int x, int y, int n, int m)
// {
//   return x < n && y < m && x >= 0 && y >= 0;
// }


int t = 0;
int tt = 1;
void solve()
{
  string s;
  cin >> s;
  int a[100] = {};
  int ind{0};
  for (int i = 0; i < s.size(); i++)
  {
    switch(s[i])
    {
      case '>':
        ind++;
        if(ind == 100)
          ind = 0;
        break;
      case '<':
        ind--;
        if(ind == -1)
          ind = 99;
        break;
      case '+':
        a[ind]++;
        if(a[ind] == 256)
          a[ind] = 0;
        break;
      case '-':
        a[ind]--;
        if(a[ind] == -1)
          a[ind] = 255;

    }
  }

  printf("Case %d: ", tt++);
  for (int i = 0; i < 99; i++)
  {

    printf("%.2X ", a[i]);
  }
  printf("%.2X\n", a[99]);
}
 
int main() // (:-3<)--<--<
{
  
  file();
  fastio();
  cin >> t;
  while(t--)
  solve();
}



