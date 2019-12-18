//****************************
// Author: Daniel Karp
// Date: 1-30-2018
// COMSC 111
// US States and Capitals
//****************************
import java.util.Scanner;
      
      //Quizzes the user on the US capitals
      public class USCapitals {
         
         //Asks the user to answer what is the capital of each state and shows the results 
         public static void main(String[] args) {
            
            //Scanner object is created
            Scanner input = new Scanner(System.in);
           
            //Variable is made to answer if the user wants to take the quiz again or not at the end
            String answer = "";
            
           do{ 
            //Lets the user select the amount of questions they want to answer
            int questions;
            System.out.println("How many questions do you want to answer? ");
               questions = Integer.parseInt(input.nextLine());
               
            
            //String array is created to store each state and capital
            String[][] array = {{"New Jersey","Trenton"}, 
                                {"Florida","Tallahassee"}, 
                                {"Alabama","Montgomery"}, 
                                {"Pennsylvania","Harrisburg"}, 
                                {"Utah","Salt Lake City"}};
            //Variable to store number of correct answers is created
            int count = 0;
            
            //For loop is created to call upon different sets in the array                    
            for(int i = 0; i < questions; i++){
            
            //Generates a random number that correlates to a different state and capital for each question
            int x = (int)(Math.random()*5);
            
            //Asks the user the capital of each state and the user answers the question and finds out if they re right or not
            String s1;
            System.out.println("What is the capital of " + array[x][0] + " ?");
                s1 = input.nextLine().toLowerCase();
                  if (s1.equals(array[x][1].toLowerCase())){
                     System.out.println("That is correct!");
                     count++;
                  }
         
                  else{ 
                     System.out.println("That is incorrect!");
                  }
            }
            //Prints out the amount of answers the user got correct out of the amount of questions on the quiz
            System.out.println("You got " + count + " questions correct out of " + questions);
            
            //Asks the user if they want to take the quiz again
            System.out.println("Do you want to take the quiz again? (Enter Y for Yes or N for No)");
            answer = input.nextLine();
            
            //If the user selects yes this will allow them to retake the quiz
           }while ((answer.charAt(0) == 'Y') || (answer.charAt(0) == 'y'));
            
           
        
          
         }     
               
      }
        