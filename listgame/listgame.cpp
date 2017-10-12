#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int X, k = 0;
    cin >> X;
    
    while (X%2 == 0) {
      X/=2;
      k++;
    }
    
    for (int i = 3; i <= sqrt(X); i += 2) {
      while (X%i == 0) {
        X/=i;
        k++;
      }
    }
    
    if (X > 2) {
      k++;
    }
    
    cout << k << '\n';
    return 0;
}
