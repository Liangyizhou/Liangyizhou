#include <iostream>
#include <stdlib.h>

using namespace std;
//判断素数
//返回值
//1：素数
//0：不是素数
int checkPrimeNumber(int n) {
	int i,flag=1;
	for (i = 2; i < n; i = i+1) 
	{
		if (n % i == 0) {
			flag = 0 ;
			break;
		}
	}
	return flag;
}

int main()
{
	int i,totalnum = 100;
	for(i = 2; i < totalnum+1; i = i+1)
	{
		//大于2的偶数肯定不是素数，在这把大于2的偶数筛掉
		if (i % 2 == 0 && i > 2)
			continue;
		//判断数字
		if (checkPrimeNumber(i)) {
			cout << "The PrimeNumber is: " << i << endl;
		}
	}
	system("pause");
	return 0;
}