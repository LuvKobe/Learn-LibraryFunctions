#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// memcpy - �ڴ濽��
// void* memcpy(void* dest, const void* src, size_t count);

// �� str1 �����е�ǰ 5 ��Ԫ�ؿ����� str2 ��

/*
int main()
{
	int str1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int str2[10] = { 0 };

	memcpy(str2, str1, 5 * sizeof(str1[0]));

	for (int i = 0; i < 5; ++i) {
		printf("%d ", str2[i]);
	}

	return 0;
}
*/



// ģ��ʵ�֣�
// �� str1 �����еĺ� 5 ��Ԫ�ؿ����� str2 ��
void* my_memcpy(void* dest, const void* src, size_t num) {
	assert(dest && src);
	void* start = dest;
	while (num--) {
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return dest;
}

int main()
{
	int str1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int str2[10] = { 0 };

	my_memcpy(str2, str1+5, 5 * sizeof(str1[0]));

	for (int i = 0; i < 5; ++i) {
		printf("%d ", str2[i]);
	}

	return 0;
}







