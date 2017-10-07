import java.util.HashMap;
import java.util.Scanner;
import java.math.BigInteger;

public class Anagram {
  
  public static void main(String[] args) {
    HashMap<Character,Integer> multiset = new HashMap<>();
    Scanner in = new Scanner(System.in);
    while (in.hasNext()) {
      String word = in.next();
      
      for (int i = 0; i < word.length(); i++) {
        Character c = word.charAt(i);
        if (!multiset.containsKey(c)) {
          multiset.put(c,1);
        } else {
          multiset.put(c, multiset.get(c) + 1);
        }
      }

      BigInteger numer = BigInteger.ONE;
      BigInteger denom = BigInteger.ONE;
      int n = 0;
      
      for (Character c : multiset.keySet()) {
        n += multiset.get(c);
      }
      
      for (int i = 1; i <= n; i++) {
        numer = numer.multiply(new BigInteger(i + ""));
      }
      for (Character c : multiset.keySet()) {
        for (int j = 1; j <= multiset.get(c); j++) {
          denom = denom.multiply(new BigInteger(j + "")); 
        }
      }
      
      System.out.println((numer.divide(denom)).toString());
      multiset.clear();
      
    }
    return;
  }
}
