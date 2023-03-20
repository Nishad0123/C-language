#include <stdio.h>
#include <stdlib.h>

int *func(int *new1)
{
	int * local;
	local=new1;
	return local;
}

int main()
{
	int *new_ptr, var1=0, var2=0,i=0, *older;
	new_ptr=calloc(sizeof(int),5);
	printf("Enter 5 values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&new_ptr[i]);
	}
	printf("This is value:\n");
	for(i=0;i<5;i++)
	{
		printf("new=%d\n",new_ptr[i]);
	}
printf("older\n");
//	for(i=0;i<5;i++)
//	{
//		printf("older again=%d\n",older[i]);
//	}

	older=func(new_ptr);
	for(i=0;i<5;i++)
	{
		printf("older again=%d\n",older[i]);
	}
	//printf("address =%p\n",*new_ptr);
	return 0;
}
