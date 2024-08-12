
// Link to problem
//https://codeforces.com/problemset/problem/263/A


import java.util.Scanner;

public class atoj_2 {

    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);

        int x = 0;
        int ans = 0;
        for (int i = 0; i < 5; i++) {

            for (int j = 0; j < 5;j++) {
                x = sc.nextInt();
                if (x == 1) {
                    ans = Math.abs(i - 2) + Math.abs(j - 2);
                }

            }
        }


        System.out.println(ans);

        sc.close();
    }
}
