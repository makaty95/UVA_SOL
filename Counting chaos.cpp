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

int convert(string s)
{
  int a = s[0] - '0', b = s[1] - '0';
  int ans = 10 * a + b;
  return ans;

}

bool still(int h, int m)
{

  string t;
  int a1 = (h % 100) / 10;
  int a2 = (h % 10);
  int b1 = (m % 100) / 10;
  int b2 = (m % 10);

  char aa[5];
  aa[0] = (a1 + '0');
  aa[1] = (a2 + '0');
  aa[2] = (b1 + '0');
  aa[3] = (b2 + '0');

  int ind = -1;
  for (int i = 0; i <= 3; i++)
  {
    t.pb(aa[i]);
    if(ind == -1 && aa[i] != '0')
      ind = i;
  }
  if(ind == -1)//0000
    return 0;

  
  for (int i = ind, j = 3; i <= j; i++,j--)
  {
    if(t[i] != t[j])
      return 1;
  }

  return 0;
}

void solve()
{
  int m, h;
  string s;
  cin >> s;
  string H = s.substr(0, s.find(':'));
  string M = s.substr(s.find(':') + 1, s.size());
  h = convert(H);
  m = convert(M);

  m++;
  if(m == 60)
    {
      h++, m = 0;
      h %= 24;
    }


  while(still(h, m))
  {
    m++;
    if(m == 60)
    {
      h++, m = 0;
      h %= 24;
    }

  }

  printf("%02d:%02d\n", h, m);
}




int main() //:-3<)--<--<
{

  file();
  fastio();
  int t = 1;

  //return 0;
  cin >> t;
  while(t--)
    solve();


  

  
}
