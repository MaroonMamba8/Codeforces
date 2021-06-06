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
    if ((n-k) % 2 == 0) {
        int l = (n-k+2)/2;
        for (int i = 0; i < (k-2); i +=1) {
            cout << 1 << " ";
        }
        cout << l << " " << l << "\n";
    } else if ((n-k) % 4 == 1) {
        int l = (n-k+3)/4;
        for (int i = 0; i < (k-3); i +=1) {
            cout << 1 << " ";
        }
        cout << l << " " << l << " " << 2*l << "\n";
    } else {
        int l = (n-k+1)/2;
        for (int i = 0; i < (k-3); i +=1) {
            cout << 1 << " ";
        }
        cout << 2 << " " << l << " " << l << "\n";
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