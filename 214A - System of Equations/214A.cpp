#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, m, a = 0, b = 0, count = 0;
	
	cin >> n >> m;
	
	int sqrta = sqrt(n);
	
	for (a=0; a<=sqrta; a++)
	{
		if ((a*a)+sqrt(m-a) == n)
		{
			count++;
		}
	}
	
	cout << count << endl;
	
	return 0;
}