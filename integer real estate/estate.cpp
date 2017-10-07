#include <iostream>

using namespace std;

/*
If a customer can purchase 'k' consecutive houses, starting at house 'a', that means
  (a + 1) + (a + 2) + (a + 3) + ... (a + k) = n
which simplifies to
  ka + k(k+1)/2 = n
Let's rearrange this equation so we can solve for 'a':
  a = (2n - k(k+1))/2k
As long as 'a' is an integer, we know there's a way to purchase 'k' consecutive houses. We don't need to know what the value of 'a'
actually is. This means we only need to check whether
  2k | 2n - k(k+1)
in other words, does
  2n - k(k+1) = 0 (mod 2k)
hold. If it does, then there is an integer solution for 'a'. With this knowledge, we can just iterate through from k = 1 until
k(k+1) >= 2n, at which point there will be no more solutions.
*/

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
