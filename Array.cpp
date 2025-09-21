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

    int n;
    cin >> n;
    int A[n];
    FOR(i,0,n){
        cin >> A[i];
    }
    FOR(i,0,n){
        cout << A[i] << " ";
    }
    sort(A, A + n);
    cout << endl;
    FOR(i, 0, n)
        cout << A[i] << " ";
    return 0;
}