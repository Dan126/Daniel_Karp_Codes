// Author: Daniel Karp
// Date: 3-23-2018

import java.util.Scanner;

public class HW6 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String response;
        do {
            // prompt the user and get input
            System.out.println("Enter the first word:");
            String inputString1 = input.nextLine();

            System.out.println("Enter the second word:");
            String inputString2 = input.nextLine();

            //test if the first word is the reverse of the second word
            boolean output = isReverse(inputString1, inputString2);

            //report answer
            if (output) {
                System.out.println(inputString1 + " is the reverse of " + inputString2);
            } else {
                System.out.println(inputString1 + " is not the reverse of " + inputString2);
            }
            

            System.out.println("Would you like to try again?");
            response = input.nextLine();
        } while (response.toLowerCase().charAt(0)=='y');
    }

    private static boolean isReverse(String inputString1, String inputString2) {
        if (inputString1.length()== 0 && inputString1.length()== 0) {
            return true;
        }
        
        
        else if(inputString1.length()== inputString2.length()){
        	int length = inputString2.length();
        	char letter1 = Character.toUpperCase(inputString1.charAt(0));
        	char letter2 = Character.toUpperCase(inputString2.charAt(inputString2.length()-1));
        	if(letter1 == letter2) {
        		isReverse(inputString1.substring(1), inputString2.substring(0,inputString2.length()-1));
        	}
        }
        else {
        	return false;
        }
        return true;
        	
    }



}