//2021112030 황지민
#include <stdio.h>
int cut(char *s,int start,int end) {
	int i = 0;
	char a[30]=" ";
	for (start; start < end; start++) {
		a[i]= s[start];
		i++;
	}
	char *str= malloc(sizeof(char) * 20);
	strcpy(str, a);
	return str;

}
int main(void)
{
	int start, end;
	char string[100];
	printf("문자열 입력 : ");
	gets_s(string, 100);
	scanf("%d", &start);
	scanf("%d", &end); 
	printf("%s", cut(string, start, end));
	return 0;
}