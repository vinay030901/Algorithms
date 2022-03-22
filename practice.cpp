#include <bits/stdc++.h>

using namespace std;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define int long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define print(v) for(int i=0;i<(int)v.size();i++) cout<<v[i]<<" ";
#define fr(n) for(int i=0;i<n;i++)
#define fi(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define f first
#define s second
#define el endl

const int MAX_N = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ld EPS = 1e-9;

int countHillValley(vector<int>& arr) {
    unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++) mp[arr[i]]++;
        vector<int>ar;
        if(mp.size()<3) return 0;
        for(auto it=mp.begin();it!=mp.end();it++)
            ar.push_back(it->first);
        int cnt=0;
        
        for(int i=1;i<n-1;i++)
    {
        cout<<ar[i]<<" ";
        if((ar[i]>ar[i-1] && ar[i]>ar[i+1]) || (ar[i]<ar[i-1]&&ar[i]<ar[i+1]))
        cnt+=1;
    }
        cout<<"\n"<<cnt;
        return cnt;
}
void solve()
{
    vector<int>ar={2,4,1,1,6,5};
    cout<<countHillValley(ar);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}