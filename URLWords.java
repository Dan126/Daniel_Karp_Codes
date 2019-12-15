/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package websearch;
import java.util.Scanner;
import jsjf.LinkedBinarySearchTree;
import jsjf.Word;
/**
 *
 * @author User
 */
public class URLWords {

    LinkedBinarySearchTree<Word> inputBinaryTree = new LinkedBinarySearchTree<>();
  
   String stringURL = " ";
    
        public URLWords(String setURL) {

            stringURL = setURL;
         
    }
    
    public String getURLString(){
    
    return stringURL;
   }
    
   public void addWord(Word w){
      
       if (inputBinaryTree.contains(w)){
           inputBinaryTree.find(w).incrementCount();
       }
       else        
           inputBinaryTree.addElement(w);
   }
   
   public void addWord(String string){
       
       Word strings = new Word(string);
      
       if (inputBinaryTree.contains(strings)){
           inputBinaryTree.find(strings).incrementCount();
       }
       else        
           inputBinaryTree.addElement(strings);
   }
   
   public boolean contains(String newWord){
       
       Word argWord = new Word(newWord);
       
       if (inputBinaryTree.contains(argWord)){
           return true;
       }
       else
           return false;
       
   }
   
   public int getFrequency(String newWord) {
       
       Word argWord = new Word(newWord);
     
         if (inputBinaryTree.contains(argWord)){
             return inputBinaryTree.find(argWord).getCount();
         }
         else
             return 0;
   }
   
    @Override
   public String toString(){
       
   String result = "";
   
   result = result + stringURL;
   
   for (Word w : inputBinaryTree)
       
       result = result + w.toString();
       
   return result;
       
   }
   
   
}
