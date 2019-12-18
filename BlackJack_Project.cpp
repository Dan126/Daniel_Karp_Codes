/*  This C++ program allows a user to play the Casino game BlackJack.
A user is prompted to start, and then dealt two cards.  They are then
given the choice to hit or stay.  The user plays against a dealer, and
the hands are compared and winner is determined.  The users statistics
are calculated and displayed at the end of the game.
** Created by: Daniel Karp
   Created: April-May 2017                                         */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   //Initialization section for cards, suits, values.
   int card1;
   int card1Suit;
   int card2;
   int card2Suit;
   int card3;
   int card3Suit;
   int card1Val;
   int card2Val;
   int card3Val;
   int answer;
   int cardTotal;
   int card4;
   int card4Suit;
   int card4Val;
   int card5;
   int card5Suit;
   int card5Val;
   char continuePlaying = 'y';
   int handsPlayed = 0;
   int handsWon = 0;
   int handsLost = 0;
   int handsTied = 0;
   double winPct = 0.0;

   //User is welcomed to the game, and prompted to start.
   cout << "Welcome to Blackjack! \n" << endl;
   cout << "Are you ready to play? (Y or N): ";
   cin >> continuePlaying;

   //While statement starts and stops the game, based on a 'Y' response.
   while (toupper(continuePlaying) == 'Y')

   //Do-while executes so long as the user decides to continue the game.
   do {

   //The users first cards are generated
   cout << "Your first card is: ";
   unsigned seed = time(0);
   srand(seed);
   //Card 1 number and suit are generated.  The card number is between 2 and 14 (13 per suit)
   card1 = (2 + rand() % 13);
   //The card suit is generated at random in suits between 1 and 4 (4 total suits).
   card1Suit = (1 + rand() % 4);

   /*Once generated, the switch statement is used to output the randomly generated value of
   card #1 to its face value as per a 52 card deck.*/
   switch (card1) {
      case 2: cout << ("2 of");
         break;
      case 3: cout << ("3 of");
         break;
      case 4: cout << ("4 of");
         break;
      case 5: cout << ("5 of");
         break;
      case 6: cout << ("6 of");
         break;
      case 7: cout << ("7 of");
         break;
      case 8: cout << ("8 of");
         break;
      case 9: cout << ("9 of");
         break;
      case 10: cout << ("10 of");
         break;
      case 11: cout << ("Jack of");
         break;
      case 12: cout << ("Queen of");
         break;
      case 13: cout << ("King of");
         break;
      case 14: cout << ("Ace of");
         break;
   } //End card value switch statement.
   switch (card1Suit) {
      case 1: cout << (" Clubs.\n");
         break;
      case 2: cout << (" Diamonds.\n");
         break;
      case 3: cout << (" Hearts.\n");
         break;
      case 4: cout << (" Spades.\n");
         break;
   }  //End card suit switch statement.

   /* If-else statement is used to assign the proper value of the card
   in accordance with the blackjack game.  The optional value of the Ace
   card is assigned at the choice of the player. */
   if (card1 == 14) {
      cout << "Do you want your ace to be a 1 or a 11? ";
      cin >> answer;

      if (answer == 1) {
         card1Val = 1;
      }
      else {
         card1Val = 11;
      }
   }  //This statement assigns the values of the 10-13 cards generated (J, Q, K, A)
   else if (card1 == 10 || card1 == 11 || card1 == 12 || card1 == 13) {
      card1Val = 10;
   }
   else if (card1 == 2) {
      card1Val = 2;
   }
   else if (card1 == 3) {
      card1Val = 3;
   }
   else if (card1 == 4) {
      card1Val = 4;
   }
   else if (card1 == 5) {
      card1Val = 5;
   }
   else if (card1 == 6) {
      card1Val = 6;
   }
   else if (card1 == 7) {
      card1Val = 7;
   }
   else if (card1 == 8) {
      card1Val = 8;
   }
   else if (card1 == 9) {
      card1Val = 9;
   }
   //The second card is randomly generated
   cout << "Your next card is: ";

   card2 = (2 + rand() % 13);
   card2Suit = (1 + rand() % 4);

   /*Once generated, the switch statement is used to output the randomly generated value of
   card #2 to its face value as per a 52 card deck.*/
   switch (card2) {
      case 2: cout << ("2 of");
         break;
      case 3: cout << ("3 of");
         break;
      case 4: cout << ("4 of");
         break;
      case 5: cout << ("5 of");
         break;
      case 6: cout << ("6 of");
         break;
      case 7: cout << ("7 of");
         break;
      case 8: cout << ("8 of");
         break;
      case 9: cout << ("9 of");
         break;
      case 10: cout << ("10 of");
         break;
      case 11: cout << ("Jack of");
         break;
      case 12: cout << ("Queen of");
         break;
      case 13: cout << ("King of");
         break;
      case 14: cout << ("Ace of");
         break;
   } //End card value switch statement.
   switch (card2Suit) {
      case 1: cout << (" Clubs.\n");
         break;
      case 2: cout << (" Diamonds.\n");
         break;
      case 3: cout << (" Hearts.\n");
         break;
      case 4: cout << (" Spades.\n");
         break;
   }  //End card suit switch statement.


   /* If-else statement is used to assign the proper value of the card
   in accordance with the blackjack game.  The optional value of the Ace
   card is assigned at the choice of the player. */
   if (card2 == 14) {
      cout << "Do you want your ace to be a 1 or a 11? ";
      cin >> answer;

      if (answer == 1) {
         card2Val = 1;
      }
      else {
         card2Val = 11;
      }
   } //Values of Jack, Queen, King are asssigned 10.
   else if (card2 == 10 || card2 == 11  || card2 == 12 || card2 == 13) {
      card2Val = 10;
   }
   else if (card2 == 2) {
      card2Val = 2;
   }
   else if (card2 == 3) {
      card2Val = 3;
   }
   else if (card2 == 4) {
      card2Val = 4;
   }
   else if (card2 == 5) {
      card2Val = 5;
   }
   else if (card2 == 6) {
      card2Val = 6;
   }
   else if (card2 == 7) {
      card2Val = 7;
   }
   else if (card2 == 8) {
      card2Val = 8;
   }
   else if (card2 == 9) {
      card2Val = 9;
   }

   /*After the first two mandatory cards are dealt, the user has a choice
   to hit.*/
   char hitMe = 'Y';
   //The number of hands played are incremented, for user statistics at end of game.
   handsPlayed++;

   //The card totals are summed together, and displayed as values vice just the face cards.
   cardTotal = card1Val + card2Val;
   cout << "Total of cards: " << cardTotal << endl << endl;

   //The user is prompted to get their 3rd card.
   cout << "Do you want another card? (Y or N) " << endl;
   cin >> hitMe;

   //DELETED do { from this line! ****************************************************************************************************
      //If statement executes if the user hits, or wants a 3rd card.
      if (toupper(hitMe) == 'Y') {
         //The players third card is displayed.
         cout << "Your next card is the ";
         //The players third card is generated
         card3 = (2 + rand() % 13);
         card3Suit = (1 + rand() % 4);

         /*Once generated, the switch statement is used to output the randomly generated value of
         card #3 to its face value as per a 52 card deck.*/
         switch (card3) {
            case 2: cout << ("2 of");
               break;
            case 3: cout << ("3 of");
               break;
            case 4: cout << ("4 of");
               break;
            case 5: cout << ("5 of");
               break;
            case 6: cout << ("6 of");
               break;
            case 7: cout << ("7 of");
               break;
            case 8: cout << ("8 of");
               break;
            case 9: cout << ("9 of");
               break;
            case 10: cout << ("10 of");
               break;
            case 11: cout << ("Jack of");
               break;
            case 12: cout << ("Queen of");
               break;
            case 13: cout << ("King of");
               break;
            case 14: cout << ("Ace of");
               break;
         } //End card #3 value switch statement.
         switch (card3Suit) {
            case 1: cout << (" Clubs.\n");
               break;
            case 2: cout << (" Diamonds.\n");
               break;
            case 3: cout << (" Hearts.\n");
               break;
            case 4: cout << (" Spades.\n");
               break;
         }  //End card #3 suit switch statement.


         /* If-else statement is used to assign the proper value of the card
         in accordance with the blackjack game.  The optional value of the Ace
         card is assigned at the choice of the player. */
         if (card3 == 14) {
            cout << "Do you want your ace to be a 1 or a 11? ";
            cin >> answer;

            if (answer == 1) {
               card3Val = 1;
            }
            else {
               card3Val = 11;
            }
         } //Card #3 values for J, Q, K, A are assigned.
         else if (card3 == 10 || card3 == 11  || card3 == 12 || card3 == 13) {
            card3Val = 10;
         }
         else if (card3 == 2) {
            card3Val = 2;
         }
         else if (card3 == 3) {
            card3Val = 3;
         }
         else if (card3 == 4) {
            card3Val = 4;
         }
         else if (card3 == 5) {
            card3Val = 5;
         }
         else if (card3 == 6) {
            card3Val = 6;
         }
         else if (card3 == 7) {
            card3Val = 7;
         }
         else if (card3 == 8) {
            card3Val = 8;
         }
         else if (card3 == 9) {
            card3Val = 9;
         }
         //The players overall hand total is summed (3 cards so far)
         cardTotal += card3Val;
         //The players hand total is displayed.
         cout << "Your total is now: " << cardTotal << endl;
         //If statement executes if the users hand has exceeded 21 (Bust)
         if (cardTotal > 21) {
            cout << "Sorry you busted! ";
         }

         //If the users hand has not exceeded 21, they are prompted to hit or stay.
         else
         {
            cout << "Do you want another card? (Y or N) " << endl;
            cin >> hitMe;

            //The users response is promoted to uppercase.
            if (toupper(hitMe) == 'Y') {

            //The players 4th card is generated.
            card4 = (2 + rand() % 13);
            card4Suit = (1 + rand() % 4);

            cout << "Your fourth card is the ";

            /*Once generated, the switch statement is used to output the randomly generated value of
            card #4 to its face value as per a 52 card deck.*/
            switch (card4) {
               case 2: cout << ("2 of");
                  break;
               case 3: cout << ("3 of");
                  break;
               case 4: cout << ("4 of");
                  break;
               case 5: cout << ("5 of");
                  break;
               case 6: cout << ("6 of");
                  break;
               case 7: cout << ("7 of");
                  break;
               case 8: cout << ("8 of");
                  break;
               case 9: cout << ("9 of");
                  break;
               case 10: cout << ("10 of");
                  break;
               case 11: cout << ("Jack of");
                  break;
               case 12: cout << ("Queen of");
                  break;
               case 13: cout << ("King of");
                  break;
               case 14: cout << ("Ace of");
                  break;
            } //End card #4 value switch statement.
            switch (card4Suit) {
               case 1: cout << (" Clubs.\n");
                  break;
               case 2: cout << (" Diamonds.\n");
                  break;
               case 3: cout << (" Hearts.\n");
                  break;
               case 4: cout << (" Spades.\n");
                  break;
            }  //End card #4 suit switch statement.


               /* If-else statement is used to assign the proper value of the card
               in accordance with the blackjack game.  The optional value of the Ace
               card is assigned at the choice of the player. */
               if (card4 == 14) {
                  cout << "Do you want your ace to be a 1 or a 11? ";
                  cin >> answer;

                  if (answer == 1) {
                     card4Val = 1;
                  }
                  else {
                     card4Val = 11;
                  }
               } //Value of J, Q, K, A are assigned.
               else if (card4 == 10 || card4 == 11  || card4 == 12 || card4 == 13) {
                  card4Val = 10;
               }
               else if (card4 == 2) {
                  card4Val = 2;
               }
               else if (card4 == 3) {
                  card4Val = 3;
               }
               else if (card4 == 4) {
                  card4Val = 4;
               }
               else if (card4 == 5) {
                  card4Val = 5;
               }
               else if (card4 == 6) {
                  card4Val = 6;
               }
               else if (card4 == 7) {
                  card4Val = 7;
               }
               else if (card4 == 8) {
                  card4Val = 8;
               }
               else if (card4 == 9) {
                  card4Val = 9;
               }
               //The players hand total is summed (All four cards so far).
               cardTotal += card4Val;
               //The players hand total is displayed.
               cout << "Total of cards: " << cardTotal << endl << endl;

             } //End if statement for 4th card.

            //Player prompted to receive a 5th card.
            cout << "Do you want another card? (Y or N) " << endl;
            cin >> hitMe;
            //Users response is converted to uppercase.
            if (toupper(hitMe) == 'Y') {
               //If user "hits", their 5th card is generated and dealt to them.
               card5 = (2 + rand() % 13);
               card5Suit = (1 + rand() % 4);
               //Users 5th card is displayed.
               cout << "Your fifth card is the ";

               /*Once generated, the switch statement is used to output the randomly generated value of
               card #5 to its face value as per a 52 card deck.*/
               switch (card5) {
                  case 2: cout << ("2 of");
                     break;
                  case 3: cout << ("3 of");
                     break;
                  case 4: cout << ("4 of");
                     break;
                  case 5: cout << ("5 of");
                     break;
                  case 6: cout << ("6 of");
                     break;
                  case 7: cout << ("7 of");
                     break;
                  case 8: cout << ("8 of");
                     break;
                  case 9: cout << ("9 of");
                     break;
                  case 10: cout << ("10 of");
                     break;
                  case 11: cout << ("Jack of");
                     break;
                  case 12: cout << ("Queen of");
                     break;
                  case 13: cout << ("King of");
                     break;
                  case 14: cout << ("Ace of");
                     break;
               } // End card #5 switch statement.
               switch (card5Suit) {
                  case 1: cout << (" Clubs.\n");
                     break;
                  case 2: cout << (" Diamonds.\n");
                     break;
                  case 3: cout << (" Hearts.\n");
                     break;
                  case 4: cout << (" Spades.\n");
                     break;
               }  //End card #5 suit switch statement.

               /* If-else statement is used to assign the proper value of the card
               in accordance with the blackjack game.  The optional value of the Ace
               card is assigned at the choice of the player. */
               if (card5 == 14) {
                  cout << "Do you want your ace to be a 1 or a 11? ";
                  cin >> answer;

                  if (answer == 1) {
                     card5Val = 1;
                  }
                  else {
                     card5Val = 11;
                  }
               } // Value of J, Q, K are assigned.
               else if (card5 == 10 || card5 == 11  || card5 == 12 || card5 == 13) {
                  card5Val = 10;
               }
               else if (card5 == 2) {
                  card5Val = 2;
               }
               else if (card5 == 3) {
                  card5Val = 3;
               }
               else if (card5 == 4) {
                  card5Val = 4;
               }
               else if (card5 == 5) {
                  card5Val = 5;
               }
               else if (card5 == 6) {
                  card5Val = 6;
               }
               else if (card5 == 7) {
                  card5Val = 7;
               }
               else if (card5 == 8) {
                  card5Val = 8;
               }
               else if (card5 == 9) {
                  card5Val = 9;
               }  // End card value reassignment.

               //Users hand total is added together (All 5 cards)
               cardTotal += card5Val;
               //users hand total is displayed.
               cout << "Total of cards: " << cardTotal << endl << endl;
            }
         }  //This ends the if statement if the 3rd card busts the player.
      } //While statement in place as long as user continues to 'hit'
      while (toupper(hitMe) == 'Y'); //cardTotal < 21);

      /* Once all the cards are dealt (5 max) to the player, if-else statement
      executes in accordance with the game rules for blackjack. */
      //If users cards ever exceed 21, they automatically lose and the result is diplayed.
      if (cardTotal > 21) {
         cout << "You lose. Your total is over 21.";
         //Number of hands lost is incremented.
         handsLost++;
         break;
      }
      //If user gets 21, they get Blackjack, and that result is displayed.
      else if (cardTotal == 21) {
         cout << "BlackJack!  You win! Your total is equal to 21! \n" << endl;
         //Number of hands won are displayed, in case it isn't incremented during dealer section.
         handsWon++;
         break;
      }

      /*If the user has not automatically Won or Lost, this else statement initiates the dealers
      portion where the dealer cards are generated. */
      else {

      /* * * * * * * * * * Dealer Card Section * * * * * * * * * * * */
      /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
         //User is informed what will be displayed next.
         cout << "Now lets see the dealer's cards! \n" << endl;

      }
      //Initialization section for dealer cards.
      int dealerCard1;
      int dealerCard2;
      int dealerCard3;
      int dealerCard4;
      int dealerCard5;
      int dealerCard1Suit;
      int dealerCard2Suit;
      int dealerCard3Suit;
      int dealerCard4Suit;
      int dealerCard5Suit;
      int dealerCard1Val;
      int dealerCard2Val;
      int dealerCard3Val;
      int dealerCard4Val;
      int dealerCard5Val;
      int dealerCardTotal;

      //Dealers cards are displayed.
      cout << "The dealer's first card is the ";

      //Dealers cards are generated randomly.
      dealerCard1 = (2 + rand() % 13);
      dealerCard1Suit = (1 + rand() % 4);

      /*Once generated, the switch statement is used to output the randomly generated value of
      the dealers card #1 to its face value as per a 52 card deck.*/
      switch (dealerCard1) {
         case 2: cout << ("2 of");
            break;
         case 3: cout << ("3 of");
            break;
         case 4: cout << ("4 of");
            break;
         case 5: cout << ("5 of");
            break;
         case 6: cout << ("6 of");
            break;
         case 7: cout << ("7 of");
            break;
         case 8: cout << ("8 of");
            break;
         case 9: cout << ("9 of");
            break;
         case 10: cout << ("10 of");
            break;
         case 11: cout << ("Jack of");
            break;
         case 12: cout << ("Queen of");
            break;
         case 13: cout << ("King of");
            break;
         case 14: cout << ("Ace of");
            break;
      } //End dealer card #1 switch statement.
      switch (dealerCard1Suit) {
         case 1: cout << (" Clubs.\n");
            break;
         case 2: cout << (" Diamonds.\n");
            break;
         case 3: cout << (" Hearts.\n");
            break;
         case 4: cout << (" Spades.\n");
            break;
      }  //End dealer card #1 suit switch statement.

      /* If-else statement is used to assign the proper value of the card
         in accordance with the blackjack game.  The optional value of the Ace
         card is assigned at the choice of the player. */
      if (dealerCard1 == 14) {
         //User is prompted to enter the value of the dealers Ace Card (if dealt).
         cout << "The dealer's Ace is worth (Dealer enter 1 or 11): ";
         cin >> answer;

         if (answer == 1) {
            dealerCard1Val = 1;
         }
         else {
            dealerCard1Val = 11;
         }
      } //Value of J, Q, K, A are asssigned.
      else if (dealerCard1 == 10 || dealerCard1 == 11 || dealerCard1 == 12 || dealerCard1 == 13) {
         dealerCard1Val = 10;
      }
      else if (dealerCard1 == 2) {
         dealerCard1Val = 2;
      }
      else if (dealerCard1 == 3) {
         dealerCard1Val = 3;
      }
      else if (dealerCard1 == 4) {
         dealerCard1Val = 4;
      }
      else if (dealerCard1 == 5) {
         dealerCard1Val = 5;
      }
      else if (dealerCard1 == 6) {
         dealerCard1Val = 6;
      }
      else if (dealerCard1 == 7) {
         dealerCard1Val = 7;
      }
      else if (dealerCard1 == 8) {
         dealerCard1Val = 8;
      }
      else if (dealerCard1 == 9) {
         dealerCard1Val = 9;
      }

      //Dealers second card is generated and displayed.
      cout << "And the second card is the ";
      dealerCard2 = (2 + rand() % 13);
      dealerCard2Suit = (1 + rand() % 4);

      /*Once generated, the switch statement is used to output the randomly generated value of
      the dealers card #1 to its face value as per a 52 card deck.*/
      switch (dealerCard2) {
         case 2: cout << ("2 of");
            break;
         case 3: cout << ("3 of");
            break;
         case 4: cout << ("4 of");
            break;
         case 5: cout << ("5 of");
            break;
         case 6: cout << ("6 of");
            break;
         case 7: cout << ("7 of");
            break;
         case 8: cout << ("8 of");
            break;
         case 9: cout << ("9 of");
            break;
         case 10: cout << ("10 of");
            break;
         case 11: cout << ("Jack of");
            break;
         case 12: cout << ("Queen of");
            break;
         case 13: cout << ("King of");
            break;
         case 14: cout << ("Ace of");
            break;
      } //End dealer card #2 value switch statement
      switch (dealerCard2Suit) {
         case 1: cout << (" Clubs.\n");
            break;
         case 2: cout << (" Diamonds.\n");
            break;
         case 3: cout << (" Hearts.\n");
            break;
         case 4: cout << (" Spades.\n");
            break;
      } //End dealer card #2 suit switch statement.


      /* If-else statement is used to assign the proper value of the card
         in accordance with the blackjack game.  The optional value of the Ace
         card is assigned at the choice of the player. */
      if (dealerCard2 == 14) {
         //User is prompted to select the value of the dealers Ace card.
         cout << "The dealer's Ace is worth (Dealer enter 1 or 11): ";
         cin >> answer;
         //Nested if/else to determine Ace value.
         if (answer == 1) {
            dealerCard2Val = 1;
         }
         else {
            dealerCard2Val = 11;
         } //End aceValue nested loop.
      } // Value of J, Q, K are assigned.
      else if (dealerCard2 == 10 || dealerCard2 == 11 || dealerCard2 == 12 || dealerCard2 == 13) {
         dealerCard2Val = 10;
      }
      else if (dealerCard2 == 2) {
         dealerCard2Val = 2;
      }
      else if (dealerCard2 == 3) {
         dealerCard2Val = 3;
      }
      else if (dealerCard2 == 4) {
         dealerCard2Val = 4;
      }
      else if (dealerCard2 == 5) {
         dealerCard2Val = 5;
      }
      else if (dealerCard2 == 6) {
         dealerCard2Val = 6;
      }
      else if (dealerCard2 == 7) {
         dealerCard2Val = 7;
      }
      else if (dealerCard2 == 8) {
         dealerCard2Val = 8;
      }
      else if (dealerCard2 == 9) {
         dealerCard2Val = 9;
      }

      //The dealers cards are summed together.
      dealerCardTotal = dealerCard1Val + dealerCard2Val;
      cout << "The dealer's total is " << dealerCardTotal << endl << endl;


         /* If statement ensures that if the dealers hand is not at least 17, they must continue to hit*/
         if (dealerCardTotal < 17) {
            //Dealers third card is generated and displayed.
            cout << "And the third card is the ";
            dealerCard3 = (2 + rand() % 13);
            dealerCard3Suit = (1 + rand() % 4);

            /*Once generated, the switch statement is used to output the randomly generated value of
            the dealers card #3 to its face value as per a 52 card deck.*/
            switch (dealerCard3) {
               case 2: cout << ("2 of");
                  break;
               case 3: cout << ("3 of");
                  break;
               case 4: cout << ("4 of");
                  break;
               case 5: cout << ("5 of");
                  break;
               case 6: cout << ("6 of");
                  break;
               case 7: cout << ("7 of");
                  break;
               case 8: cout << ("8 of");
                  break;
               case 9: cout << ("9 of");
                  break;
               case 10: cout << ("10 of");
                  break;
               case 11: cout << ("Jack of");
                  break;
               case 12: cout << ("Queen of");
                  break;
               case 13: cout << ("King of");
                  break;
               case 14: cout << ("Ace of");
                  break;
            } //End dealer card #3 value switch statement
            switch (dealerCard3Suit) {
               case 1: cout << (" Clubs.\n");
                  break;
               case 2: cout << (" Diamonds.\n");
                  break;
               case 3: cout << (" Hearts.\n");
                  break;
               case 4: cout << (" Spades.\n");
                  break;
            } //End dealer card #3 suit switch statement.


      /* If-else statement is used to assign the proper value of the card
         in accordance with the blackjack game.  The optional value of the Ace
         card is assigned at the choice of the player. */
      if (dealerCard3 == 14) {
         //User is prompted to select the value of the dealers Ace card.
         cout << "The dealer's Ace is worth (Dealer enter 1 or 11): ";
         cin >> answer;
         //Nested if/else to determine Ace value.
         if (answer == 1) {
            dealerCard3Val = 1;
         }
         else {
            dealerCard3Val = 11;
         } //End aceValue nested loop.
      } // Value of J, Q, K are assigned.
      else if (dealerCard3 == 10 || dealerCard3 == 11 || dealerCard3 == 12 || dealerCard3 == 13) {
         dealerCard3Val = 10;
      }
      else if (dealerCard3 == 2) {
         dealerCard3Val = 2;
      }
      else if (dealerCard3 == 3) {
         dealerCard3Val = 3;
      }
      else if (dealerCard3 == 4) {
         dealerCard3Val = 4;
      }
      else if (dealerCard3 == 5) {
         dealerCard3Val = 5;
      }
      else if (dealerCard3 == 6) {
         dealerCard3Val = 6;
      }
      else if (dealerCard3 == 7) {
         dealerCard3Val = 7;
      }
      else if (dealerCard3 == 8) {
         dealerCard3Val = 8;
      }
      else if (dealerCard3 == 9) {
         dealerCard3Val = 9;
      }

      //The dealers cards are summed together.
      dealerCardTotal += dealerCard3;
      cout << "The dealer's total is " << dealerCardTotal << endl << endl;

         //if the dealers total is still not 17, they will hit again.
         if (dealerCardTotal < 17) {
            //Dealers fourth card is generated and displayed.
            cout << "And the fourth card is the ";
            dealerCard4 = (2 + rand() % 13);
            dealerCard4Suit = (1 + rand() % 4);

            /*Once generated, the switch statement is used to output the randomly generated value of
            the dealers card #4 to its face value as per a 52 card deck.*/
            switch (dealerCard4) {
               case 2: cout << ("2 of");
                  break;
               case 3: cout << ("3 of");
                  break;
               case 4: cout << ("4 of");
                  break;
               case 5: cout << ("5 of");
                  break;
               case 6: cout << ("6 of");
                  break;
               case 7: cout << ("7 of");
                  break;
               case 8: cout << ("8 of");
                  break;
               case 9: cout << ("9 of");
                  break;
               case 10: cout << ("10 of");
                  break;
               case 11: cout << ("Jack of");
                  break;
               case 12: cout << ("Queen of");
                  break;
               case 13: cout << ("King of");
                  break;
               case 14: cout << ("Ace of");
                  break;
            } //End dealer card 4 value switch statement
            switch (dealerCard4Suit) {
               case 1: cout << (" Clubs.\n");
                  break;
               case 2: cout << (" Diamonds.\n");
                  break;
               case 3: cout << (" Hearts.\n");
                  break;
               case 4: cout << (" Spades.\n");
                  break;
            } //End dealer card #4 suit switch statement.


      /* If-else statement is used to assign the proper value of the card
         in accordance with the blackjack game.  The optional value of the Ace
         card is assigned at the choice of the player. */
      if (dealerCard4 == 14) {
         //User is prompted to select the value of the dealers Ace card.
         cout << "The dealer's Ace is worth (Dealer enter 1 or 11): ";
         cin >> answer;
         //Nested if/else to determine Ace value.
         if (answer == 1) {
            dealerCard4Val = 1;
         }
         else {
            dealerCard4Val = 11;
         } //End aceValue nested loop.
      } // Value of J, Q, K are assigned.
      else if (dealerCard4 == 10 || dealerCard4 == 11 || dealerCard4 == 12 || dealerCard4 == 13) {
         dealerCard4Val = 10;
      }
      else if (dealerCard4 == 2) {
         dealerCard4Val = 2;
      }
      else if (dealerCard4 == 3) {
         dealerCard4Val = 3;
      }
      else if (dealerCard4 == 4) {
         dealerCard4Val = 4;
      }
      else if (dealerCard4 == 5) {
         dealerCard4Val = 5;
      }
      else if (dealerCard4 == 6) {
         dealerCard4Val = 6;
      }
      else if (dealerCard4 == 7) {
         dealerCard4Val = 7;
      }
      else if (dealerCard4 == 8) {
         dealerCard4Val = 8;
      }
      else if (dealerCard4 == 9) {
         dealerCard4Val = 9;
      }

      //The dealers cards are summed together.
      dealerCardTotal += dealerCard4;
      cout << "The dealer's total is " << dealerCardTotal << endl << endl;
      }

      }
      //If the dealers cars are 17 or grater, the dealer will stay, and their final hand total is determined.
      else {
      cout << "The dealer's total is " << dealerCardTotal << endl;

      }

      /*Once both the user and the dealers hands are complete, they are compared to determine who the winner
      is, if it has not already been determined. */
      if (dealerCardTotal > 21 && cardTotal <= 21) {
         cout << "Congratulations, you won the hand " << cardTotal << " to " << dealerCardTotal << "!" << endl;
         handsWon++;
      }

      else if (cardTotal > dealerCardTotal && cardTotal <= 21) {
         cout << "Congratulations, you won the hand " << cardTotal << " to " << dealerCardTotal << "!" << endl;
         handsWon++;
      }

      else if (cardTotal == dealerCardTotal) {
         cout << "You tied the dealer.\n";
         //Number of hands tied are incremented.
         handsTied++;
      }
      else if (cardTotal < dealerCardTotal || cardTotal > 21) {
         cout << "You lost this hand " << cardTotal << " to " << dealerCardTotal << "." << endl;
         //Number of hands lost are incremented, if they haven't already been due to a bust.
         handsLost++;

      }
      /* Once the hand is complete, the user is then prompted whether or not they want to continue
      with the game or not.  Their response determines if the program ends.*/
      cout << "Do you want to play again? (Y or N); " << endl;
      cin >> continuePlaying;


   } while (toupper(continuePlaying == 'Y')); //If user selects Y, the game continues.

   //The players winning percentage is determined, based on how many hands they have Played, and Won.
   //winPct = handsWon / handsPlayed * 100;
   //The number of games won, and winning percentage are displayed.
   cout << "You won " << handsWon << " out of " << handsPlayed << ". Thanks for playing!" << endl;

   return 0;
}  //End of main function.
