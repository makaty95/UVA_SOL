
// problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=380
//// 


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


bool valid(int x, int y){
    return x >= 0 and y >= 0 and x < 8 and y < 8;

}
int dx[] = {1,1,2,2,-1,-1,-2,-2};
int dy[] = {2,-2,1,-1,2,-2,1,-1};

int sh_path(pair<int,int>s, pair<int,int>e) {
    if(e.ff == s.ff and e.ss == s.ss){
        return 0;
    }
    bool vis[9][9] = {};
    queue<pair<int,int>>q;
    int dep = 1;
    q.push(s);



    while(q.size()){
        int sz = q.size();
        while(sz--){
                auto node = q.front(); q.pop();
                for(int i = 0; i<8; i++){
                    int nx = dx[i] + node.ff;
                    int ny = dy[i] + node.ss;
                    if(valid(nx,ny) and !vis[nx][ny]){
                        if(e.ff == nx and e.ss == ny){
                            return dep;
                        }else{
                            q.push({nx, ny});
                            vis[nx][ny] = 1;
                        }
                    }
                }
        }
        dep++;
    }
    return -1;
}
void solve(){


    string st, en;
    while(cin >> st >> en){
        pair<int,int> s = {st[1]-'0'-1, st[0]-'a'};
        pair<int,int> e = {en[1]-'0'-1, en[0]-'a'};

        int ans = sh_path(s, e);
        printf("To get from %s to %s takes %d knight moves.\n", st.c_str(), en.c_str(), ans);
    }

}

void solve1(){
}

int main() //:-3<)--<--<
{

    file();
    fastio();
    int t = 1;
    //cin >> t;
    while(t--)
    solve();

}
