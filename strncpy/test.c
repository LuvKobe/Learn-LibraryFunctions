#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//strncpy - 长度受限制的字符串拷贝
/*
int main()
{
	char str1[20] = "xxxxxxxxxxxxxxxxxxxx";
	char str2[] = "helloworld";
	strncpy(str1, str2, 10);
	printf("%s\n", str2);
	return 0;
}
*/

//模拟实现
/*
char* my_strncpy(char* dest, char* src, size_t num) {
	assert(dest && src);
	char* start = dest;
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
	char str1[20] = "xxxxxxxxxxxxxxxxxxxx";
	char str2[] = "helloworld";
	my_strncpy(str1, str2, 10);
	printf("%s\n", str1);
	return 0;
}
*/









