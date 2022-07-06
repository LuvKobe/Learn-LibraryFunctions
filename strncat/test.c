#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//strncat - 长度受限制的字符串追加
/*
int main()
{
	char str1[20] = "hello\0xx";
	char str2[] = "world";
	strncat(str1, str2, 5);
	printf("%s\n", str1);
	return 0;
}
*/

//模拟实现

char* my_strncpy(char* dest, const char* src, size_t num) {
	assert(dest && src);
	char* start = dest;
	//把dest走到\0的位置
	while (*dest) {
		dest++;
	}
	while (num--) {
		*dest = *src;
		dest++;
		src++;
	}
	*(dest) = '\0';
	return start;
}

int main()
{
	char str1[20] = "hello\0xx";
	char str2[] = "world";

	strncat(str1, str2, 5);

	printf("%s\n", str1);

	return 0;
}










