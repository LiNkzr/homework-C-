#include<stdio.h>
#define N 10
int fun(int *a,int *b,int n);
int main()
{ int a[N],i,max,p=0;
for(i=0;i<N;i++) scanf("%d",&a[i]);
 max=fun(a,&p,N);
 printf("max=%d,position=%d\n",max,p);
 return 0;
}


/* ÇëÔÚÕâÀïÌîÐ´´ð°¸ */
int fun(int *a,int *b,int n)
{
  int num;
  int maxium=a[0];
  for(num=1;num<n;num++)
  {
    if(maxium<a[num])
      {
        maxium=a[num];
        *b=num;
      }
  }
  return maxium;
}
