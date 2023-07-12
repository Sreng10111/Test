#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <ctype.h>

void welcomescreen(void);
void exitscreen(void);
void sreencleaner(void);
void userInput(int);
void tryAgain(int);

void main() {

    welcomescreen();
}

void welcomescreen() {

    int choice;
label1: 
    sreencleaner();
    printf("------------------------------------------------\n");
    printf(" >>> WELCOME TO BUS RESERVASION SERVICE <<< \n");
    printf("------------------------------------------------\n\n");

    printf("1>> Book A Ticket");
    printf("2>> View Booking");
    printf("3>> Exit");
    printf("---->>> ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        userInput(1);
        break;
    case 2: 
        userInput(2);
        break;
    case 3:
        exitscreen();
        break;
    default:
        printf("\nError: the number must be between 1 to 3.\n");
        printf("Press any key to continue... \n");
        getch();
        goto label1;
        break;
    }
}

void screencleaner() {

    system("cls");
    fflush(stdin);
}

void exitscreen() {

    screencleaner();
    printf("-----------------------------------------\n");
    printf(" >>> THANK YOU FOR USING OUR SERVICE <<< \n");
    printf("-----------------------------------------\n");
    exit(0);

}

void userInput(int choice) {

    screencleaner();
    if (choice == 1) {

        int choose;

        printf("========================================================================================================\n");
        printf("  BUS.NO \t\tNAME\t\t\t   DESTINATIONS\t\t\tCHARGES\t\tTIME\n");
        printf("--------------------------------------------------------------------------------------------------------\n");
        printf("   01    \t\tBus A\t\t\tPhnom Penh To kampong cham\t  7.7$\t\t7:00am\n");
        printf("   02    \t\tBus B\t\t\tPhnom Penh To Kom Pot     \t  7.7$\t\t8:30am\n");
        printf("   03    \t\tBus C\t\t\tPhnom Penh To kampong Soam\t  10$ \t\t12:00pm\n");
        printf("   04    \t\tBus D\t\t\tPhnom Penh To Seimreab    \t  15.5$\t\t3:30am\n");
        printf("   05    \t\tBus E\t\t\tPhnom Penh To Beijing     \t  7.7$\t\t7:00pm\n");
        printf("   06    \t\tBus F\t\t\tPhnom Penh To Vai Sex     \t  20$ \t\t11:00pm\n");
        printf("========================================================================================================\n\n");

        printf("Choose The Bus (BUS NUMBER) :> ");
        scanf("%i", choose);

        if (choose == 01 || choose == 1) {

            int ch;
            screencleaner();
            printf(" >>> PLEASE SELECE THE AVAILABLE SEAT <<< \n");
            printf(" 01. EMPTY\t\t02. EMPTY\t\t03. EMPTY\n");
            printf(" 04. EMPTY\t\t05. EMPTY\t\t06. EMPTY\n");
            printf(" 07. EMPTY\t\t08. EMPTY\t\t09. EMPTY\n");
            printf(" 10. EMPTY\t\t11. EMPTY\t\t12. EMPTY\n");
            printf(" 13. EMPTY\t\t14. EMPTY\t\t15. EMPTY\n");
            printf(" 16. EMPTY\t\t17. EMPTY\t\t18. EMPTY\n");

            printf("Choose your seat :> ");
            scanf("%i", ch);

            if (ch > 1 || ch < 18) {

                char name[100];
                printf("Enter your name :> ");
                gets(name);
                screencleaner();
                
            }
        }
    }
}