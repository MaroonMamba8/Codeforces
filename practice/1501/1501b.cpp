#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void testcase() {
    int n,m;
    cin >> n;
    vi entries(n);
    vi bools(n);
    for(int i = 0; i < n; i+=1){
        cin >> m;
        bools[i] = 0;
        entries[i] = m;
    }
    int t = n-1;
    for(int i = n-1; i > -1; i-=1){
        int a = min(t,i);
        int b = max(-1,i - entries[i]);
        if (b >= a){continue;}
        else{
            for(int j = a; j > b; j -=1){
                bools[j] = 1;
            }
            t = b;
        }
    }
    for(int i = 0; i < n; i+=1){
        cout << bools[i] << " ";
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