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

    string s1, s2;
    s1 = "HoangAnh";
    cin >> s2;
    // Kiểm tra độ dài sâu
    cout << s1.length() << ' '<< s2.size() << endl;
    string s3;
    // Kiểm tra xem xâu có rỗng hay không
    cout << s3.empty() << endl;
    // Chèn 1 chuỗi vào chuỗi khác từ vị trí a
    s1.insert(1, "Test");
    // Xóa 1 chuỗi từ vị trí a
    s1.erase(1, 4);
    // Thay thế b kí tự từ vị trí a bằng 1 string khác
    s2.replace(0, 5, "test");
    // Tìm kiếm chuỗi s, bắt đầu từ bị trí a
    int a = s1.find("a", 0);
    int b = s2.rfind(s2, 0);    // Tương tự find nhưng từ dưới lên
    // Sao chép 1 sâu con từ vị trí a với độ dài b
    string s4 = s1.substr(0, 4);
    // So sánh hai chuỗi, 0 nếu bằng nhau, <0 nếu chuỗi hiện tại nhỏ hơn và >0 nếu chuỗi hiện tịa lớn hơn
    int c = s1.compare(s2);
    cout  << endl << a << ' ' << b << ' ' << c ;
    return 0;
}