// i solved this with divide and conquer approache.
// That was a bit longer coding but my structs helped me alot :)
// i hope U find this helpfull
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
bool dequal(double a, double b)
{
  if(fabs(a-b) <= EPS)
  return 1;
  return 0;
}


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

double length(point a, point b)
{
  return (sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)));
  
}
struct circle
{
  double r;
  point center;
  bool inside(point p)
  {
    if(length(p, center) < r)
      return 1;
    return 0;
  }
};

double area1(point a, point b, point c)
{
  return fabs((0.5 * (a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y))));
}

struct rect
{
  point ul, lr; // upper left & lowr right or
  // the opp
  bool inside(point p)
  {
    if(p.x < lr.x && p.x > ul.x && p.y > lr.y && p.y < ul.y)
      return 1;
    return 0;
  }

};

struct triangle
{
  point A, B, C;
  bool inside(point p)
  {
    double a1 = area1(A, B, p);
    double a2 = area1(A, C, p);
    double a3 = area1(C, B, p);
    double a = area1(A, B, C);
    if(dequal(a1 + a2 + a3, a))
      return 1;
    return 0;
  }
};

void solve()
{
  char c;
  vector<pair<rect,int>> rects;
  vector<pair<circle,int>> circs;
  vector<pair<triangle,int>> triangs;
  int counter = 1;
  while(cin >> c && c != '*')
  {
    if(c == 't')
    {
      triangle tt;
      cin >> tt.A.x >> tt.A.y >> tt.B.x >> tt.B.y >> tt.C.x >> tt.C.y;
      triangs.pb({tt, counter++});
    }else if(c == 'c')
    {
      circle cc;
      cin >> cc.center.x >> cc.center.y >> cc.r;
      circs.pb({cc, counter++});
    }
    else
    {
      rect rr;
      cin >> rr.ul.x >> rr.ul.y >> rr.lr.x >> rr.lr.y;
      rects.pb({rr, counter++});
    }

    
  }
  point p;
  int cnt = 1;
  while(cin >> p.x >> p.y && !(p.x == 9999.9 && p.y == 9999.9))
  {
  
    set<int> st;
    for(auto c : circs)
    {
     
      if(c.ff.inside(p))
      {
        st.insert(c.ss);
      }
    }

    for(auto t : triangs)
    {
      if(t.ff.inside(p))
      {
        st.insert(t.ss);   
      }
    }

    for(auto r : rects)
    {
      if(r.ff.inside(p))
      {
        st.insert(r.ss);
      }
    }

    if(st.empty())
    printf("Point %d is not contained in any figure\n", cnt);
    else
    {
      for(auto i : st)
      {
        printf("Point %d is contained in figure %d\n", cnt, i);
      }
    }
    cnt++;
  }
}

int main() //:-3<)--<--< 4- 3 1 4 2 
{
  //return 0;
  file();
  fastio();
  solve();
}
