#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void testcase() {
    int n,k;
    cin >> n >> k;
    if (n % 4 == 0) {
        int l = n/4;
        cout << l << " " << l << " " << l*2 << "\n";
    } else if (n % 4 == 2) {
        int l = (n-2)/2;
        cout << l << " " << l << " " << 2 << "\n";
    } else {
        int l = (n-1)/2;
        cout << l << " " << l << " " << 1 << "\n";
    }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int y;
  cin >> y;
  rep(i,0,y)
    testcase();
}