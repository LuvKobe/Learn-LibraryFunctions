#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//strcat - �ַ���׷��
/*
int main()
{
	char str1[20] = "abcdef";
	char str2[] = "helloworld!";
	//��str2������׷�ӵ�str1��
	strcat(str1,str2);
	printf("%s\n", str1);
	return 0;
}
*/


//ģʽʵ�֣�
char* my_strcat(char* dest, const char* src) {
	assert(dest && src);//���ж��Ƿ�Ϊ��ָ��
	void* start = dest;//��¼��ʼλ�õ�dest

	//�ҵ�dest�ռ��'\0'
	while (*dest) {
		dest++;
	}

	//׷��
	while (*dest++ = *src++) {
		;
	}
	return start;
}

int main()
{
	char str1[20] = "abcdef";
	char str2[] = "helloworld!";
	//��str2������׷�ӵ�str1��
	my_strcat(str1, str2);
	printf("%s\n", str1);
	return 0;
}





