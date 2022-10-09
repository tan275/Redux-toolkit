//...AKASH KESHRI...//
#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define MOD (int)(1e9+7)
#define INF 1000000000
typedef pair<int, int>  pii;
typedef vector<int>     vi;
typedef vector<pii>     vpii;
typedef vector<vi>      vvi;
//=======================
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif 
}
void solve()
{ 
  ll n;
  cin >> n;
  while (true) {
  cout << n << " ";
  if (n == 1) break;
  if (n%2 == 0) n /= 2;
  else n = n*3+1;
 }
  cout << "\n";
}
int main() {
    init_code();
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
     //int t=1;
    // cin>>t;
    // while(t--){
        solve();
     //}
    return 0;
}