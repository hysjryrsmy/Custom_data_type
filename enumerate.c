#define _CRT_SECURE_NO_WARING
#include <stdio.h>
#include <string.h>
#include <assert.h>

//枚举的有点
// 1.增加代码的可读性和可维护性
// 2.和#define定义的标识符比较枚举有类型检查，更加严谨
// 3.防止了命名污染（封装）
// 4.便于调试
// 5.使用方便，一次可以定义多个常量
//

/*
//枚举类型
enum Sex
{
	//枚举的可能取值 - 常量
	MALE = 2,
	FEMALE = 6,
	SECRET
};

enum Color
{
	RED,  
	GREEN, 
	BLUE
};

int main()
{
	//enum Sex s = MALE;
	//enum Color c = BLUE;
	printf("%d %d %d\n", RED, GREEN, BLUE);
	printf("%d %d %d\n", MALE, FEMALE, SECRET);
	return 0;
}
*/



//联合 - 联合体 - 共用体

// 联合的特点
// 联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小
// 因为联合至少得有能力保存最大的那个成员

// 联合大小的计算
// 1.联合的大小至少是最大成员的大小
// 2.当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍
//

/*
union Un
{
	char c;
	int i;
};
//5个字节

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	printf("%p\n", &u);
	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));
	return 0;
}
*/


/*
check_sys()
{
	int a = 1;
	return *(char*)&a;
}

int main()
{
	int a = 1;
	int ret = check_sys();
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}

	//int a = 0x11223344;
	//
	//低地址--------------->高地址
	//....[][][][][11][22][33][44][][][][][][][]....  大端字节序存储模式
	//....[][][][][44][33][22][11][][][][][][][]....  小端字节序存储模式
	//讨论一个数据，放在内存中的存放的字节顺序
	//大小端字节序问题
	return 0;
}
*/


/*
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	enum Sex s = MALE;
	printf("%d\n", sizeof(s));
	return 0;
}
*/



union Un
{
	int a;  //
	char arr[5]; //
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));

	return 0;
}