#include <cs50.h>
#include <stdio.h>

int main(void){
	
	int num = get_int("Enter any num: ");

	if(num % 2 == 0){
		printf("The num is even\n");
	}
	else{
		printf("The num is odd\n");
	}
}

