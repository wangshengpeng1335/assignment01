#include <stdio.h>
#include <math.h>

void PowerSet(char *set, int set_size)
{
	unsigned int pow_set_size = pow(2,set_size);
	int counter, j;

	for(counter = 0;counter < pow_set_size;counter++)
	{
		for(j=0; j< set_size; j++)
		{
			if(counter & (1<<j))
				printf("%c",set[j]);
		}
		printf("\n");
	}
}

int main()
{

   char set[]={'a','b'};

	PowerSet(set,2);
	printf("symbol for the empty set\n\n");




		printf("*******************\n");
        printf("Wang ShengPeng\n");
        printf("Student ID : 20191335\n");
        printf("*******************\n");

	return 0;
}


