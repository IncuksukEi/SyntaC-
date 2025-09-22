// Code by InzG0AnH
#include <bits/stdc++.h>
using namespace std;

#define MAXN 200005
#define INF 1e9
#define ll long long
#define pii pair<int,int>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); ++i)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<string> a;
    a.pb("haha");      // Thêm phần tử vào cuối
    a.pb("hehe");
    a.pb("haha");
    a.pb("haha");
    string b = a.at(0);
    FOR(i,0,a.at(0).size()){
        cout << i << ' ' << a[i] << endl;
    }
    cout << a.empty()<< endl;
    a.pop_back(); // Xóa phần tử ở cuối
    a.erase(a.begin() + 0); // Xóa phần tử ở vị trí tùy chọn
    a.clear();  // Xóa mọi phần tử trong vector

    vector<int> v;
    v.pb(1);
    v.pb(2);
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl;
    cout << *max_element(v.begin(), v.end());
    sort(v.begin(), v.end());
    return 0;
}