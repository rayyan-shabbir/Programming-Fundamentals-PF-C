#include <stdio.h>



int main() {
	int num, rem;
	int rev = 0;
	printf("Enter number:: \n");
	scanf("%d", &num);
	
	while(num != 0) {
		rem = num % 10;
		rev = rev*10 + rem;
		num = num/10;
	}
	printf("Number= %d \n", rev);
	return 0;
}