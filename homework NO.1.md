# 第一次作业

## ~~1.证明P++等价于(p)++还是等价于*(p++)~~

证明如下：	

```c
//当p为指针类型时，计算p++,(p)++,*(p++)
#include<stdio.h>
int main ()
{
    int a=10;
    int *p=&a;
    printf("p++=%d",p++);
    printf("(p)++=%d\n",(p)++);
    printf("*(p++)=%d\n",*(p++));
}
```

~~![apture](C:\Users\18204\Pictures\Capture1.PNG)~~

```c
//当p为整数类型时，计算p++
#include<stdio.h>
int main ()
{
    int p=10;
    
    printf("p++=%d\n",p++);
    printf("(p)++=%d\n",(p)++);
    //printf("*(p++)=%d",*(p++));[Error] invalid type argument of unary '*' (have 'int')
}
```

~~![apture](C:\Users\18204\Pictures\Capture2.PNG)~~

~~结论:当p为指针类型时，可以确定p++与（p）++结果相同.~~

## 2.PTA:

### 	1.计算数的和与差：

#### 		1.思路步骤：

​			1.输入数字a,b;

​			2.进入自定义函数sum_diff

​			3. 形参op1与形参op2的和赋值给*psum所指向的sum；

​	             	     同理，形参op1与形参op2的差赋给*pdiff所指向的diff；

​			4.回到主函数：打印出结果；

#### 		2.实验代码：

```c
void sum_diff(float op1,float op2,float *psum,float *pdiff )
{
    *psum=op1+op2;
    *pdiff=op1-op2;
}
```

#### 		3.错误信息：

​		       无错误

### 	2.拆分小数的整数部分与小数部分：

#### 		1.思路步骤:

​			1.进入自定义函数splitfloat

​			2.定义浮点型型变量形参x,浮点数形参fracpart*小数部分*

​					                       	       浮点数形参intpart*整数部分*

​			3.形参x被强制转换为整型数*（地址只有整数）*，由此它的值变为整数部分，值被赋给指针intpart指向的值intpart；同理，形参x减去指针intpart的值 *（浮点型-整型=浮点型）* 赋给指针frapart所指向的值frapart .

#### 		2.实验代码：

```c
void splitfloat(float x, int *intpart,float *fracpart)
{
    *intpart=x;
    *fracpart=x-*intpart;
}		
```

#### 		3.错误信息：

​		       1.编译错误()：原因：自定义函数splitfloat后多了一个分号;(复制粘贴)

​						 方法：删去分号。

### 3.在数组中查找指定元素：

#### 1.思路步骤：

​			  1.输入数组元素个数n,数组a,待查找元素x；

​			  2.进入自定义函数search;

​			  3.进入for循环依次比较数组中的数字index与x是否一样，若相等输出对应元素序号a;若没有，输出-1。

​			  4.进入主函数，若index不等于-1，输出index; 等于-1，输出Not Found

#### 2.实验代码：

```c
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
```

#### 3.错误信息：

​			 1.输出index=1

​			     原因:忘记加break,导致循环执行下去。

​			      解决方法:在return a后加入break；

### 4.找最大值及其下标：

#### 1.思路步骤:

​			 1.依此输入数组中的数字，并定义数组的第一个元素为maxium。

​			 2.for循环依次比较，若maxium小于a[num],则把a[num]的值赋给maxium,且把地址num所代表的值赋给b。

​			 3.回到主函数，分别输出maxium及所代表的序号

#### 2.实验代码：

```c
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
```

#### 3.错误原因：

​			  无错误

##  5.最小数放前最大数放后   ***此代码未完成***

#### 1.思路步骤：

​			1.进入自定义函数input,for循环输入数组。



​			2.进入自定义函数output，for循环输出数组。

#### 2.实验代码：

```c
void input(int *arr,int n)
{
	int a=0;
    for(a=0;a<n;a++)
    {
	scanf("%d",arr+a);
    }
}

void output(int *arr,int n)

{
    int b;
    for(b=0;b<n;b++)
    {
	printf("%3d",*(arr+b));
    }
}
```

#### 3.错误原因：

​			 此代码未完成

## 3[.代码托管:](https://github.com/TartaricAcid943/homework-C-.git)

## 4.作业点评：

[袁中](www.cnblogs.com/2719610441qqcom/p/8604531.html) [李新华](www.cnblogs.com/Lixinhua18/p/8569649.html) [辛静瑶](www.cnblogs.com/X-JY/p/8619229.html)

