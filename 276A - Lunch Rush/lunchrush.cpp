#include <iostream>

using namespace std;

int main()
{
	int n, k, f, t, i, joy;
	cin >> n >> k;
	
	cin >> f >> t;
	
	if(t<k)
		joy = f;
	else joy = f - (t - k);
	
	
	for (i=1; i<n; i++)
	{
		cin >> f >> t;
		
		if (t<k)
		{
			if (f > joy)
				joy = f;
		}
		else 
		{	
			if (f- (t - k) > joy)
				joy = f- (t - k);
		}
	}
	
	cout << joy;
	
	return 0;
}