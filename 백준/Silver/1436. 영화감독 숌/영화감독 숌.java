import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();

        int num = 1;
        int checkNum = 666;

        while(true) {
            checkNum++;
            String check = String.valueOf(checkNum);
            if (check.contains("666")) num++;
            if(N == num) break;
        }

        if (N == 1) System.out.println("666");
        else System.out.println(checkNum);
    }
}