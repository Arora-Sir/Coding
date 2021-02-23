
public class Solution {
    //! Approach 1 : All In comment 
    // 	private static String reverseWord(String str, int start, int end) {
    // 		String reverse = "";
    // 	    while (start < end) {  
    // 	    	reverse = str.charAt(start) + reverse;
    // 	        start++;
    // 	    }
    // 	    return reverse;
    // 	}
    
        public static String reverseEachWord(String str) {
        //     int n = str.length();
        //     int startWord = 0;
        //     String ans = "";
        //     int i = 0;
        //     for (; i < n; i++) {
        //         if (str.charAt(i) == ' ') {
        //             ans += (reverseWord(str, startWord , i) + " ");
        //             startWord = i+1;
        //         }
        //     }
        //     ans += (reverseWord(str, startWord , i) + " ");
        //     return ans;
        
            
            //! Approach 2 : 

            String words[]=str.split("\\s");  
            String reverseWord="";  
            for(String w:words){  
                StringBuilder sb=new StringBuilder(w);  
                sb.reverse();  
                reverseWord += sb.toString()+" ";  //or sb simply
            }  
            return reverseWord;  //or reverseWord.trim()
            }
    
    }