#include<stdio.h>

void sort(int *x,int n);

int main ( )

{int *p,i,a[10];

 p=a;

 for (i=0;i<10;i++)  scanf("%d",p++);

 p=a;

 sort(a,10);

 for(i=0;i<10;i++)  printf("%4d",*p++);

 printf("\n");

 return 0;

 }
void sort(int *x,int n)
 {
	int a=0,b=0,temp=0,maxium=0;
	for(a=0;a<n;a++)
	{
		maxium=a;
		for(b=a;b<n;b++)
			{
				if(*(x+maxium)<*(x+b))
					{
						maxium=b;
					}
			}
		if(maxium!=a)
		 	{
				temp=*(x+maxium);
				*(x+maxium)=*(x+a);
				*(x+a)=temp;
		 	}
	
    }

 }
