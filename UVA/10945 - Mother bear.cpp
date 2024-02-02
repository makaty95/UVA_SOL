/*
  link : https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1886
	problem : 10945 - Mother bear

	name : mohamed makaty
	i hope this help :)
*/

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

bool pal(string s)
{
  int n = s.size();
  for (int i = 0, j = n - 1; i <= j; i++, j--)
  {
    if(s[i] != s[j])
      return 0;
  }
  return 1;
}

string modify(string s)
{
  string ans;
  for(auto c : s)
  {
    if(isalpha(c))
      ans.pb(tolower(c));
  }
  return ans;
}

void solve()
{
  
}




int main() //:-3<)--<--<
{

  file();
  fastio();

  string s;
  while(getline(cin, s) && s != "DONE")
  {
    string modif = modify(s);
    if(pal(modif))
    {
      cout << "You won't be eaten!" << endl;
    }
    else
    {
      cout << "Uh oh.." << endl;
    }
  }

  
}
