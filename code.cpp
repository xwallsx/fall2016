#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number the is n^2. i.e. 4, 9, 16, 25, ect.\n";
	cin>> n;
	vector<vector<int>> a(n,vector<int>(n));
	srand(time(0));
	for(int a_i = 0; a_i<n;a_i++)
	{
		for(int a_j=0;a_j<n;a_j++)
		{
			a[a_i][a_j]= rand() % 10+1;
		}

	}
	int sum[2] = {0,0};
	for(int a_i = 0; a_i<n; a_1 +=1)
	{
		sum[0] = a[a_i][a_i];
		sum[1] = a[a_i][(n-1) -a_i];
	}

	cout << abs(sum[0]-sum[1]);
	return 0;
}

