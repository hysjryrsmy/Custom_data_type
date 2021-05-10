#define _CRT_SECURE_NO_WARING
#include <stdio.h>
#include <string.h>
#include <assert.h>

//位段 - 二进制位
//位段的声明和结构是类似的，有两个不同：
//位段的成员必须是int、unsigned int或signed int
//位段的成员名后边有一个冒号和一个数字

//位段的内存分配
//1.位段的成员可以是 int unsigned int signed int 或者是 char(属于整形家族)类型
//2.位段的空间是按照需要以4个字节(int) 或者一个字节(char)的方式来开辟的
//3.位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段

//位段的跨平台问题
//1.int位段被当成有符号数还是无符号数是不确定的
//2.位段中最大位的数目不能确定。（16位及其最大16,32位机器最大32，写成27，在16位机器会出问题
//3.位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义
//4.当一个结构包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余的位时，是舍弃剩余的位还是利用，这是不确定的

// 跟结构相比，位段可以达到同样的效果，但是可以很好的节省空间，但是有跨平台的问题存在


/*
struct S
{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};

//47bit - 6个字节*8 = 48bit

int main()
{
	struct S s;
	printf("%d\n", sizeof(s)); //8个字节
	return 0;
}
*/


struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;

	return 0;
}

