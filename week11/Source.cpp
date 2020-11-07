#include<stdio.h>

void getStr(char*);
int never(char*);

int main()
{
	char str[1000];
	char* pStr = str;
	getStr(pStr);
	
	printf("%d", never(pStr));
	

	return 0;
}

void getStr(char *pStr)
{
	scanf_s("%[^\n]s", pStr, 1000);
}

int never(char *pStr)
{
	int i=0, n=0;
	while ( *(pStr + i) != '\0')
	{
		if (*(pStr+i) >= 'A' && *(pStr+i) <= 'Z')
			*(pStr + i) = *(pStr + i) - 'A' + 'a';
		if ( *(pStr+i) == 'n' && *(pStr + i + 1) == 'e' && *(pStr + i + 2) == 'v' && *(pStr + i + 3) == 'e' && *(pStr + i + 4) == 'r')
			n++;
		
		i++;
	}
	return n;
}