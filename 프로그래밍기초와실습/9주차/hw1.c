#include <stdio.h>
#include <time.h>
#include <stdlib.h>




int get_dice(){
	int a = 1 + rand() % 6;
	static int count1=0;
	static int count2=0;
	static int count3=0;
	static int count4=0;
	static int count5=0;
	static int count6=0;
	static int coun=0;
	
	
	if (coun == 100) {
		printf("1 -> %d\n", count1);
		printf("2 -> %d\n", count2);
		printf("3 -> %d\n", count3);
		printf("4 -> %d\n", count4);
		printf("5 -> %d\n", count5);
		printf("6 -> %d\n", count6);
		return 0;
	}
	if (a == 1) {
		
		count1 += 1;
		coun += 1;
		get_dice();
	}
	else if (a == 2) {
		
		count2 += 1;
		coun += 1;
		get_dice();
	}
	else if (a == 3) {
		
		count3 += 1;
		coun += 1;
		get_dice();
	}
	else if (a == 4) {
		
		count4 += 1;
		coun += 1;
		get_dice();
	}
	else if (a == 5) {
		
		count5 += 1;
		coun += 1;
		get_dice();
	}
	else {
		
		count6 += 1;
		coun += 1;
		get_dice();
	}

}
int main(void) {
	srand((unsigned int)time(NULL));
	get_dice();
	return 0;
}