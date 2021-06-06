#include "bits/stdc++.h"
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void testcase() {
    vi indices(130);
    vi visited(130);
    vi res;
    int count = 0;
    string s;
    cin >> s;

    for (int i = 0; i < 130; i+=1){
        indices[i] = 0;
        visited[i] = 0;
    }
    for (int i = 0; i < s.length(); i +=1) {
        indices[s.at(i) - 'a'] += 1;
    }

    for (int i = 0; i < s.length(); i +=1){
        int j = s.at(i) - 'a';
        indices[j] -= 1;
        if (visited[j] == 0){
            while (!res.empty()){
                if (indices[res.back()] == 0 or res.back() > j){
                    break;
                }
                visited[res.back()] = 0;
                res.pop_back();
                count -= 1;
            }
            res.push_back(j);
            count += 1;
            visited[j] = 1;
        }
    }

    string t;
    for (int i = 0; i < count; i +=1){
        t += res[i] + 'a';
    }

    cout << t << "\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int y;
  cin >> y;
  rep(i,0,y)
    testcase();
}