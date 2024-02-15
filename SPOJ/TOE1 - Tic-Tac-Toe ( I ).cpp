// problem link: https://www.spoj.com/problems/TOE1/
// ideone: https://ideone.com/lzsspw
// hope this help :)
 

#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define all(a) a.begin(), a.end()
#define endl '\n'
#define sz(v) ((int)((v).size()))
#define EPS 1e-8
#define inf INT_MAX
#define pb push_back
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;
typedef tree<pair<int,int> ,null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> pbds;
/*
// find_by_order, order_of_key
*/
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
    //freopen("out.txt", "w", stdout);
  #endif
}



void solve(){
    string board;
    for(int i = 0; i<3; i++){
        string a;cin >> a;
        board+=a;
    }

    string start = ".........";
    queue<pair<string,bool>>q;
    q.push({start, 0});
    while(q.size()){
        auto t = q.front().ss;
        auto cur = q.front().ff;
        q.pop();

        if(board == cur){
            cout << "yes" << endl;
            return;
        }

        auto winning = [&](){
            bool d = ((cur[0] != '.' and cur[0] == cur[4] and cur[8] == cur[0]) or
                      (cur[2] != '.' and cur[2] == cur[4] and cur[2] == cur[6]));

            bool r = ((cur[0] != '.' and cur[0] == cur[1] and cur[1] == cur[2]) or
                      (cur[3] != '.' and cur[3] == cur[4] and cur[4] == cur[5]) or
                      (cur[6] != '.' and cur[6] == cur[7] and cur[7] == cur[8]));

            bool c = ((cur[0] != '.' and cur[0] == cur[3] and cur[3] == cur[6]) or
                      (cur[1] != '.' and cur[1] == cur[4] and cur[4] == cur[7]) or
                      (cur[2] != '.' and cur[2] == cur[5] and cur[5] == cur[8]));

            return (c or r or d ? 1 : 0);
        };

        if(winning()){ // if the grid is a winning state we just skip the iterations.
            continue;
        }

        for(int i = 0; i<9; i++){
            if(cur[i] == '.'){
                if(!t and board[i] == 'X'){
                    // x can play this game
                    cur[i] = 'X';
                    q.push({cur, !t});
                }else if(t and board[i] == 'O'){
                    cur[i] = 'O';
                    q.push({cur, !t});
                }
                cur[i] = '.';
            }
        }
    }
    cout << "no" << endl;





}

void solve1(){


}

int main() //:-3<)--<--<
{

  file();
  fastio();
  int t = 1;
  cin >> t;
  while(t--)
    solve();

}
