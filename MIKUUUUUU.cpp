#include <bits/stdc++.h>
#define ll long long
#define PII pair<ll, ll>
using namespace std;
const ll inf = 2e18+9;

inline void rd(ll &x){x=0;short f=1;char c=getchar();while((c<'0'||c>'9')&&c!='-') c=getchar();if(c=='-') f=-1,c=getchar();while(c>='0'&&c<='9') x=x*10+c-'0',c=getchar();x*=f;}
inline void pt(ll x){if(x<0) putchar('-'),x=-x;if(x>9) pt(x/10);putchar(x%10+'0');}

void printvec(vector<ll> vec) { for (auto it = vec.begin(); it != vec.end(); ++it) { cout << *it << " ";} cout << endl;}
void print2dvec(const vector<vector<ll>>& vec) { for (const auto& row : vec) { for (const auto& element : row) { cout << element << " ";}cout << endl;}}
void printPII(vector<PII> vec) { for (auto it = vec.begin(); it != vec.end(); ++it) { cout << (*it).first << "->" << (*it).second << " ";} cout << endl;}
void printPIII(vector<pair<ll, PII>> vec) { for (auto it = vec.begin(); it != vec.end(); ++it) { cout << (*it).second.first << "/" << (*it).second.second << "\n";}}
void printvecmap(const map<ll, vector<ll>>& g) {for (const auto& [key, value] : g) { cout << "key: " << key << " -> ";for (const auto& v : value) {cout << v << " ";}cout << endl;}}
void printmap(const map<ll, ll>& g) { for (const auto& [key, value] : g) { cout << "key: " << key << " -> " << value << " ";}cout << endl;}

void MIKUUUUUU() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll tt; cin >> tt; while (tt--)
        MIKUUUUUU();
    return 0;
} 

