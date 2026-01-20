#include <stdio.h> // Necessary for printf()

// TODO Other includes
#include <time.h>
#include <stdlib.h>

int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	srand(time(NULL)); // Seeding
	int myrand = rand() % 11; //Generates the rand num [0-10]

	if(myrand == 10){ // If myrand is 10
		printf("Larn is the best roguelike.\n");
	}
	else if(myrand >= 5 && myrand <= 9){  // If 5<=myrand<=9
		printf("FRODO LIVES.\n");
	}
	else{ // The rest of the time when 0<=myrand<=4
		printf("Eat more beef, kick less cats.\n");
	}

	printf("The random number was: %d\n", myrand); // Prints myrand
}
