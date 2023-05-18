import java.util.Scanner;

public class A_1_69 {
    public static void main(String[] args) {
        

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();


        int coordinates[] = new int[]{0,0,0};
        for (int i = 0; i < n; i++) {
            for(int j=0;j<3;j++){
                coordinates[j] = coordinates[j] + sc.nextInt();
            }
        }
        sc.close();
        for(int j=0;j<3;j++){
            if(coordinates[j]!=0){
                System.out.println("NO");
                return;
            }
        }
       

        System.out.println("YES");

   
        
    }
}