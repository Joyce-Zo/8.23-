#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//                  指 针

//	指针是个变量，用来存放地址的变量（1个地址的大小 = 4个字节/8个）
//
//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0; *///  int 4 个字节，*pa可以改变 4 个字节的内容
//	/*char* pc = &a;
//	*pc = 0;*/ // char 1 个字节，*pc只能改变 1 个 字节的内容
//	double* pd = &a;
//	*pd = 0;
//// 指针类型决定了指针进行 解引用操作 时可访问 空间的大小
//   或：决定指针 向前 或 向后 走一步 有多大距离
//// 	   int    *p:*p 访问4字节
//// 	   char   *p:*p     1
//// 	   short  *p:*p     2
//// 	   double *p:*p     8
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char b = 0x11223344;
//	int* pa = &a;
//	char* pc = &b;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//  地址+4
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//  地址+1
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		 *(p + i) = 1;
//		}
//
//	return 0;
//}

//				野 指 针
//  指针指向的位置不可知（随机、不确定、没有明确限制）

// 1.指针未初始化
//int main()
//{
//	int a;  //局部变量未初始化，默认是随机值
//	int* p; //同理，局部指针变量，默认随机值
//	*p = 20;// 将会随机储存在内存里，产生巨大影响，应避免
//	return 0;
//}

// 2.指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//  1.   *p++ = i;  2者同理
//  2.   *p = i;
//		  p++;
//	}
//	//  p++直到12，指针超过所能管理的arr范围（10），p称为野指针
//	return 0;
//
//}

//// 3.指针指向的空间释放
//int *test()
//{
//	int a = 10;
//	return &a;
//}//   a所指空间已经销毁
//int main()
//{
//	int *p=test();
//	printf("%d\n", *p);
//	*p = 20;
//	printf("%d\n", *p);
//	//  使用p时所指用空间已经释放，不属于自己
//	return 0;
//}

//    如 何 避 免 野 指 针 的 出 现？
//  1.初始化指针
int main()
{
	int a = 0;
	int b = 10;
	int* pa = &a;
	int* pb = NULL;//当不知初始化为何值时，用NULL - 给指针初始化（赋值）为0
	//*pb = 20;//  pb所指空间为0，不能访问

	if (pb != NULL)
	{
		*pb = 20;
	}
	return 0;
} 
//  2.避免指针越界

//  3.已创建的指针如果不想继续使用但仍使其合法存在，可放置为空指针NULL

//  4.使用指针之前检查其有效性