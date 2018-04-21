//iao?eoa 4*4 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int main()
{
	unsigned int *a;  // oeacuaaai ia iannea
	unsigned int i, j, n, m;
	printf("Aaaaeoa eiee?anoai no?ie: ");
	scanf("%d", &n);
	printf("Aaaaeoa eiee?anoai noieaoia: ");
	scanf("%d", &m);
	// Auaaeaiea iaiyoe
	a = (unsigned int*)malloc(n*m * sizeof(unsigned int));
	// Aaia yeaiaioia ianneaa
	for (i = 0; i < n; i++)
	{
		for (j = 0; j<m; j++)
		{
			if (i<0 || i>2 || j<0 || j>2)
				a = rand() % 4;
			else  a = 0;
			printf("%d ", a);
        }
		puts("\n");

	}
	// Auaia yeaiaioia ianneaa
	for (i = 0; i<n; i++)  // oeee ii no?ieai
	{
		for (j = 0; j<m; j++)  // oeee ii noieaoai
		{
			printf("%d ", *(a + i * m + j));
        }
		printf("\n");

	}
	// Inaiai?aaiea iaiyoe
	for (i = 0; i < n; i++)
	{
		free(a[i]);
    }
	free(a);
	free(m);
	return 0;
}