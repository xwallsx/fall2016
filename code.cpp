#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

/*This code does the diagonal difference of a NxN block. You first
 * enter a number to create this n^2 block, it then creates this
 * with random numbers from 1 to 10 and it bring it to the screen
 * so the user can see. It then run from the top left hand corner
 * to the bottom right counting each number to the sum of sum[0] 
 * and it does the same, but from the top right corner to the bottom
 * left and stores the sum to sum[1]. It then takes the absolute
 * some of the differnce between the two.*/

int main(){

	int n;
	cout<<"Enter a number.\n";
	cin>> n;
	vector<vector<int>> a(n,vector<int>(n));
	srand(time(0));
	for(int a_i = 0; a_i<n;a_i++)
	{
		for(int a_j=0;a_j<n;a_j++)
		{
			a[a_i][a_j]= rand() % 10+1;
			cout<<a[a_i][a_j]<< ' ';
			if(a_j == (n-1))
			{
				cout << endl;
			}
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

