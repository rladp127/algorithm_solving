import java.util.Scanner;
/*
좌표를 입력 받아 사분면 알아내기
*/
class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int x = s.nextInt();
    int y = s.nextInt();

    if (x > 0 && y > 0) System.out.print("1");
    else if (x < 0 && y > 0) System.out.print("2");
    else if (x < 0 && y < 0) System.out.print("3");
    else System.out.print("4");
  }
}