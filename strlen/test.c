#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//strlen�����ַ�������
/*
int main()
{
	char str1[] = "abcdef";
	int ret = strlen(str1);
	printf("%d\n", ret);
	return 0;
}
*/


//ģʽʵ�֣�


//1. �������ķ���
//��Ϊֻ�󳤶ȣ��������str1�����ݽ����޸ģ����Կ���ʹ��const
//��������Ҳ����ʹ�� size_t
/*
size_t my_strlen(const char* str1) {
	int count = 0;
	while (*str1) {
		count++;
		str1++;
	}
	return count;
}

int main()
{
	char str1[] = "abcdef";
	int ret = my_strlen(str1);
	printf("%d\n", ret);
	return 0;
}
*/


//2. �ݹ�ķ���
/*
size_t my_strlen(const char* str1) {
	if (*str1 != '\0') {
		return 1 + my_strlen(str1 + 1);
	}
	else {
		return 0;
	}
}

int main()
{
	char str1[] = "abcdef";
	int ret = my_strlen(str1);
	printf("%d\n", ret);
	return 0;
}
*/


//3. ָ�� - ָ��
//ָ���ָ��õ����м��Ԫ�ظ���

size_t my_strlen(const char* str1) {
	const char* str2 = str1;
	while (*str2) {
		str2++;
	}
	return str2 - str1;
}

int main()
{
	char str1[] = "abcdef";
	int ret = my_strlen(str1);
	printf("%d\n", ret);
	return 0;
}





