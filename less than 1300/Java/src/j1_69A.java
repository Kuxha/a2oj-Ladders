import java.util.Scanner;

public class j1_69A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int x = 0, y = 0, z = 0;
        for (int i = 0; i < n; i++) {

            x = x + sc.nextInt();
            y = y + sc.nextInt();
            z = z + sc.nextInt();


        }

        if (x == 0 && y == 0 && z == 0) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

    }
}
