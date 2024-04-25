// https://vjudge.net/problem/UVA-140

#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define all(a) a.begin(), a.end()
#define iinf INT_MAX
#define endl '\n'
#define linf LONG_LONG_MAX
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ordered_set tree<ll,null_type,less<>,rb_tree_tag,tree_order_statistics_node_update>
/*
// find_by_order, order_of_key
*/
void fastio(){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
void file(){
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
}


int N;
bool taken[10001] = {};
string store;
int ans = 90000;
void func(int ind, map<char,vector<char>> &adj, string& nodes, string s = "") {
    if(ind == N) {
        // get bandwidth
        int band = 0;
        int loc[10001] = {};
        for(int i = 0; i<N; i++) loc[s[i]] = i;
        for(int i = 0; i < N; i++) {
            for(auto c : adj[s[i]]) {
                band = max(band, abs(loc[c]-i));
            }
        }
        if(ans > band) ans = band, store = s;
        else if(ans == band) store = min(store, s);
    }else {
        for(int i = 0; i<N; i++) {
            if(!taken[i]) {
                taken[i] = 1;
                func(ind+1, adj, nodes, s+nodes[i]);
                taken[i] = 0;
            }
        }
    }

}


void solve() {
    string cs;
    while(getline(cin,cs) && cs != "#") {
        ////////////////input stuff////////////
        char node;
        bool vis[10001] = {};
        map<char,vector<char>>adj;
        string nodes;
        int n = cs.size();
        for(int i = 0; i<n; i++) {
            if(isalpha(cs[i])) {
                if(cs[i+1] == ':') {
                    node = cs[i];
                }else {
                    adj[node].push_back(cs[i]);
                }
                if(!vis[cs[i]]) {
                    vis[cs[i]] = 1;
                    nodes.push_back(cs[i]);
                }

            }
        }
        /////////////////////////////////////
        N =  nodes.size(); // nodes = all the charachters in the graph like ABCDEFGH
        func(0,adj,nodes); // get all permutations of the string using recursion
        for(auto c : store) cout << c << ' ';
        cout << "-> " << ans << endl;

        // next test cases
        memset(taken, 0, sizeof(taken));
        ans = 90000;
    }


}
void solve1() {

}
signed main() {
    file();
    fastio();
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }

}
