import java.math.BigInteger;
import java.util.*;

public class AnotherCandies {

    public static void main(String[] args) {
        int test_cases, num_kids;
        BigInteger total_candies, candies;
        Scanner sc = new Scanner(System.in);
        test_cases = sc.nextInt();
        for (int i = 0; i < test_cases; i++) {
            num_kids = sc.nextInt();
            total_candies = BigInteger.ZERO;
            for (int k = 0; k < num_kids; k++) {
                candies = new BigInteger(sc.next());
                total_candies = total_candies.add(candies);
            }
            if ((total_candies.mod(BigInteger.valueOf(num_kids))).longValue() == 0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }

}
