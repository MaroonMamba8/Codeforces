#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void testcase() {
    int t, s;
    cin >> t;
    std::map<int, int> entries;
    int maximum = 0;
    for (int i = 0; i < t; i += 1){
        cin >> s;
        if (entries.find(s) == entries.end()){
            entries[s] = 1;
        } else {
            entries[s] += 1;
        }
        if (entries[s] > maximum){
            maximum = entries[s];
        }
    }
    if (maximum > t/2){
        cout << 2 * maximum - t << "\n";
    } else {
        cout << (t % 2) << "\n";
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