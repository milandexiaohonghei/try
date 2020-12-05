#include<stdio.h>
#include<windows.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#pragma warning(disable:4996)


//int main()
//{
//	char arr0[] = "abcdefgh";
//	int a = strlen(arr0);
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		*(arr0 + 8) = *arr0;
//		for (int i = 0; i < 8; i++)
//		{
//			arr0[i] = arr0[i + 1];
//		}
//		*(arr0 + 8) = 0;
//		num--;
//	}
//	printf("%s", arr0);
//	system("pause");
//	return 0;
//}




//int main()
//{
//	char *arr[] = { "aaaa", "nnnn", "cccc", "DDDD" };
//	printf("%s", *arr);
//
//	
//
//	char *p = "ssss";
//	printf("%s", p);
//	system("pause");
//	return 0;
//
//}
//int my_strlen(const char *str)
//{
//	/*int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;*/
//	char *p = str;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - str;
//}

//void my_strcpy(char *str,const char* dest )
//{
//
//
//
//}


//char *my_strcpy(char *dest, const char*src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while ((*dest = *src))
//	{
//		dest++;
//		src++;
//	}
//	return ret;
//}


char *my_strcat(char *dest, const char *src)
{
	char *start = dest;
	while (*dest)
	{
		dest++;
	}
	while ((*dest = *src))
	{
		dest++;
		src++; 
	}
	return start;
}


int  main()
{
	char str1[100] = "abcdef";
	char str2[100] = "fdedfwer";
	printf("%s\n", my_strcat(str2, str1));
	system("pause");
	return 0;
}


//int  main()
//{
//	char *str1 = "abcdef";
//	char str2[10];
//	char str[] = { 'a', 'b', 'c', 'x' };
//	printf("%s\n", my_strcpy(str2, str1));
//	
//	system("pause");
//	return 0;
//}