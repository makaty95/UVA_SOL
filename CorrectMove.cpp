/*
  link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=191
	problem : UVA 255 - Correct Move
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

struct point
{
  int x,y;
};
bool equalp(point a, point b)
{
  return (a.x == b.x && a.y == b.y);
}

void solve()
{
  int q, k, t;
  while(cin >> k >> q >> t)
  {
    // if king position = queen position 
    if(q == k)
    {
      cout << "Illegal state" << endl;
      continue;
    }
    
    // (q/8) --> means the x index in the grid , q%8 means the y index

    // if the target move not either in the same col or same row,
    // its impossible
    if(((q/8 != t/8) && (q-t)%8) || k == t || t == q)
    {
      cout << "Illegal move" << endl;
      continue;
    }

    // if all in the same row or all in the same column
    if(((q-t)%8 == 0 && (k-t)%8 == 0) || ((q/8 == t/8)&&(k/8 == t/8)))
    {
       // if the king is in between the q can't move -it prevent the move-
      if(k <= max(q,t) && k >= min(q,t))
      {
        cout << "Illegal move" << endl;
        continue;
      }
    }

    // if the distance btw king and move target is 1 so its prohibited
    if(((abs(t - k) == 1) && t/8 == k/8) || abs(t - k) == 8)
    {
      cout << "Move not allowed" << endl;
      continue;
    }

    // check corners so if the queen like sieging the king and he is traped
    /// so stop
    if((!k && t == 9) || (k == 7 && t == 14) || (k == 63 && t == 54) || (k == 56 && t == 49))
      cout << "Stop" << endl;
    else
      cout << "Continue" << endl;

  }
}
 
int main() // (:-3<)--<--<
{
  
  file();
  fastio();
  solve();
}



