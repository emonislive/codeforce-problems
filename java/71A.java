import java.util.Scanner;

public class TooLong {
    public static void main(String[] args) {     
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();   
        if (1 <= n && n <= 100) {         
            for (int i = 0; i < n; i++) {
                String message = sc.nextLine();
                int arrayLength = message.length();
                
                if (arrayLength <= 10) {
                    System.out.println(message);
                } else {
                    System.out.printf("%s%d%s\n",message.charAt(0), (arrayLength - 2), message.charAt(arrayLength - 1));
                }
            }
        }
        sc.close(); 
    }
}
