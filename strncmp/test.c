#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//strncmp - 长度受限制的字符串比较
// 
//int strncmp(const char* str1, const char* str2, size_t num)

int main()
{
	char str1[] = "abcde";
	char str2[] = "abcdf";
	char str3[] = "abcdd";

	int ret1 = strncmp(str1, str2, 3);
	int ret2 = strncmp(str1, str2, 5);
	int ret3 = strncmp(str2, str3, 5);

	printf("%d\n", ret1);
	printf("%d\n", ret2);
	printf("%d\n", ret3);


	return 0;
}















