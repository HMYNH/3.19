#include<stdio.h>
//void print(int y)
//{
//	if (y > 9)
//	{
//		print(y / 10);
//	}
//	printf("%d ", y % 10);
//}
//int main()
//{
//	unsigned int num = 0; 
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
int HH(char* n)
{
	if (*n != '\0')
	{
		return 1 + HH(n+1);
	}
	else
	{
		return 0;
	}
}

//	int i = 0;
//	while (*n  !='\0')
//	{
//		i++;
//		n++;
//	}
//	return i;
//}
int main()
{
	char arr[] = { "haha" };
	int y = HH(arr);
	printf("%d", y);
	return 0;
}