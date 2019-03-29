#include <bits/stdc++.h>

using namespace std;

int main () {
  string line;
  bool opened = false;
  while (getline(cin, line)) {
    for (char ch: line) {
      if (ch != '\"') {
        cout << ch;
        continue;
      }
      if (not opened) {
        cout << "``";
        opened = true;
      } else {
        cout << "''";
        opened = false;
      }
    }
    cout << endl;
  }
  return (0);
}
