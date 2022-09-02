#include<stdio.h>
#include<math.h>

int main()
{
	int n,t1,t2, i, j, sum, count, num;
	short prime[1000000];
	
	
	prime[2] = 1;
	for(i = 3; i < 1000000; i++)
	{
		prime[i] = 1;
		for(j = 2;j <= sqrt(i); j++)
		{
			if(prime[j] && i % j == 0)
			{
				prime[i] = 0;
				break;
			}
		}
	}
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d %d", &t1, &t2);
		count = 0;
		for(j = t1; j <= t2; j++)
		{
			if(prime[j] == 0)
				continue;
			sum = 0; num = j;
			while(num > 0)
			{
				sum += num % 10;
				num /= 10;
			}
			if(prime[sum])
				count++;
		}
		printf("%d\n", count);
	}
}
