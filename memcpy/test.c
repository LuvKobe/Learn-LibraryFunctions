#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// memcpy - 内存拷贝
// void* memcpy(void* dest, const void* src, size_t count);

// 把 str1 数组中的前 5 个元素拷贝到 str2 中

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



// 模拟实现：
// 把 str1 数组中的后 5 个元素拷贝到 str2 中
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







