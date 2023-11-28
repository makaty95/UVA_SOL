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

void solve()
{
  point al, ar, bl, br;
  cin >> al.x >> al.y >> ar.x >> ar.y >> bl.x >> bl.y >> br.x >> br.y;
  if((max(al.x, bl.x) < min(ar.x, br.x)) && (max(al.y, bl.y) < min(ar.y, br.y)))
  {
    point p1(max(al.x, bl.x), max(al.y, bl.y));
    point p2(min(ar.x, br.x), min(ar.y, br.y));
    cout << p1.x << ' ' << p1.y << ' ' << p2.x << ' ' << p2.y << endl;
  }
  else
  {
    cout << "No Overlap\n";
  }
}

int main() //:-3<)--<--< 4- 3 1 4 2 
{
  file();
  fastio();
  int t = 1;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    if(i >0)
      cout << "\n";
    solve();
  }

}

