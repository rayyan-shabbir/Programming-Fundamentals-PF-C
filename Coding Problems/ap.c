#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int roll;
	char att;
	int c[558];
	int num;
	printf("\t\t***PLEASE MARK ATTENDENCE***");
	printf("\nNOTE::(enter 'p' for present and 'a' for absent)");
	printf("\nROLL NO::\t\t\t");
	printf("ATTENDENCE\t\t\t");

	for(int i=500; i<558; i++) {
		
		printf("\n\nBITF20M%d \t\t\t   ", i+1);
		for(int j=500; j<558; j++) {
			att = getch();
			printf("%c", att);
			//scanf("%c", &att);
			c[i] = att;
			break;
		}
		if(c[i] == 'q') {
			break;
		}
	} 
	printf("\nEnter '1' to see ROLL NO.'s of present students or Enter '0' to see ROLL NO. of absent students:: ");
	scanf("\n%d", &num);
	for(int i=500; i<558; i++) {
		if(c[i] == 'p' && num == 1) {
			printf("\n\nBITF20M5%d \t\t\t   ", i+1);
			printf("PRESENT");
		}else if(c[i] == 'a'&& num == 1) {
			printf("\n\nBITF20M%d \t\t\t   ", i+1);
			printf("ABSENT");
		}
	} 
	for(int i=500; i<558; i++) {
		if(c[i] == 'a' && num == 0) {
			printf("\n\nBITF20M%d \t\t\t   ", i+1);
			printf("ABSENT");
		}
	}
	printf("\n\t\t\t***THANK YOU***\t\t\t");
	return 0;
}