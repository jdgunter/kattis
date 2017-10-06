#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N,K;
    cin >> N >> K;
    vector<bool> sieve(N+1, true);
    sieve[0] = false;
    sieve[1] = false;
    int p = 0;
    int count = 0, ith = 0;
    while (p < N) {
        while(!sieve[p]) {
            p++;
        }
        for(int j = p; j <= N; j += p) {
            if (sieve[j]) {
                sieve[j] = false;
                count++;
                if (count == K) {
                    ith = j;
                    break;
                }
            }
        }
        if (ith > 0) {
            break;
        }
    }
    cout << ith << endl;
    return 0;
}
