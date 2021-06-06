#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void testcase() {
    int t, prev, curr, nextSmall, index;
    cin >> t;
    
    std::set<int> visited1;
    vi entries(t);
    nextSmall = 1;
    prev = 0;
    for (int i = 0; i < t; i +=1) {
        cin >> curr;
        entries[i] = curr;
        visited1.insert(curr);
        if (curr != prev) {
            cout << curr << " ";
            prev = curr;
        } else {
            while (visited1.find(nextSmall) != visited1.end()) {
                nextSmall += 1;
            }
            cout << nextSmall << " ";
            nextSmall += 1;
        }
    }
    cout << "\n";

    prev = 0;
    index = 0;
    vi st(t);
    for (int j = 0; j < t; j +=1) {
        curr = entries[j];
        if (curr != prev) {
            cout << curr << " ";
            for (int k = prev + 1; k < curr; k +=1) {
                st[index] = k;
                index += 1;
            }
            prev = curr;
        } else {
            index -= 1;
            cout << st[index] << " ";
        }
    }
    cout << "\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int y;
  cin >> y;
  rep(i,0,y)
    testcase();
}