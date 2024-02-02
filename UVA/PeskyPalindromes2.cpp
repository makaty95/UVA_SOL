/*
  link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=289&mosmsg=Submission+received+with+ID+28782764
	problem : UVA 353	Pesky Palindromes (just a brute force problem)
  optimized solution O(n^2) for time complexity 
  - based on 2 pointers approache
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
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
      int l = i, r = i;
      while(l>=0 && r < n && s[l] == s[r])
      {
        ans.insert(s.substr(l, r - l + 1));
        r++, l--;
      }

      if(i < n-1 && s[i] == s[i+1])
      {
        int l = i, r = i + 1;
        while(l>=0 && r < n && s[l] == s[r])
        {
          ans.insert(s.substr(l, r - l + 1));
          r++, l--;
        }
      }
    }


    printf("The string '%s' contains %d palindromes.\n", s.c_str(), ans.size());

  }
}
 
int main() // (:-3<)--<--<
{
  
  file();
  fastio();
  solve();
}



