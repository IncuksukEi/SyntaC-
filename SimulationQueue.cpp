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

int check(string s){
    if (s.compare("#") == 0){
        return 0;
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    queue<int> q;
    string temp;
    while (1){
        cin >> temp;
        if(check(temp) == 0){
            break;
        }
        if(temp.compare("PUSH") == 0){
            int num;
            cin >> num;
            q.push(num);
        }
        if(temp.compare("POP") == 0){
            if(q.empty()){
                cout << "NULL" << endl;
            } else {
                cout << q.front()<< endl;
                q.pop();
            }
        }
    }
    return 0;
}