#include <stdio.h>
#include <stdlib.h>

typedef struct code
{
int num1;
char grade;
char dot1;
//dollar *cptr;
struct code *cptr;
}dollar;


int main()
{
	dollar var1, var2;
	dollar *whatptr;
	//
	//void *newptr=(dollar *)calloc(sizeof(dollar),1);
//	void *newptr=calloc(1,sizeof(dollar));
	void *newptr=calloc(1,sizeof(var2));
	var1.num1=15;
	var1.grade='C';
	var1.dot1='6';
	var1.cptr=NULL;
	
	whatptr=&var1;	
	
	var2.num1=25;
	var2.grade='H';
	var2.dot1='8';
	var2.cptr=NULL;
	
	var1.cptr=&var2;

//	newptr=(dollar *)&var2;
	//newptr=&var2;
	newptr=(dollar *)whatptr;


	printf("Checking var1 elements with var1\n");
	printf("This is ptr: num= %d  grade=%c  dot1=%c \n",var1.num1,var1.grade,var1.dot1);

	printf("Checking var1 elements with whatptr\n");	
	printf("This is ptr: num= %d  grade=%c  dot1=%c \n",whatptr->num1,whatptr->grade,whatptr->dot1);

	printf("Checking var2 elements with var1\n");
	printf("This is ptr: num= %d  grade=%c  dot1=%c \n",var1.cptr->num1,var1.cptr->grade,var1.cptr->dot1);

	printf("Checking var1 elements with newptr\n");
	printf("This is ptr: num= %d  grade=%c  dot1=%c \n",((dollar *)newptr)->num1,((dollar *)newptr)->grade,((dollar *)newptr)->dot1);
//	printf("This is ptr: num= %d  grade=%c  dot1=%c \n",newptr->num1,newptr->grade,newptr->dot1);
//	printf("This is ptr: num= %d  grade=%c  dot1=%c \n",newptr->num1,newptr->grade,newptr->dot1);

		
	return 0;
}
