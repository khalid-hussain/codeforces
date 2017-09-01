#include <iostream>

using namespace std;

int main()
{
	int i, n, m;
	cin >> n >> m;
	
	long long time = 0, current = 1, x;
	
	for(i = 0; i < m; i++)
	{
		cin >> x;
		if (x!=current){
			if (x > current)
			{
				time += x - current;
				current = x;
			}
			else
			{
				time = time + (x + (n - current));
				current = x;
			}
		}
	}
	cout << time << endl;
	return 0;
}