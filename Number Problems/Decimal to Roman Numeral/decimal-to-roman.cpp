#include < iostream > 
#include < bits / stdc++.h >
  using namespace std;

int main() {
  map < int, string > m;
  m[1] = "I";
  m[4] = "IV";
  m[5] = "V";
  m[9] = "IX";
  m[10] = "X";
  m[40] = "XL";
  m[50] = "L";
  m[90] = "XC";
  m[100] = "C";
  m[400] = "CD";
  m[500] = "D";
  m[900] = "CM";
  m[1000] = "M";
  int n;
  cin >> n;
  vector < string > v;
  while (n > 0) {
    if (n >= 1000 && n <= 3999) {
      int x = n / 1000;
      for (int i = 1; i <= x; i++) {
        v.push_back(m[1000]);
        n = n - 1000;
      }

    } else if (n >= 900 && n < 1000) {
      v.push_back(m[900]);
      n = n - 900;

    } else if (n >= 500 && n < 900) {
      int x = n / 500;
      for (int i = 1; i <= x; i++) {
        v.push_back(m[500]);
        n = n - 500;
      }
    } else if (n >= 400 && n < 500) {
      v.push_back(m[400]);
      n = n - 400;
    } else if (n >= 100 && n < 400) {
      int x = n / 100;
      for (int i = 1; i <= x; i++) {
        v.push_back(m[100]);
        n = n - 100;
      }
    } else if (n >= 90 && n < 100) {
      v.push_back(m[90]);
      n = n - 90;

    } else if (n >= 50 && n < 90) {
      v.push_back(m[50]);
      n = n - 50;

    } else if (n >= 40 && n < 50) {
      v.push_back(m[40]);
      n = n - 40;
    } else if (n >= 10 && n < 40) {
      int x = n / 10;
      for (int i = 1; i <= x; i++) {
        v.push_back(m[10]);
        n = n - 10;
      }
    } else if (n >= 9 && n < 10) {
      v.push_back(m[9]);
      n = n - 9;

    } else if (n >= 5 && n < 10) {
      v.push_back(m[5]);
      n = n - 5;

    } else if (n >= 4 && n < 5) {
      v.push_back(m[4]);
      n = n - 4;

    } else if (n >= 1 && n < 4) {
      int x = n / 1;
      for (int i = 1; i <= x; i++) {
        v.push_back(m[1]);
        n = n - 1;
      }
    }
  }

  for (int i = 0; i < v.size(); i++) {
    cout << v[i];
  }
  return 0;
}