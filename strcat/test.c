#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//strcat - 字符串追加
/*
int main()
{
	char str1[20] = "abcdef";
	char str2[] = "helloworld!";
	//把str2的内容追加到str1中
	strcat(str1,str2);
	printf("%s\n", str1);
	return 0;
}
*/


//模式实现：
char* my_strcat(char* dest, const char* src) {
	assert(dest && src);//先判断是否为空指针
	void* start = dest;//记录起始位置的dest

	//找到dest空间的'\0'
	while (*dest) {
		dest++;
	}

	//追加
	while (*dest++ = *src++) {
		;
	}
	return start;
}

int main()
{
	char str1[20] = "abcdef";
	char str2[] = "helloworld!";
	//把str2的内容追加到str1中
	my_strcat(str1, str2);
	printf("%s\n", str1);
	return 0;
}





