#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// memmove - �ڴ濽��
// void* memmove(void* dest, const void* src, size_t count);

// �� str1 �����е� 1��2��3��4��5�������ŵ� 3��4��5��6��7 ��λ��
/*
int main()
{
	int str1[] = { 1,2,3,4,5,6,7,8,9,10 };

	memmove(str1 + 2, str1, 5 * sizeof(str1[0]));

	for (int i = 0; i < 10; ++i) {
		printf("%d ", str1[i]);
	}

	return 0;
}
*/



// ģ��ʵ�֣�
// �� str1 �����е� 1��2��3��4��5�������ŵ� 3��4��5��6��7 ��λ��

void my_memmove(void* dest, const void* src, size_t num) {
	assert(dest && src);
	void* start = dest;
	// 1.��ǰ���
	if (dest < src) {
		while (num--) {
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else { // 2.�Ӻ���ǰ
		while (num--) {
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return start;
}

int main()
{
	int str1[] = { 1,2,3,4,5,6,7,8,9,10 };

	my_memmove(str1 + 2, str1, 5 * sizeof(str1[0]));

	for (int i = 0; i < 10; ++i) {
		printf("%d ", str1[i]);
	}

	return 0;
}







