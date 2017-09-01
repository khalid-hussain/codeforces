#include <iostream>
#include <math.h>

using namespace std;

bool isPowerOfTwo(unsigned int x)
{
  return (x != 0) && ((x & (x - 1)) == 0);
}

int main () {
    int N;
    cin >> N;

    int long long sum = 0;
    int long long nsum = 0;
    int long long number;

    while (N--) {
        cin >> number;
        sum += number * (number + 1) / 2;

        int long long count = 1;

        while (count <= number) {
            nsum += count;
            count *= 2;
        }

        sum = sum - (2*nsum);
        cout << sum << endl;
        sum = 0;
        nsum = 0;
    }

    return 0;
}
