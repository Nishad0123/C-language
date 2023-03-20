#include<stdio.h>

int main()
{

char new[3][5];
printf("Enter strings ");
int i=0;
for(i=0;i<3;i++)
{
	scanf("%s",new[i]);
}

for(i=0;i<3;i++)
{ 
        printf("%s\n",new[i]);
}

return 0;
}
