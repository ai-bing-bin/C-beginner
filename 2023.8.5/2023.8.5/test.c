#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <windows.h> 

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//debug版本下i储存
//	for (i = 0;i <= 12;i++)//运行过程中通过地址将i改成了0
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;//这段代码在release版本下能够正常运行
//}

//int check_sys()
//{
//	//大端存储，小端存储
//	int a = 1;
//	char* p = &a;
//	return(*p);
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//
//	return 0;
//}

//int main()
//{
//	//char a = -1;
//	////10000000000000000000000000000001;
//	////11111111111111111111111111111110
//	////11111111111111111111111111111111
//	////截断
//	////11111111;
//	////整形提升
//	////11111111111111111111111111111111
//	////10000000000000000000000000000001-源码
//	//printf("%d", a);
//
//	char a = 128;
//	//0000000000000000000000000010000000
//	//截断
//	//10000000
//	//提升
//	//1111111111111111111111111110000000
//	//1000000000000000000000000001111111
//	//1000000000000000000000000010000000
//	printf("%u", a);
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9;i >= 0;i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);//休眠一千毫秒
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	
//	for (i = 0;i < 1000;i++)
//	{
//		a[i] = -1 - i;//-1 -2 ... -128 127 126 ... 3 2 1 0 -1 ...
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//unsigned char i = 0;
//
//int main()
//{
//	for (i = 0; i <= 255;i++)
//	{
//		printf("hello world\n");
//		Sleep(100)
//	}
//	return 0;
//}

//#include<assert.h>
//
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	//if (strlen("abc") - strlen("abcdef") >= 0)//返回值为unsigned int
//	/*if (my_strlen("abc") - my_strlen("abcdef") >= 0)*/
//	if ((int)strlen("abc") - (int)strlen("abcdef") >= 0)
//		printf(">\n");
//	else
//		printf("<\n");
//
//	return 0;
//}

int main()
{

	return 0;
}