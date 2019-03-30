/*
    Author = ehardi19
    Team = SubscriberVayuHalilintar
    Problem = Merubah PIN
    Status = Wrong Answer
*/

import java.math.BigInteger;
import java.util.Scanner;

public class PIN {
    public static String doit(String a, int b){
        BigInteger ai = new BigInteger("" + a);
        BigInteger res = ai.pow(b);

        String str = "" + res;
        String last3 = "";
        if (str == null || str.length() < 3) {
            for (int i = 0; i < 3-str.length(); i++) last3 = last3 + "0";
            last3 = last3 + str;
        } else {
            last3 = str.substring(str.length() - 3);
        }

        return last3;
    } 
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int x, y, z;
        String rule;
        String temp;
        String res = "";
        
        x = s.nextInt();
        y = s.nextInt();
        z = s.nextInt();
        rule = s.next();
        for (int i = 0; i < z; i++) {
            temp = s.next();
            for (int j = 0; j < x; j++) {
                res = res + temp.charAt(Character.getNumericValue(rule.charAt(j)) - 1);
            }
            res = doit(res, y);
            System.out.print(res + " ");
        }
        s.close();
    }
}