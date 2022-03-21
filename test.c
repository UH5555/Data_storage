#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//类型决定空间大小和看待的视角
//	int a = 10;
//	float f = 10.0;
//	return 0;
//}

//int main()
//{
//	int a = 20;//4个字节 - 32bit
//	//00000000000000000000000000010100 - 原码
//	//00000000000000000000000000010100 - 反码
//	//00000000000000000000000000010100 - 补码
//	//0x00000014
//	int b = -10;
//	//10000000000000000000000000001010 - 原码
//	//11111111111111111111111111110101 - 反码
//	//11111111111111111111111111110110 - 补码
//	//0xfffffff6
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	//小端模式，数据的地位保存在内存的低地址中，而数据的高位，保存在内存的高地址中。
//	return 0;
//}

////写一段代码来确定是小端存储还是大端存储
//int main()
//{
//	int a = 1;
//	char* p = (char*) & a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

////int check_sys()
////{
////	int a = 1;
////	char* p = (char*)&a;
////	return *p;
////}
//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
////写一段代码来确定是小端存储还是大端存储
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	char b = 128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 - 补码
//	//10000000
//	//11111111111111111111111110000000 - 补码(整型提升)
//	printf("%u\n%u\n", a,b);
//	//%d - 打印十进制的有符号数字
//	//%u - 打印十进制的无符号数字
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	printf("%d", a[128]);
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n value is:%d\n", n);
//	printf("* pFloat value is:%f\n", *pFloat);
//	//9.0
//	//1001.0
//	//(-1)^0*1.001*2^3
//	//(-1)^S*M    *2^E
//	//S - 0
//	//M - 1.001
//	//E - 3
//	//IEEE 754规定：对于32位的浮点数，最高的1位是符号位S，接着的8位是指数E，剩下的23位是有效数字M
//	//IEEE 754规定：对于64位的浮点数，最高的1位是符号位S，接着的11是指数E，剩下的52位是有效数字M
//	//0.5
//	//0.1
//	//(-1)^0*1.0*2^(-1)
//	//-1+127=126
//
//	*pFloat = 9.0;
//	printf("n value is:%d\n", n);
//	printf("* pFloat value is:%f\n", *pFloat);
//	return 0;
//}

//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0*1.011*2^2
//	//S = 0;
//	//M = 1.011
//	//E = 2(+127=129)
//	//0100 0000 1011 0000 0000000000000000000000000
//	//0x40b00000
//	return 0;
//}