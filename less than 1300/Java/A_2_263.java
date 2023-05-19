import java.util.Scanner;

public class A_2_263 {
    public static void main(String[] args) {
        

        Scanner sc = new Scanner(System.in);

        int cell = 0;
        int res = 0;

        for (int i = 0; i < 5; i++) {
            for(int j=0;j<5;j++){
           

                cell =  sc.nextInt();
                if(cell!=0){
                    res = Math.abs(2-i)+ Math.abs(2-j);
                    System.out.println(res);
                    return;
                }

                
            }
        }
   
   

        System.out.println("YES");

   
        
    }
}