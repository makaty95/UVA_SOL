/*
  link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1756&mosmsg=Submission+received+with+ID+28788608
	problem : 10815	- Andy's First Dictionary
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


// int n, m;
// int cnt = 0;
// bool valid(int x, int y, int n, int m)
// {
//   return x < n && y < m && x >= 0 && y >= 0;
// }

bool valid(char a)
{
  return ((a >= 'a' && a <= 'z') || (a <= 'Z' && a >= 'A'));
}
  
void solve()
{
  set<string> st;
  string s;
  while(cin >> s)
  {
    string k;
    for (int i = 0; i < s.size(); i++)
    {
      char c = s[i];
      if(isalpha(c))
        k.push_back(tolower(s[i]));
      else
      {
        if(!k.empty())
        st.insert(k);
        k.clear();
      }
    }

    if(k.size())
    st.insert(k);
  }


  for(auto a : st)
    cout << a << endl;
}

int main() // (:-3<)--<--<
{

  file();
  fastio();
  // int t;
  // cin >> t;
  // while(t--)
  solve();
}



