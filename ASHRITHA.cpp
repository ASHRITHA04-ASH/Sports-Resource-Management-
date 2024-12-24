#include <stdio.h>
#include <string.h>

char day[20], game[20];
int teams, balls, daychoice, gamechoice;

void welcome() {
    printf("\n WELCOME TO SPORTS RESOURCE MANAGEMENT");
    printf("\n**");
    printf("\n press any key to continue");
    getchar();
}

void input() {
    printf("\n*");
    printf("\nSelect a day:\n");
    printf("1. Monday\n");
    printf("2. Tuesday\n");
    printf("3. Wednesday\n");
    printf("4. Thursday\n");
    printf("5. Friday\n");
    printf("6. Saturday\n");
    printf("7. Sunday\n");
    printf("Enter your choice (1-7): ");
    scanf("%d", &daychoice);
    printf("\n**");
    printf("\n Select a game:");
    printf("\n**");
    printf("\n 1. Volleyball");
    printf("\n 2. Throwball");
    printf("\n 3. Basketball");
    printf("\n 4. Football");
    printf("\n 5. Handball");
    printf("\n **********************");
    printf(" \n Enter your choice (1-5): ");
    scanf("%d", &gamechoice);
    printf("\n**");
    printf("\n Enter the number of teams: ");
    scanf("%d", &teams);
    printf("\n*");
    if (teams == 1 || teams == 2) {
        balls = 1;
    } else if (teams <= 4) {
        balls = 2;
    } else {
        balls = 3;
    }
}

void calculations() {
    printf("\n*");
    switch (daychoice) {
        case 1: snprintf(day, sizeof(day), "Monday"); break;
        case 2: snprintf(day, sizeof(day), "Tuesday"); break;
        case 3: snprintf(day, sizeof(day), "Wednesday"); break;
        case 4: snprintf(day, sizeof(day), "Thursday"); break;
        case 5: snprintf(day, sizeof(day), "Friday"); break;
        case 6: snprintf(day, sizeof(day), "Saturday"); break;
        case 7: snprintf(day, sizeof(day), "Sunday"); break;
        default: printf("Invalid choice\n");
    }
    switch (gamechoice) {
        case 1: snprintf(game, sizeof(game), "Volleyball"); break;
        case 2: snprintf(game, sizeof(game), "Throwball"); break;
        case 3: snprintf(game, sizeof(game), "Basketball"); break;
        case 4: snprintf(game, sizeof(game), "Football"); break;
        case 5: snprintf(game, sizeof(game), "Handball"); break;
        default: printf("Invalid choice\n");
    }
}

void output() {
    
    printf("\nYou have selected:\n");
    printf("Day: %s\n", day);
    printf("Game: %s\n", game);
    printf("Number of teams: %d\n", teams);
    printf("Number of balls: %d\n", balls);
}

int main() {
    welcome();
    input();
    calculations();
    output();
    return 0;
}
