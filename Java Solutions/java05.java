import java.util.Scanner;

public class java05 {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int x=sc.nextInt();
                //Complete this line
                String str = String.format("%-15s",s1);
                String val = String.format("%03d",x);
                System.out.println(str+val);
            }
            System.out.println("================================");
            sc.close();
    }
}





