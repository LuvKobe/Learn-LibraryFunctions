#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//strcpy：字符串拷贝
/*
int main()
{
	char str1[] = "abcdef";
	char str2[10];
	//把str1的内容拷贝到str2中
	strcpy(str2, str1);
	printf("%s\n", str2);
	return 0;
}
*/



//模式实现：
//老版本：
/*
char* my_strcpy(char* dest, const char* src) {
	char* start = dest;
	assert(dest && src);
	while (*src) {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;// 拷贝\0
	return start;
}
*/

//新版本：
char* my_strcpy(char* dest, const char* src) {
	char* start = dest;//保存dest的起始位置
	assert(dest && src);
	while (*dest++ = *src++) {
		;
	}
	return start;
}

int main()
{
	char str1[] = "abcdef";
	char str2[10];
	//把str1的内容拷贝到str2中
	my_strcpy(str2, str1);
	printf("%s\n", str2);
	return 0;
}






