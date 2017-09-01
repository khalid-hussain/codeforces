#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.142

int main()
{
	int r, h;
	cin >> r >> h;
	
	int area = (h*2*r) + (PI * pow(r,2)/2);
	
	cout << area / (r * r);
	
	return 0;
}