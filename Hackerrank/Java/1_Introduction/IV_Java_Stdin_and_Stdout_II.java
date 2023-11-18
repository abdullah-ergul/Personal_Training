import java.util.Scanner;


public class IV_Java_Stdin_and_Stdout_II {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Scanner in= new Scanner(System.in);
        int i = scan.nextInt();
        double d= scan.nextDouble();
        String s= in.nextLine();

        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
        scan.close();
        in.close();
    }
}
