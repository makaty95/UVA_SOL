/*
  link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=289&mosmsg=Submission+received+with+ID+28782764
	problem : UVA 353	Pesky Palindromes (just a brute force problem)
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


void solve()
{
  string s;
  while(cin >> s)
  {
    set<string> ans;
    int cnt = 0;
    set<char> st;
    for (int i = 0; i < s.size(); i++)
    {
      st.insert(s[i]);
      for (int j = i + 1; j < s.size(); j++)
      {
        int r = j, l = i;
        bool flag = 1;
        while(l < r)
        {
          if(s[r] != s[l])
          {
            flag = 0;
            break;
          }
          l++, r--;
        }
        if(flag)
          ans.insert(s.substr(i, j-i+1));
      }
    
    }

    printf("The string '{%s}' contains %d palindromes.\n", s, ans.size() + st.size());

  }
}
 
int main() // (:-3<)--<--<
{
  
  file();
  fastio();
  solve();
}



