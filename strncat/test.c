#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//strncat - ���������Ƶ��ַ���׷��
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

//ģ��ʵ��

char* my_strncpy(char* dest, const char* src, size_t num) {
	assert(dest && src);
	char* start = dest;
	//��dest�ߵ�\0��λ��
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










