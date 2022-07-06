#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//strcmp - 字符串比较
// str1 > str2 ---> 返回大于0的数
// str1 == str2 ---> 返回等于0的数
// str1 < str2 ---> 返回小于0的数
/*
int main()
{
	char str1[] = "abcdefg";
	char str2[] = "abcdfg";

	int ret = strcmp(str1, str2);

	if (ret > 0) {
		printf("%d\n", ret);
		printf("str1 > str2");
	}
	else if (ret < 0) {
		printf("%d\n", ret);
		printf("str1 < str2");
	}
	else {
		printf("%d\n", ret);
		printf("str1 == str2");
	}

	return 0;
}
*/


//模拟实现：
int my_strcmp(const char* str1, const char* str2) {
	assert(str1 && str2);
	while (*str1 == *str2) {
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

int main()
{
	char str1[] = "abcdefg";
	char str2[] = "abcdfg";

	int ret = my_strcmp(str1, str2);

	if (ret > 0) {
		printf("%d\n", ret);
		printf("str1 > str2");
	}
	else if (ret < 0) {
		printf("%d\n", ret);
		printf("str1 < str2");
	}
	else {
		printf("%d\n", ret);
		printf("str1 == str2");
	}

	return 0;
}









