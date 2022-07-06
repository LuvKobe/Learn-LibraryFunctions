#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//strlen：求字符串长度
/*
int main()
{
	char str1[] = "abcdef";
	int ret = strlen(str1);
	printf("%d\n", ret);
	return 0;
}
*/


//模式实现：


//1. 计数器的方法
//因为只求长度，并不会对str1的内容进行修改，所以可以使用const
//返回类型也可以使用 size_t
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


//2. 递归的方法
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


//3. 指针 - 指针
//指针减指针得到是中间的元素个数

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





