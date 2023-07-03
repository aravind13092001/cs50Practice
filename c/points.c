#include <cs50.h>
#include <stdio.h>

int main(void){
	
	const int MINE = 2;

	int points = get_int("Enter your points: ");

	if(points > MINE){
		printf("You got more points than me\n");
	}
	else if(points < MINE){
		printf("You got less points than me\n");
	}
	else {
		printf("We got same points\n");
	}
}


