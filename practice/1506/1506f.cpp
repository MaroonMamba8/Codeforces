#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void testcase() {
    int n,x,y,total;
    x = 1;
    y = 1;
    total = 0;
    cin >> n;
    pii p[n];
    for (int i = 0; i < n; i+=1){
        cin >> p[i].first;
    }
    for (int i = 0; i < n; i+=1){
        cin >> p[i].second;
    }
    sort(p,p+n);

    for (int i = 0; i < n; i+= 1){
        int curr = -(p[i].second - p[i].first - y + x);
        if ((x+y) % 2 == 1){
            total += (curr+1)/2;
        } else {
            if (curr == 0){
                total += p[i].second - y;
            } else {
                total += curr/2;
            }
        }
        x = p[i].first;
        y = p[i].second;
    }
    cout << total << "\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int y;
  cin >> y;
  rep(i,0,y)
    testcase();
}