#include <iostream>
using namespace std;
int main()
{
	int lucky[] = 
	{4,7,
	47,74,
	444,447,474,477,
	777,747,744,774};
	
	int num, j;
	cin >> num;
	int num2 = num;
	bool flag = false;
	
	while(num!=0)
	{
		int temp = num % 10;
		if (temp == 4 || temp == 7)
			flag = true;
		else
		{
			flag = false;
			break;
		}
		num = num / 10;
	}
	
	if (!flag)
	{
		for (j=0; j<12; j++)
		{
			if (num2 % lucky[j] == 0)
			{
				flag = true;
				break;
			}
		}
	}
	
	if (flag == true)
		cout << "YES" << endl;
	else cout <<"NO" << endl;
	
	return 0;
}