#include<stdio.h>
#include<stdio.h>
int space(int x);
int main()
{
	int a,b;
	printf("enter the numbers a and b \n");
	scanf("%d %d",&a,&b);
    int n;
    printf("enter the no:of spaces you want to add\n");
    scanf("%d",&n);
    printf("%d",a);
    space(n);
    printf("%d",b);
}
 int space(int x)
 {
 	int i;
 	for(i=0;i<x;i++)
 	{
 		printf(" ");
	 }
 }
