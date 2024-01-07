#include <stdio.h>
#include <stdlib.h>


typedef enum {
    STATE_1,
    STATE_2,
    STATE_3,
    STATE_4,
} State;

State nextState(State current) {
    switch (current) {
        case STATE_1:
            return STATE_2;
        case STATE_2:
            return STATE_3;
        case STATE_3:
            return STATE_4;
        case STATE_4:
            return STATE_1;
        default:
            return current;
    }
}

int main() 
{
    int currentState = STATE_1;
    char userInput;

    printf("Initial State: STATE_1\n");

    do
	 {
        printf("Enter 'a' to transition to the next state, or 'b' to quit: ");
        scanf(" %c", &userInput);

        if (userInput == 'a') {
            currentState = nextState(currentState);
            printf("Transitioned to State %d\n", currentState + 1);
        } else if (userInput != 'b') {
            printf("Invalid input. Please enter 'a' or 'b'.\n");
        }

    } 
	while (userInput != 'b');

    printf("Exiting program.\n");

    return 1;
}

