#include <iostream>

using namespace std;

int main() {
  int n, n2, ways;
  cin >> n;
  while (n != 0) {
    ways = 0;
    n2 = n<<1;
    for (int k = 1; k*(k+1) < n2; k++) {
      if ((n2 - k*(k+1)) % (2*k) == 0) {
        ways++;
      }
    }
    cout << ways << "\n";
    cin >> n;
  }
  return 0;
}
