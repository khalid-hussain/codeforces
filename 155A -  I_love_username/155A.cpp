#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string.h>

using namespace std;

#define REP(i,a,b) for(i=a; i<b; i++)
#define sz size()
#define pb push_back
#define VI vector<int>
#define VS vector<string>

int main()
{
	int N, max, min, a, b, amz=0;
	cin >> N;
	
	cin>>a;
	max=a;
	min=a;
	
	N=N-1;
	
	while(N--)
	{
		cin >> b;
		if (b>max)
		{
			amz++;
			max=b;
		}
		else if (b<min)
		{
			amz++;
			min=b;
		}
	}
	
	cout<<amz<<endl;
	
	return 0;
}