import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int times = s.nextInt();
    int num = s.nextInt();

    for (int i = 0; i < times; i++) {
      int n = s.nextInt();
      if (n < num) System.out.print(n +  " ");
    }
  }
}