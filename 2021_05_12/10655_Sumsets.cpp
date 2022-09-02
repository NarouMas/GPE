#include<iostream>
#include<algorithm>
using namespace std;

int findsum(int arr[], int target, int n,int current, int depth, int sum)
{
	int add;
	for(int i = current; i < n; i++)
	{
		add = sum + arr[i];
		//printf("add:%d target:%d depth:%d\n", add, arr[target], depth);
		if(add > arr[target])
			return 0;
		else if(add == arr[target] && depth == 2)
			return 1;
		else
		{
			if(findsum(arr, target, n, current + 1, depth + 1, add))
				return 1;
		}
	}
	return 0;
}

int main()
{
	int n = 1, i, j, arr[1001], find_ans;
	while(1)
	{
		scanf("%d", &n);
		if(n == 0)
			break;
		for(i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		find_ans = 0;
		sort(arr, arr + n);
		
//		for(i = 0; i < n; i++)
//			printf("%d\n", arr[i]);
		
		for(int i = n - 1; i > 2; i--)
		{
			if(findsum(arr, i, n, 0, 0, 0))
			{
				printf("%d\n",arr[i]);
				find_ans = 1;
				break;
			}
		}
		if(find_ans == 0)
		{
			printf("no solution\n");
		}
	}
}
/*
5
2 
3 
5 
7 
12
*/
