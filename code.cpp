#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main(){
	int n;
	std::cout<<"Enter a number the is n^2. i.e. 4, 9, 16, 25, ect.\n";
	std::cin>> n;
	vector<vector<int> a(n,vector<int>(n));
	srand(time(0));
	for(int a_i = 0; a_i<n;a_i++)
	{
		for(int a_j=0;a_j<n;a_j++)
		{
			int x = rand() % 10+1;	
			int y = rand() % 10+1;
			cin >> a[x][y];
		}

	}
	int sum[2] = {0,0};
	for(int a_i = 0; a_i<n; a_1 +=1)
	{
		sum[0] = a[a_i][a_i];
		sum[1] = a[a_i][(n-1) -a_i];
	}

	std::cout << abs(sum[0]-sum[1]);
	return 0;
}

