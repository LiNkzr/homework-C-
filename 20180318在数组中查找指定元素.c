#include <stdio.h>
#define MAXN 10
int search(int list[],int n,int x );
int main()
{
    int i,index,n,x;
    int a[MAXN];
	scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&x);
    index=search(a,n,x);
    if(index!=-1)
        printf("index = %d\n", index);
    else
        printf("Not found\n");
	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int search(int list[],int n,int x)
{
  int a;
  for(a=0;a<n;a++)
    {
      if(list[a]==x)
        {
          return a;
          break;
        }
    }
    return -1;
}
