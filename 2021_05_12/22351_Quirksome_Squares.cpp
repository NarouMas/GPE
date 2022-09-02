#include<iostream>
using namespace std;

int main()
{
	int n, num, top;
	int front, end;
	while(cin>>n)
	{
		switch(n)
		{
			case 2:
				top = 99;
				break;
			case 4:
				top = 9999;
				break;
			case 8:
				top = 99999999;
				break;
		}
		for(int i = 0; i < top; i++)
		{
			switch(n)
			{
				case 2:
					end = i % 10;
					front = (i - end) / 10;
					break;
				case 4:
					end = i % 100;
					front = (i - end) / 100;
					break;
				case 8:
					end = i % 10000;
					front = (i - end) / 10000;
					break;
			}
			if((front + end) * (front + end) == i)
			{
				switch(n)
				{
					case 2:
						printf("%02d\n", i);
						break;
					case 4:
						printf("%04d\n", i);
						break;
					case 8:
						printf("%08d\n", i);
						break;
				}
			}
		}
	}
	
}
