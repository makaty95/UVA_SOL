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

void solve()
{
  
  
}



map<char,char> rev;
void comp()
{
  rev['A'] = 'A'; rev['E'] = '3'; rev['H'] = 'H'; rev['I'] = 'I'; rev['J'] = 'L';
  rev['L'] = 'J'; rev['M'] = 'M'; rev['O'] = 'O'; rev['S'] = '2'; rev['T'] = 'T';
  rev['U'] = 'U'; rev['V'] = 'V'; rev['W'] = 'W'; rev['X'] = 'X'; rev['Y'] = 'Y';
  rev['Z'] = '5'; rev['1'] = '1'; rev['2'] = 'S'; rev['3'] = 'E'; rev['5'] = 'Z';
  rev['8'] = '8';
  
}
bool mirrored(string s)
{
  int n = (int)s.size();
  int i = 0;
  int j = n - 1;
  for (int i = 0; i <= j; i++,j--)
  {
    if(s[i] != rev[s[j]])
    {
      if(s[i] == '0' || s[i] == 'O')
      {
        if(s[j] != '0' && s[j] != 'O')
          return 0;
      }
      else return 0;
      
    }
    
  }

  return 1;
}

bool pal(string s)
{
  int n = (int)s.size();
  int i = 0;
  int j = n - 1;
  for (int i = 0; i <= j; i++,j--)
  {
    if(s[i] != s[j])
    {
      if(s[i] == '0' || s[i] == 'O')
      {
        if(s[j] != '0' && s[j] != 'O')
          return 0;
      }
      else return 0;
    }
  }

  return 1;
}


int T = 0;
int main() //:-3<)--<--<
{

  file();
  fastio();
  comp();
  string s;
  while(cin >> s)
  {
    if(pal(s) && mirrored(s))
     printf("%s -- is a mirrored palindrome.\n\n", s.c_str());
    else if(mirrored(s))
      printf("%s -- is a mirrored string.\n\n", s.c_str());
    else if(pal(s))
      printf("%s -- is a regular palindrome.\n\n", s.c_str());
    else printf("%s -- is not a palindrome.\n\n", s.c_str());
      
  }
  

}
