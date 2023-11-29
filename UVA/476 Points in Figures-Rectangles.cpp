// i hope this sollution help U 
// URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=417

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



struct point
{
  double x, y;
  point(){}
  point(double _x, double _y) { x = _x, y = _y; }
};

struct rect
{
  point ul, lr;
};

void solve()
{
  vector<rect> rects;
  char c;
  while(cin >> c && c != '*')
  {
    rect r;
    cin >> r.ul.x >> r.ul.y >> r.lr.x >> r.lr.y;
    rects.pb(r);
  }

  point p;
  int cnt = 1;
  while(cin >> p.x >> p.y && !(p.x == 9999.9 && p.y == 9999.9))
  {
    bool flag = 0;
    for (int i = 0; i < rects.size(); i++)
    {
      rect r = rects[i];
      if(p.x < r.lr.x && p.x > r.ul.x && p.y < r.ul.y && p.y > r.lr.y)
      {
        //inside teriangles
        flag = 1;
        printf("Point %d is contained in figure %d\n", cnt, i+1);
     
      }
    }
    if(!flag) printf("Point %d is not contained in any figure\n", cnt);
    cnt++;
  }
}

int main() //:-3<)--<--< 4- 3 1 4 2 
{
  file();
  fastio();
  solve();
}
