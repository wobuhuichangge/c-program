
#include"test.h"

//void Test()
//{
//	char a[5] = { 'A', 'B', 'C', 'D' };
//	char(*p1)[5] = &a;
//	char(*p2)[5] = a;
//}
//void Test()
//{
//	char a[5] = { 'A', 'B', 'C', 'D' };
//	char(*p1)[10] = &a;
//	char(*p2)[10] = a;
//}

//int main()
//{
//
//	
//	struct Test1
//	{
//		int Num;
//		char* pcName;
//		short sDate;
//		char cha[2];
//		short sBa[4];
//	}*p;
//	//printf("%x \n", p + 0x1);
//	//printf("%x \n", (unsigned int*)p + 0x1);
//
//	system("pause");
//	return 0;
//}

void Test()
{
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x ,%x", ptr1[-1], *ptr2);//*ptr2 如果当前系统的存储模式为小端，输出0x2000000，如果为大端 输出0x100；
}
int main()
{
	Test();
	system("pause");
	return 0;
}