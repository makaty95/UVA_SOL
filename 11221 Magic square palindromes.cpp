/*
  link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2162

	problem : 11221	Magic square palindromes

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

int T = 1;
void solve()
{
  
  string s;
  getline(cin, s);

  string modif = modify(s);
  double f = sqrt((int)modif.size());

  if(pal(modif) && f == (ceil(f)))
  {
    cout << sqrt((int)modif.size()) << endl;
  }
  else
  {
    cout << "No magic :(" << endl;
  }
  
}




int main() //:-3<)--<--<
{

  file();
  fastio();
  int t = 1;
  cin >> t;
  cin.ignore();
  while(t--)
  {
    cout << "Case #" << T++ << ":" << endl;
    solve();
  }


  

  
}
