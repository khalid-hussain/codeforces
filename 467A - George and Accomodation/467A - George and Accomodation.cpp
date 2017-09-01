#include <iostream>

using namespace std;

int main() {
    int N, p, q;
    int sum = 0;
    cin >> N;
    while (N--){
        cin >> p >> q;
        if ((q-p)>1)
            sum++;
    }
    cout << sum << endl;
    return 0;
}
