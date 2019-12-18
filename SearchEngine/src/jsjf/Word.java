/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jsjf;

/**
 *
 * @author User
 */
public class Word implements Comparable{
      
      //Two data fields
      private String word;
      private int count;
      
      //Constructor takes in a string
      public Word(String word){
         this.word = word;
         count = 1;
      }
      
      //Constructor takes the string and initializes an integer to be 1
      public Word(String word, int count){
         this.word = word;
         this.count = count;
      }
      
      //Method gets the word
      public String getWord(){
         return word;
      }
      
      //Method gets the integer
      public int getCount(){
         return count;
      }   
      
      //Method sets the word      
      public void setWord(String word){
         this.word = word;
      }
      
      //Method sets the integer
      public void setCount(int count){
         this.count = count;
      }
      
      //Compare to method
      public int compareTo(Object o){
         return (word.compareTo(((Word)o).getWord()));
      }   
      
      //Public void method that increments the count
      public void incrementCount(){
         count++;
      }
      
      //toString method
      @Override
      public String toString(){
         return word + count;
      }
      
      //Override boolean equals method
      @Override
      public boolean equals(Object o){
         if(o instanceof Word){
            return word.equals(((Word)o).getWord());
         }
         else{
            return false;
         }
         
      }
   
   
   
   }
