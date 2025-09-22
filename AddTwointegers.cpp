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

    string num1, num2, sum = "";
    cin >> num1 >> num2;
    int pivot = 0, maxSize = max(num1.size(), num2.size()), minSize = min(num1.size(), num2.size());
    if (num1.size() > num2.size()){
        FOR(i,0,maxSize - minSize){
            num2 = '0' + num2;
        }
    }
    else{
        FOR(i, 0, maxSize - minSize){
            num1 = '0' + num1;
        }
    }
    for (int i = maxSize - 1; i >=0 ; i--){
        int a = (num1[i] - '0') + (num2[i] - '0') + pivot;
        pivot = a / 10;
        a = a % 10;
        sum = char(a+48) + sum;
    }
    if (pivot == 1){
        sum = '1' + sum;
    }
    cout << sum;
    return 0;
}