#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <sstream>

using namespace std;

#define REP(i,a,b) for(int i=a; i<b; i++)
#define sz size()
#define pb push_back
#define VI vector<int>
#define VS vector<string>
#define ALL(c) (c).begin(), (c).end()

string convertInt(int number){ stringstream ss;ss<<number;return ss.str();}

int main()
{
	int i, j, k;
	int a;
	int N;
	
	cin >> N;
	
	while(N--)
	{
		cin >> a;
		if (360 % (180-a) == 0)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}