#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

// Global Variables
int column = 0;
int row = 0;

void print_hidden()
{
    printf(" ------------\n");
    printf(" |**********|\n");
    printf(" |**********|\n");
    printf(" |**********|\n");
    printf(" |**********|\n");
    printf(" |**********|\n");
    printf(" |**********|\n");
    printf(" |**********|\n");
    printf(" ------------\n");
}

void print_ACE()
{
    printf(" ------------\n");
    printf(" |   ****   |\n");
    printf(" |  *    *  |\n");
    printf(" |  *    *  |\n");
    printf(" |  ******  |\n");
    printf(" |  *    *  |\n");
    printf(" |  *    *  |\n");
    printf(" |  *    *  |\n");
    printf(" ------------\n");
}

void print_2()
{
    printf(" ------------\n");
    printf(" |  ******  |\n");
    printf(" |       *  |\n");
    printf(" |       *  |\n");
    printf(" |  ******  |\n");
    printf(" |  *       |\n");
    printf(" |  *       |\n");
    printf(" |  ******  |\n");
    printf(" ------------\n");
}

void print_3()
{
    printf(" ------------\n");
    printf(" |  ******  |\n");
    printf(" |       *  |\n");
    printf(" |       *  |\n");
    printf(" |  ******  |\n");
    printf(" |       *  |\n");
    printf(" |       *  |\n");
    printf(" |  ******  |\n");
    printf(" ------------\n");
}

void print_4()
{
    printf(" ------------\n");
    printf(" |  *    *  |\n");
    printf(" |  *    *  |\n");
    printf(" |  *    *  |\n");
    printf(" |  ******  |\n");
    printf(" |       *  |\n");
    printf(" |       *  |\n");
    printf(" |       *  |\n");
    printf(" ------------\n");
}

void print_5()
{
    printf(" ------------\n");
    printf(" |  ******  |\n");
    printf(" |  *       |\n");
    printf(" |  *       |\n");
    printf(" |  ******  |\n");
    printf(" |       *  |\n");
    printf(" |       *  |\n");
    printf(" |  ******  |\n");
    printf(" ------------\n");
}

void print_6()
{
    printf(" ------------\n");
    printf(" |  ******  |\n");
    printf(" |  *       |\n");
    printf(" |  *       |\n");
    printf(" |  ******  |\n");
    printf(" |  *    *  |\n");
    printf(" |  *    *  |\n");
    printf(" |  ******  |\n");
    printf(" ------------\n");
}

void print_7()
{
    printf(" ------------\n");
    printf(" |  ******  |\n");
    printf(" |       *  |\n");
    printf(" |       *  |\n");
    printf(" |       *  |\n");
    printf(" |       *  |\n");
    printf(" |       *  |\n");
    printf(" |       *  |\n");
    printf(" ------------\n");
}

void print_8()
{
    printf(" ------------\n");
    printf(" |  ******  |\n");
    printf(" |  *    *  |\n");
    printf(" |  *    *  |\n");
    printf(" |  ******  |\n");
    printf(" |  *    *  |\n");
    printf(" |  *    *  |\n");
    printf(" |  ******  |\n");
    printf(" ------------\n");
}

void print_9()
{
    printf(" ------------\n");
    printf(" |  ******  |\n");
    printf(" |  *    *  |\n");
    printf(" |  *    *  |\n");
    printf(" |  ******  |\n");
    printf(" |       *  |\n");
    printf(" |       *  |\n");
    printf(" |       *  |\n");
    printf(" ------------\n");
}

void print_10()
{
    printf(" ------------\n");
    printf(" | *  ***** |\n");
    printf(" | *  *   * |\n");
    printf(" | *  *   * |\n");
    printf(" | *  *   * |\n");
    printf(" | *  *   * |\n");
    printf(" | *  *   * |\n");
    printf(" | *  ***** |\n");
    printf(" ------------\n");
}

void print_JACK()
{
    printf(" ------------\n");
    printf(" | ******** |\n");
    printf(" |    **    |\n");
    printf(" |    **    |\n");
    printf(" |    **    |\n");
    printf(" |    **    |\n");
    printf(" | *  **    |\n");
    printf(" |  ***     |\n");
    printf(" ------------\n");
}

void print_QUEEN()
{
    printf(" ------------\n");
    printf(" | ******** |\n");
    printf(" | *      * |\n");
    printf(" | *      * |\n");
    printf(" | *      * |\n");
    printf(" | *   *  * |\n");
    printf(" | ******** |\n");
    printf(" |       *  |\n");
    printf(" ------------\n");
}

void print_KING()
{
    printf(" ------------\n");
    printf(" | *     *  |\n");
    printf(" | *   *    |\n");
    printf(" | * *      |\n");
    printf(" | *        |\n");
    printf(" | * *      |\n");
    printf(" | *   *    |\n");
    printf(" | *     *  |\n");
    printf(" ------------\n");
}

//FUNCTION: generate random card
int generate_card(unsigned int table [4][13])
{
    int result = -1;
    //generate random number
    while(result == -1)
    {
        srand(time(NULL));
        row = ( rand() % 4 );
        column = ( rand() % 13 );
        result = table [row][column];
        table[row][column] = -1;
    }
    return(result);
}

/*tThis function prints the appropriate card when instructed by the program.*/
void printCard(int col)
{
    if (col == 0) print_ACE();
    if (col == 1) print_2();
    if (col == 2) print_3();
    if (col == 3) print_4();
    if (col == 4) print_5();
    if (col == 5) print_6();
    if (col == 6) print_7();
    if (col == 7) print_8();
    if (col == 8) print_9();
    if (col == 9) print_10();
    if (col == 10) print_JACK();
    if (col == 11) print_QUEEN();
    if (col == 12) print_KING();
}

/*This function determines the outcome of the hand, where player result = 0 means a push, player result = 1 means a win, and player result = -1 means a loss*/
int blackJack(int playerCards, int dealerCards)
{
    int player_result = 0;

    if (playerCards == dealerCards)
    {
       player_result = 0;
    }

    else if ((playerCards <= 21 && playerCards > dealerCards) || (playerCards <= 21 && dealerCards > 21))
    {
        player_result = 1;
    }

    else if (playerCards > 21 || (dealerCards <= 21 && dealerCards > playerCards))
    {
        player_result = -1;
    }

    return(player_result);
}

/*This function prints out the dealers first card, so that it is visible to the player*/
void dealerShowCard(int firstDealerCard)
{
    //Dealer first card is an Ace
    if (firstDealerCard == 0) printf("==============\nDealer's upcard is an Ace\n");

    //Dealer first card is a Jack
    else if (firstDealerCard == 10) printf("==============\nDealer's upcard is a Jack\n");

    //Dealer first card is a Queen
    else if (firstDealerCard == 11) printf("==============\nDealer's upcard is a Queen\n");

    //Dealer first card is a king
    else if (firstDealerCard == 12) printf("==============\nDealer's upcard is a King\n");

    //Dealer first card is 2-10
    else printf("==============\nDealer's upcard is %i\n", firstDealerCard + 1);
}
/*This function prints the summary of the hand, detailing what the result of the hand was, and the amount of money the player has remaining*/
float summary(int player_result, float bank, float bet[])
{
    float bankAfter = 0.00;
    for(int i = 0; i <= 2; i++)
    {
        if ((int) bet[i] != 0)
        {
            //player has equal total card total to dealer total
            if(player_result == 0)
            {
                printf("Push!\n");
                bankAfter = bank;
                printf("Your bank balance is still $%.2f\n\n", bank);
            }

            //user total is higher than dealer total
            if(player_result == 1)
            {
                printf("You win!\n");
                bankAfter = bank + bet[i];
                printf("You won $%.2f\n", bet[i]);
                printf("Your new bank balance is $%.2f\n\n", bankAfter);
            }

            //user has blackjack
            if(player_result == 2)
            {
                printf("You have BLACKJACK!\n");
                bankAfter = bank + 1.5 * bet[i];
                printf("You won $%.2f\n", 1.5 * bet[i]);
                printf("Your new bank balance is $%.2f\n\n", bankAfter);
            }

            //user loses
            if(player_result == -1)
            {
                printf("You lose!\n");
                bankAfter = bank - bet[i];
                printf("You lost $%.2f\n", bet[i]);
                printf("Your new bank balance is $%.2f\n\n", bankAfter);
            }
        }
    }
    return(bankAfter);
}

int main(void)
{
    int hand = 0;
    float bank = 0.00;
    float automaticBet = 0;
    float bet[3] = {0, 0, 0};
    char yn[1];
    bool automatic = false;
    int presetHands = 0;
    bool automaticHands = false;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("Starting bank balance: $");
    scanf("%f", &bank);

    printf("Would you like to enable automatic bet? (y/n) This cannot be turned off.\n");
    scanf("%s", yn);

    if (strcmp(yn, "y") == 0)
    {
        automatic = true;
        printf("Enter your automatic bet value: $");
        scanf("%f", &automaticBet);
        while (automaticBet > bank || (int) automaticBet < 1)
        {
            if (automaticBet > bank)
            {
                printf("\nERROR! Your bet cannot be higher than your bank balance!\n");
                printf("Your bank balance is $%.2f\n", bank);
                printf("Enter a bet for this hand: $");
                scanf("%f", &automaticBet);
            }
            if ((int) automaticBet < 1)
            {
                printf("\nERROR! Your bet cannot be less than $1!\n");
                printf("Enter a bet for this hand: $");
                scanf("%f", &automaticBet);
            }
        }
    }
    else automatic = false;

    printf("Would you like to preset the # of hands played (y/n)? You can add to this value later.\n");
    scanf("%s", yn);

    if(strcmp(yn, "y") == 0)
    {
        automaticHands = true;
        printf("How many hands would you like to play?\n");
        scanf("%i", &presetHands);
    }
    else presetHands = 1;

    do{
    while (bank > 0)
    {
        unsigned int cards[4][13] = {
        {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10} ,   /*  initializers for row indexed by 0 */
        {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10} ,   /*  initializers for row indexed by 1 */
        {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10} ,   /*  initializers for row indexed by 2 */
        {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10}     /*  initializers for row indexed by 3 */
        };
        int dealerCards = 0;
        int playerCards = 0;
        int firstPlayerCard = 0;
        int secondPlayerCard = 0;
        int firstDealerCard = 0;
        int secondDealerCard = 0;
        signed int extra = 0;
        char choice[1] = {"a"};
        bool stay = false;
        bool playerAce = false;
        bool dealerAce = false;
        bool split = false;
        bool playerBlackJack = false;
        bool dealerBlackJack = false;
        bool error = false;
        float bankAfter = 0;

        //Variables exclusive to a split hand
        int hand1 = 0;
        int hand2 = 0;
        int hand1Result = 0;
        int hand2Result = 0;
        bool dd = false;
        bool dd1 = false;
        bool dd2 = false;


        // -2=BUST -1=LOST 0=PUSH  1=WIN
        int player_result = 0;

        //adds 1 to hand total to track hand value
        hand += 1;

        //takes away one from the presetHand value
        presetHands -= 1;

        if (automatic == true)
        {
            if (automaticBet > bank)
            {
                printf("Automatic bet is disabled for this hand. Your bet value is higher than your bank balance.\n");
                printf("Your bank balance is $%.2f\n", bank);
                printf("Enter a bet for this hand: $");
                scanf("%f", &bet[0]);
                while ((bet[0] > bank) || ((int)bet[0] < 1))
                {
                    if (bet[0] > bank)
                    {
                        printf("\nERROR! Your bet cannot be higher than your bank balance!\n");
                        printf("Your bank balance is $%.2f\n", bank);
                        printf("Enter a bet for this hand: $");
                        scanf("%f", &bet[0]);
                    }
                    if ((int) bet[0] < 1)
                    {
                        printf("\nERROR! Your bet cannot be less than $1!\n");
                        printf("Enter a bet for this hand: $");
                        scanf("%f", &bet[0]);
                    }
                }
                printf("\n\n   Hand #%i \n==============\n", hand);

            }
            else
            {
                bet[0] = automaticBet;
                printf("\n\n   Hand #%i \n==============\n", hand);
            }
        }
        if (automatic == false)
        {
            printf("Your bank balance is $%.2f\n", bank);
            printf("Place bet #%i: $", hand);
            scanf("%f", &bet[0]);

            while (bet[0] > bank || (int) bet[0] <= 0)
            {
                if (bet[0] > bank)
                {
                    printf("\nERROR! Your bet cannot be higher than your bank balance!\n");
                    printf("Your bank balance is $%.2f\n", bank);
                    printf("Place bet #%i: $", hand);
                    scanf("%f", &bet[0]);
                }
                if ((int) bet[0] < 1)
                {
                    printf("\nERROR! Your bet cannot be less than $1!\n");
                    printf("Place bet #%i: $", hand);
                    scanf("%f", &bet[0]);
                }
            }
            printf("\n\n  Hand #%i \n==============\n", hand);
        }
        sleep(1);
        //------------------------
        //print player's first two cards, generates dealer's first card
        //------------------------
        printf("\n  Your Cards\n==============\n");
        sleep(1);

        //generates and prints player's first card
        playerCards += generate_card(cards);
        printCard(column);
        firstPlayerCard = column;
        sleep(1);

        if(column == 0) playerAce = true;

        //generates, but does not print, the dealer's first card
        dealerCards += generate_card(cards);
        firstDealerCard = column;
        if(column == 0) dealerAce = true;

        //generates and prints player's second card
        playerCards += generate_card(cards);
        printCard(column);
        secondPlayerCard = column;

        if(column == 0) playerAce = true;

        // only if first 2 cards are Aces
        if(playerCards > 21)
        {
            playerCards -= 10;
        }

        //if player has natural blackjack
        if(playerCards == 21)
        {
            playerBlackJack = true;
            stay = true;
        }
        printf("==============\n");
        sleep(1);
        //--------------------------------------------------------
        //print dealer's first two cards but DO NOT show the second card
        //--------------------------------------------------------
        printf("\n\nDealer's Cards \n==============\n");
        sleep(1);

        //if player hit natural blackjack
        if(playerBlackJack == true)
        {
            //Uses the previously generated first dealer card and prints it here
            printCard(firstDealerCard);
            sleep(1);

            //Generates and prints dealer's second card
            dealerCards += generate_card(cards);
            secondDealerCard = column;
            printCard(secondDealerCard);
            sleep(1);
        }
        //if player did not hit natural blackjack
        else if(playerBlackJack == false)
        {
            //Uses the previously generated first dealer card and prints it here
            printCard(firstDealerCard);
            sleep(1);

            //generates and prints hidden version of dealer's second card
            dealerCards += generate_card(cards);
            print_hidden();
        }
        //if dealer's second card is an ace, this will catch it
        if(column == 0) dealerAce = true;
        // remember dealer's hidden cards
        secondDealerCard = column;

        //checks if dealer's first two cards add to 21
        if (dealerCards == 21) dealerBlackJack = true;

        //------------------------
        //prompts split/double/hit/stand
        //------------------------
        do{
            if (firstPlayerCard == secondPlayerCard)
            {
                dealerShowCard(firstDealerCard);
                if (firstPlayerCard == 0) printf("You have two Aces\n");
                if (firstPlayerCard < 10 && firstPlayerCard > 0) printf("You have two %i's\n", firstPlayerCard + 1);
                if (firstPlayerCard == 10) printf("You have two Jacks\n");
                if (firstPlayerCard == 11) printf("You have two Queens\n");
                if (firstPlayerCard == 12) printf("You have two Kings\n");
                printf("split (s) or double (d) or hit (h) or stand (any other key) \n==============\n");
                scanf("%s", choice);
            }
            else if (playerBlackJack == false)
            {
                dealerShowCard(firstDealerCard);
                printf("Your card total: %i", playerCards);
                if (playerAce == true) printf(" (soft)\n");
                else printf("\n");
                printf("double (d) or hit (h) or stand (any other key) \n==============\n");
                scanf("%s", choice);
            }
                if ((strcmp(choice, "s") == 0) && (firstPlayerCard == secondPlayerCard))
                {
                    if (bet[0] * 2 > bank)
                    {
                        printf("\nERROR! Insufficient funds.\n\n");
                        sleep(1);
                        stay = false;
                        error = true;
                    }
                    else
                    {
                        error = false;
                        split = true;

                        bet[1] = bet[0];
                        bet[2] = bet[0];
                        if (playerAce == false)
                        {
                            hand1 = playerCards/2;
                            hand2 = playerCards/2;
                        }
                        if (playerAce == true)
                        {
                            hand1 = 11;
                            hand2 = 11;
                        }
                        //If Aces are being split
                        if (playerAce == true)
                        {
                            stay = true;

                            //1st Hand
                            printf("Your 1st Hand \n==============\n");
                            printCard(firstPlayerCard);
                            sleep(1);
                            hand1 += generate_card(cards);
                            printCard(column);
                            sleep(1);

                            if(hand1 == 22) hand1 = 12;

                            printf("Your final card total for your 1st Hand: %i\n==============\n", hand1);
                            sleep(1);

                            //2nd Hand
                            printf("Your 2nd Hand \n==============\n");
                            printCard(secondPlayerCard);
                            sleep(1);
                            hand2 += generate_card(cards);
                            printCard(column);
                            sleep(1);

                            if(hand2 == 22) hand2 = 12;

                            printf("Your final card total for your 2nd Hand: %i\n==============\n", hand2);
                            sleep(1);
                        }
                        //Anything besides Aces is being split
                        else
                        {
                            for (int i = 1; i <= 2; i++)
                            {
                                if (i == 1)
                                {
                                    printf("\nYour 1st Hand \n==============\n");
                                    printCard(firstPlayerCard);
                                    sleep(1);
                                    hand1 += generate_card(cards);
                                    printCard(column);
                                    sleep(1);

                                    if(column == 0) playerAce = true;

                                    if(hand1 == 21)
                                    {
                                        stay = true;
                                        printf("Your final 1st Hand total: %i\n==============\n", hand1);
                                    }
                                    else stay = false;
                                }
                                else if (i == 2)
                                {
                                    printf("\nYour 2nd Hand \n==============\n");
                                    printCard(secondPlayerCard);
                                    sleep(1);
                                    hand2 += generate_card(cards);
                                    printCard(column);
                                    sleep(1);

                                    if(column == 0) playerAce = true;

                                    if(hand2 == 21)
                                    {
                                        stay = true;
                                        printf("Your final 2nd Hand total: %i\n==============\n", hand2);
                                    }
                                    else stay = false;
                                }
                                if (stay == false)
                                {
                                    do
                                    {
                                        dealerShowCard(firstDealerCard);
                                        if (i == 1) printf("Your 1st Hand Value: %i\n", hand1);
                                        if (i == 2) printf("Your 2nd Hand Value: %i\n", hand2);
                                        printf("double down (d) or hit (h) or stand (any other key) \n==============\n");
                                        scanf("%s", choice);

                                        //USER CHOOSES TO DOUBLE DOWN

                                        if (strcmp(choice, "d") == 0)
                                        {
                                            if (i == 1)
                                            {
                                                //HAND 1---INSUFFICIENT FUNDS TO DOUBLE DOWN
                                                if (bet[1] * 2 + bet[2] > bank)
                                                {
                                                    printf("\nERROR! Insufficient funds.\n\n");
                                                    sleep(1);
                                                    dd1 = false;
                                                    error = true;
                                                }
                                                //HAND 1---DOUBLE DOWN
                                                else
                                                {
                                                    error = false;
                                                    dd1 = true;

                                                    bet[1] = bet[1] * 2;
                                                    printf("\nYour new bet for your 1st Hand is $%.2f \n==============\n", bet[1]);
                                                    sleep(1);
                                                    hand1 += generate_card(cards);
                                                    printCard(column);
                                                    sleep(1);

                                                    if(column == 0) playerAce = true;

                                                    if (playerAce == true)
                                                    {
                                                        if(playerCards > 21)
                                                        {
                                                            playerCards -= 10;
                                                            playerAce = false;
                                                            printf("Your final 1st Hand total: %i\n==============\n", hand1);
                                                            sleep(1);
                                                        }
                                                        else
                                                        {
                                                            printf("Your final 1st Hand total: %i\n==============\n", hand1);
                                                            sleep(1);
                                                        }
                                                    }
                                                    else
                                                    {
                                                        printf("Your final 1st Hand total: %i\n==============\n", hand1);
                                                        sleep(1);
                                                    }
                                                }
                                            }

                                            if (i == 2)
                                            {
                                                //HAND 2---INSUFFICIENT FUNDS
                                                if(bet[1] + bet[2] * 2 > bank)
                                                {
                                                    printf("\nERROR! Insufficient funds.\n\n");
                                                    sleep(1);
                                                    dd2 = false;
                                                    error = true;
                                                }
                                                //HAND 2---DOUBLE DOWN
                                                else
                                                {
                                                    error = false;
                                                    dd2 = true;

                                                    bet[2] = bet[2] * 2;
                                                    printf("\nYour new bet for your 2nd Hand is $%.2f \n==============\n", bet[2]);
                                                    sleep(1);
                                                    hand2 += generate_card(cards);
                                                    printCard(column);
                                                    sleep(1);

                                                    if(column == 0) playerAce = true;

                                                    if (playerAce == true)
                                                    {
                                                        if(playerCards > 21)
                                                        {
                                                            playerCards -= 10;
                                                            playerAce = false;
                                                            printf("Your final 2nd Hand total: %i\n==============\n", hand2);
                                                            sleep(1);
                                                        }
                                                        else
                                                        {
                                                            printf("Your final 2nd Hand total: %i\n==============\n", hand2);
                                                            sleep(1);
                                                        }
                                                    }
                                                    else
                                                    {
                                                        printf("Your final 2nd Hand total: %i\n==============\n", hand2);
                                                        sleep(1);
                                                    }
                                                }
                                            }
                                        }
                                        //first hand, no dd
                                        if ((i == 1) && (strcmp(choice, "h") == 0))
                                        {
                                            hand1 += generate_card(cards);
                                            printCard(column);
                                            sleep(1);

                                            if(column == 0) playerAce = true;

                                            // There is NOT an ACE
                                            if (playerAce == false)
                                            {
                                                if(hand1 >= 21) stay = true;
                                                else stay = false;
                                            }
                                            else if (playerAce == true)
                                            // There is an ACE
                                            {
                                                if(hand1 > 21)
                                                {
                                                    hand1 -= 10;
                                                    playerAce = false;
                                                    stay = false;
                                                }
                                                else
                                                {
                                                    if(hand1 == 21) stay = true;
                                                    else stay = false;
                                                }
                                            }
                                            while (stay == false)
                                            {
                                                dealerShowCard(firstDealerCard);
                                                printf("Your 1st Hand Total: %i", hand1);
                                                if (playerAce == true) printf(" (soft)\n");
                                                else printf("\n");
                                                printf("hit (h) or stand (any key) \n==============\n");
                                                scanf("%s", choice);

                                                if(strcmp(choice, "h") == 0)
                                                {
                                                    hand1 += generate_card(cards);
                                                    printCard(column);
                                                    sleep(1);

                                                    if(column == 0) playerAce = true;

                                                    // There is NOT an ACE
                                                    if (playerAce == false)
                                                    {
                                                        if(hand1 >= 21)
                                                        {
                                                            stay = true;
                                                        }
                                                        else
                                                        {
                                                            stay = false;
                                                        }
                                                    }
                                                    else if (playerAce == true)
                                                    // There is an ACE
                                                    {
                                                        if(hand1 > 21)
                                                        {
                                                            hand1 -= 10;
                                                            playerAce = false;
                                                            stay = false;
                                                        }
                                                        else
                                                        {
                                                            if(hand1 == 21)
                                                            {
                                                                stay = true;
                                                            }
                                                            else
                                                            {
                                                                stay = false;
                                                            }
                                                        }
                                                    }
                                                }

                                                else if(strcmp(choice, "h") != 0)
                                                {
                                                    stay = true;
                                                }
                                            }
                                            printf("Your final 1st Hand total: %i\n==============\n", hand1);
                                        //Second hand no double down -- hit or stay
                                        }
                                        else if ((i == 2) && (strcmp(choice, "h") == 0))
                                        {
                                            hand2 += generate_card(cards);
                                            printCard(column);
                                            sleep(1);

                                            if(column == 0) playerAce = true;
                                            // There is NOT an ACE
                                            if (playerAce == false)
                                            {
                                                if(hand2 >= 21)
                                                {
                                                    stay = true;
                                                }
                                                else
                                                {
                                                    stay = false;
                                                }
                                            }
                                            else
                                            // There is an ACE
                                            {
                                                if(hand2 > 21)
                                                {
                                                    hand2 -= 10;
                                                    playerAce = false;
                                                    stay = false;
                                                }
                                                else
                                                {
                                                    if(hand2 == 21)
                                                    {
                                                        stay = true;
                                                    }
                                                    else
                                                    {
                                                        stay = false;
                                                    }
                                                }
                                            }
                                            while(stay == false)
                                            {
                                                dealerShowCard(firstDealerCard);
                                                printf("Your 2nd Hand Total: %i", hand2);
                                                if (playerAce == true) printf(" (soft)\n");
                                                else printf("\n");
                                                printf("hit (h) or stand (any key) \n==============\n");
                                                scanf("%s", choice);

                                                if(strcmp(choice, "h") == 0)
                                                {
                                                    hand2 += generate_card(cards);
                                                    printCard(column);
                                                    sleep(1);

                                                    if(column == 0) playerAce = true;
                                                    // There is NOT an ACE
                                                    if (playerAce == false)
                                                    {
                                                        if(hand2 >= 21)
                                                        {
                                                            stay = true;
                                                        }
                                                        else
                                                        {
                                                            stay = false;
                                                        }
                                                    }
                                                    else
                                                    // There is an ACE
                                                    {
                                                        if(hand2 > 21)
                                                        {
                                                            hand2 -= 10;
                                                            playerAce = false;
                                                            stay = false;
                                                        }
                                                        else
                                                        {
                                                            if(hand2 == 21)
                                                            {
                                                                stay = true;
                                                            }
                                                            else
                                                            {
                                                                stay = false;
                                                            }
                                                        }
                                                    }
                                                }

                                                else if(strcmp(choice, "h") != 0)
                                                {
                                                    stay = true;
                                                }
                                            }
                                            printf("Your final 2nd Hand total: %i\n==============\n", hand2);
                                        }
                                    }while (error == true);
                                }
                            }
                        }
                    }
                }
                if ((strcmp(choice, "d") == 0) && split == false)
                {
                    if (bet[0] * 2 > bank)
                    {
                        printf("\nERROR! Insufficient funds.\n\n");
                        sleep(1);
                        stay = false;
                        error = true;
                    }
                    else
                    {
                        error = false;
                        dd = true;
                        bet[0] = bet[0] * 2;
                        printf("\nYour new bet is $%.2f \n==============\n", bet[0]);
                        sleep(1);
                        playerCards += generate_card(cards);
                        printCard(column);
                        sleep(1);

                        if(column == 0) playerAce = true;

                        if (playerAce == true)
                        {
                            if(playerCards > 21)
                            {
                                playerCards -= 10;
                                playerAce = false;
                                stay = true;
                                printf("Your final card total: %i\n==============\n", playerCards);
                                sleep(1);
                            }
                            else
                            {
                                printf("Your final card total: %i\n==============\n", playerCards);
                                sleep(1);
                                stay = true;
                            }
                        }
                        else
                        {
                            printf("Your final card total: %i\n==============\n", playerCards);
                            sleep(1);
                            stay = true;
                        }
                    }
                }
                if ((strcmp(choice, "h") == 0) && split == false)
                {
                    error = false;
                    playerCards += generate_card(cards);
                    printCard(column);
                    sleep(1);

                    if(column == 0) playerAce = true;

                    // There is NOT an ACE
                    if (playerAce == false)
                    {
                        if(playerCards >= 21) stay = true;

                        else stay = false;
                    }
                    else // There is an ACE
                    {
                        if(playerCards > 21)
                        {
                            playerCards -= 10;
                            playerAce = false;
                            stay = false;
                        }
                        else
                        {
                            if(playerCards == 21) stay = true;

                            else stay = false;
                        }
                    }
                    while(stay == false)
                    {
                        dealerShowCard(firstDealerCard);
                        printf("Your card total: %i", playerCards);
                        if (playerAce == true) printf(" (soft)\n");
                        else printf("\n");
                        printf("hit (h) or stand (any key) \n==============\n");
                        scanf("%s", choice);

                        if(strcmp(choice, "h") == 0)
                        {
                            playerCards += generate_card(cards);
                            printCard(column);
                            sleep(1);

                            if(column == 0) playerAce = true;

                            // There is NOT an ACE
                            if (playerAce == false)
                            {
                                if(playerCards >= 21) stay = true;

                                else stay = false;
                            }
                            else // There is an ACE
                            {
                                if(playerCards > 21)
                                {
                                    playerCards -= 10;
                                    playerAce = false;
                                    stay = false;
                                }
                                else
                                {
                                    if(playerCards == 21) stay = true;

                                    else stay = false;
                                }
                            }
                        }
                        else
                        {
                            stay = true;
                            error = false;
                        }

                    }
                }
        }while (error == true);

        if ( dd == false && split == false && playerBlackJack == false)
        {
            printf("\n===================\nYour final card total: %i\n===================\n", playerCards);
            sleep(1);
        }
        //------------------------
        //Dealer hits
        //------------------------

        if(playerBlackJack == true)
        {
            //Only if first two cards are Aces
            if(dealerCards > 21) dealerCards -= 10;

            if (dealerBlackJack == true) player_result = 0;

            else if (dealerBlackJack == false) player_result = 2;
        }
        else if ((playerCards > 21) || (hand1 > 21 && hand2 > 21))
        {
             player_result = -1;
        }
        else
        {
            // remember dealer's hidden cards and print them both now
            printf("\nDealer's Cards \n==============\n");

            printCard(firstDealerCard);
            sleep(1);
            printCard(secondDealerCard);
            sleep(1);
            // only if first 2 cards are Aces
            if(dealerCards > 21) dealerCards -= 10;
            //dealer must hit until 17
            if (dealerCards < 17) stay = false;
            if (dealerCards > 16) stay = true;

            //dealer hits until <17 or >=21
            while(stay == false)
            {
                dealerCards += generate_card(cards);
                printCard(column);
                sleep(1);
                if(column == 0) dealerAce = true;

                // it is NOT an ACE
                if (dealerAce == false)
                {
                    if(dealerCards > 16) stay = true;
                    if(dealerCards < 17) stay = false;
                }
                else
                // it is an ACE
                {
                    if(dealerCards > 21)
                    {
                        dealerCards -= 10;
                        dealerAce = false;

                        if (dealerCards < 17) stay = false;
                        else stay = true;
                    }

                    else
                    {
                        if(dealerCards < 17) stay = false;

                        else stay = true;
                    }
                }
            }
            printf("===============\n");
        }

        // -----------------
        // Show Game Summary
        // -----------------
        //If player hit Natural Blackjack
        if (playerBlackJack == true)
        {
            printf("\n******************************\n");
            printf("*           SUMMARY          *\n");
            printf("******************************\n\n");\

            printf("Your total was: %i\n", playerCards);
            printf("Dealer's total was: %i\n", dealerCards);

            bet[1] = 0;
            bet[2] = 0;

            bankAfter = summary(player_result, bank, bet);
            bank = bankAfter;
        }
        //If 'Split' route was taken
        else if (split == true)
        {
            printf("\n******************************\n");
            printf("*           SUMMARY          *\n");
            printf("******************************\n\n");\

            printf("Your Hand 1 total was: %i\n", hand1);
            printf("Dealer's total was: %i\n", dealerCards);

            bet[0] = 0;

            int bet2Storage = bet[2];
            bet[2] = 0;

            player_result = blackJack(hand1, dealerCards);
            hand1Result = player_result;
            bankAfter = summary(hand1Result, bank, bet);
            bank = bankAfter;

            printf("Your Hand 2 total was: %i\n", hand2);
            printf("Dealer's total was: %i\n", dealerCards);

            bet[1] = 0;
            bet[2] = bet2Storage;

            player_result = blackJack(hand2, dealerCards);
            hand2Result = player_result;
            bankAfter = summary(hand2Result, bank, bet);
            bank = bankAfter;
        }
        //If 'Split' route was not taken
        else if (split == false)
        {
            printf("\n******************************\n");
            printf("*           SUMMARY          *\n");
            printf("******************************\n\n");

            printf("Your total was: %i\n", playerCards);
            printf("Dealer's total was: %i\n", dealerCards);


            bet[1] = 0;
            bet[2] = 0;

            player_result = blackJack(playerCards, dealerCards);
            bankAfter = summary(player_result, bank, bet);
            bank = bankAfter;
        }
        //player loses all bank funds
        if (bank == 0)
        {
            sleep(3);
            printf("\n******************************\n");
            printf("*          GAME OVER         *\n");
            printf("******************************\n\n");
            printf("How do you lose a game with 4 inputs...\n\n");
            sleep(3);
            return 0;
        }
        if (presetHands == 0)
        {
            //asks if more hands should be added to already existing preset total when depleted
            if (automaticHands == true)
            {
                printf("Your preset # of hands has been completed. How many hands would you like to add? (0 if none)\n");
                scanf("%i", &presetHands);

                if(presetHands == 0) printf("\nWhat a shame...Hope to see you again soon!\n");
            }
            //option to quit
            else if (automaticHands == false)
            {
                printf("Would you like to continue playing? (y/n)\n");
                scanf("%s", yn);

                //if user no longer wants to play
                if ( strcmp(yn, "n") == 0)
                {
                    printf("\nWhat a shame...Hope to see you again soon!\n");
                    sleep(3);
                    return 0;
                }
                //if user wants to continue playing
                else
                {
                    presetHands = 1;
                    printf("\n");
                }
            }
        }
        if(automaticHands == true) sleep(5);
    }
    }while(presetHands > 0);
}



