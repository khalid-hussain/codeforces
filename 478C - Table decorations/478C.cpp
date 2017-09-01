#include<iostream>

using namespace std;

int main(){
    long long int a, b, c;

    cin >> a;
    int max = a;

    cin >> b;
    if (b > max)
        max = b;
    cin >> c;
    if (c > max)
        max = c;

    long long int total = a + b + c;
    long long int sumOfSmallestTwo = total - max;

    if ((total/3) > (sumOfSmallestTwo))
        cout << sumOfSmallestTwo;
    else
        cout << total/3;
}
