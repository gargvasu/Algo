#include < iostream > 
#include < bits / stdc++.h >
  using namespace std;

int main(){
  int n;
  cin >> n;
  string in ;
  cin >> in ;
  vector < char > v1( in .begin(), in .end());
  vector < char > v2[n + 1];
  bool dir = true;
  int x = 1;
  for (int i = 0; i < v1.size(); i++) {
    if (x == n) {
      x = 1;
      dir = !dir;
    }

    if (dir) {
      v2[x].push_back(v1[i]);
    } else if (!dir) {
      v2[n - x + 1].push_back(v1[i]);
    }
    x++;
  }

  vector < char > v3;

  for (int i = 0; i < n; i++) {
    copy(v2[i + 1].begin(), v2[i + 1].end(), back_inserter(v3));
  }

  string out(v3.begin(), v3.end());
  cout << out;
  return 0;
}