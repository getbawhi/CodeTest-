//세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.

//예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 
// 계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.

#include <stdio.h>
#include <stdlib.h>

int main() {

	int a, b, c;
	int sum = 0;
	int tmp = 0;
	int count = 0, ex=1;
	int number[10] = { 0 };

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	sum = a * b * c;
	tmp = sum;

	while (tmp != 0)
	{
		tmp = tmp / 10;
		count++;

	}

	int* table = (int*)malloc(sizeof(int) * count);

	for (int i = 0; i < count-1; i++)
	{
		ex = ex * 10;
	}
	

	for (int i = 0; i < count; i++)
	{
		table[i] = sum / ex;
		sum = sum - ((sum/ex)*ex);
		ex= ex/10;

	}

	for (int i = 0; i < count; i++)
	{
		number[table[i]]= number[table[i]] + 1;
	}

	
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", number[i]);
	}

	free(table);
	return 0;
}
