#include <stdio.h>
#include <stdlib.h>


int main()
{
	int *ptr;
	void *vptr;
	int *new_ptr;

	ptr=malloc(sizeof(int)*5);
	if(ptr==NULL)
	{
		printf("NOT SAFE\n");
	}
	int i=0;
	printf("please insert 5 values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("10 values of ptr\n");
	for(i=0;i<10;i++)
	{
		if(i>4)
		{
			printf("garbage ");
		}
		printf("ptr valu=%d\n",*(ptr+i));
	
	}

	new_ptr=realloc(ptr,sizeof(int)*10);
	if(new_ptr!=NULL)
	{	
		printf("10 values of new_ptr after realloc from normal int *\n");
		for(i=0;i<10;i++)
		{
			
			if(i>4)
			{
				printf("garbage ");
			}
			printf("new valu=%d\n",*(new_ptr+i));
		}	

		ptr=new_ptr;
	}
	printf("10 values of ptr After assigning ptr=new_ptr \n");
	for(i=0;i<10;i++)
	{
		printf("ptr valu=%d\n",*(ptr+i));
	}	

	return 0;
}
