#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//strcpy���ַ�������
/*
int main()
{
	char str1[] = "abcdef";
	char str2[10];
	//��str1�����ݿ�����str2��
	strcpy(str2, str1);
	printf("%s\n", str2);
	return 0;
}
*/



//ģʽʵ�֣�
//�ϰ汾��
/*
char* my_strcpy(char* dest, const char* src) {
	char* start = dest;
	assert(dest && src);
	while (*src) {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;// ����\0
	return start;
}
*/

//�°汾��
char* my_strcpy(char* dest, const char* src) {
	char* start = dest;//����dest����ʼλ��
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
	//��str1�����ݿ�����str2��
	my_strcpy(str2, str1);
	printf("%s\n", str2);
	return 0;
}






