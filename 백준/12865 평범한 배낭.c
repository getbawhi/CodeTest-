#include <stdio.h>
//Knapsack(dp) 알고리즘

int main() {

	int n = 0, maxw = 0;
	int tmp = 0;
	int table[101][1000001] = { 0 };

	int value[101] = { 0 };
	int weight[101] = { 0 };

	scanf("%d %d", &n, &maxw);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &weight[i], &value[i]);
	}

	for (int i = 1; i <= n; i++)
	{

		for (int j = 1; j <= maxw; j++)
		{
			if (weight[i] > j)
				table[i][j] = table[i - 1][j];
			else 
			{
				tmp = value[i] + table[i-1][j - weight[i]];
				if (tmp > table[i - 1][j])
					table[i][j] = tmp;
				else
					table[i][j] = table[i - 1][j];

			}

		}


	}

	printf("%d", table[n][maxw]);

	return 0;



}
