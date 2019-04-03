
#include"Test.h"

#if 0
//void Test()
//{
//	int i = 0;
//	enum Color
//	{
//		GREEN = 1,
//		RED,
//		BULE,
//		//GREEN_BULE,
//
//	}ColorVal;
//	i = sizeof(ColorVal);//枚举类型的内存大小计算与结构体类似。
//	printf("%d ", i);
//}
//void Test()
//{
//	int i = 0;
//	int j = 0;
//	i = (-3) / 2;
//	j = (-3) % 2;
//	printf("%d %d ", i, j);
//}
int main()
{
	Test();
	system("pause");
	return 0;
}
#endif
#if 0
void Test()
{
	int i = 0;
	i = 0x01 << 2 + 3; // + 的优先级比<< 高；
	printf("%d ", i);
}
int main()
{
	Test();
	system("pause");
	return 0;
}
#endif
#if 0
#define a int[10];

void Test()
{
	int b;
	//a[10] a[10];//error
	//a[10] a;//error
	//int a[10];//error
	//int a;//error
	//a b[10];//error
	//a b;//error
	//a* b[10];error
	//a* b;error


}
int main()
{
	Test();
	system("pause");
	return 0;
}
#endif

#if 0
typedef int a[10];// 
void Test()
{
	int b;
	//a[10] a[10];//error
	//a[10] a;//error
	//int a[10];
	 //int a;
	 //a b[10];//error
	 //a b;//error
	 //a* b[10];//error
	 //a* b;//error

}
int main()
{
	Test();
	system("pause");
	return 0;
}
#endif

//
//#include <stdio.h>
//#include <stdlib.h>
//#define a int[10]
//
//int main()
//{
//	int *p = (int *)malloc(sizeof(a));
//
//	p[0] = 1;
//
//	printf("%d\n", p[0]);
//	system("pause");
//	return 0;
//}



//#include <stdio.h>
//typedef int a[10];
//
//int main()
//{
//	a b;
//
//	b[0] = 1;
//
//	printf("%d\n", b[0]);
//
//	return 0;
//}

#if 1
int main()
{
	union
	{
		int i;
		char a[1];

	}*p,u;
	p = &u;
	u.a[0]= 0x01;
	//p->a[1] = 0x38;
	printf("%d ", p->i);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	union check
	{
		int i;
		char ch;
	}c;
	c.i = 1;
	printf("%d", c.ch);
	system("pause");
	return 0;

}//系统的存储模式为小端模式
#endif