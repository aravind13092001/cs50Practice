#include <cs50.h>
#include <stdio.h>

int main(void){
	char agree = get_char("Do you agree? ");

	if(agree == 'y' || agree == 'Y'){
		printf("You agreed with our terms\n");
	}
	else if(agree  == 'n' || agree =='Y'){
		printf("You disagreed with our terms\n");
	}
}
