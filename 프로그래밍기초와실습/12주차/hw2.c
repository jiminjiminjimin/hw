#include <stdio.h>
#include <conio.h>
void set_proverb(char** q, int n)
{
	static char* array[10] = {
		"A bad shearer never had a good sickle.",
		"A bad workman (always) blames his tools. ",
		"A bad workman quarrels with his tools.",
		"A bad thing never dies.",
		"A bad workman finds fault with his tools.",
		"A bad workman always blames his tools.",
		"A bargain is a bargain.",
		"A barking dog never bites.",
		"A barking dog was never a good hunter."
	};
	*q = array[n - 1];
}

int main(void) {
	char* proverb;
	int n;
	printf("몇번째 속담을 선택하시겠습니까? : ");
	scanf("%d", & n);
	set_proverb(&proverb, n);
	printf("selected proverb = %s", proverb);

	return 0;
	
}