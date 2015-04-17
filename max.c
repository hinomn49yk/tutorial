#include "stdio.h"

int main(void) {
	int data[5];
	int i, max;

	scanf("%d", &data[0]);
	max = data[0];
	
	for (i = 1; i < 5; i++) 
	{
		scanf("%d", &data[i]);
		if (max < data[i])
		{
			max = data[i];
		}
	}

	
	printf("%i\n", max);
}