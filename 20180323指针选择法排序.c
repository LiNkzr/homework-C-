#include<stdio.h>
#define MAXN 20

void strmcpy(char *t,int m,char *s);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN],s[MAXN];
    int m;
    scanf("%d\n", &m);
    ReadString(t);
    strmcpy(t,m,s);
    printf("%s\n",s);
	return 0;
}

/* 你的代码将被嵌在这里 */
void sort(int *x,int n)
 {
	int a=0,b=0,temp=0,maxium=0;
	for(a=0;a<n-1;a++)
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
