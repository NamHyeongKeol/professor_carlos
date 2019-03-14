#include <stdio.h>

int size;
int num_ans;
int box[1100][1100];
int position[4];
int ans = 0;

int main(void)
{
	// Get size, num_ans
	scanf("%d %d", &size, &num_ans);

	// Make box
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			scanf("%d", &box[i][j]);
		}
	}

	// Make position
	for (int l = 0; l < 4; l++)
	{
		scanf("%d ", &position[l]);
	}

	// Make answer
	for (int i = position[0] - 1; i < position[2]; i++)
	{
		for (int j = position[1] - 1; j < position[3]; j++)
		{
			ans += box[i][j];
		}
	}
	printf("%d ", ans);
	return 0;
}
