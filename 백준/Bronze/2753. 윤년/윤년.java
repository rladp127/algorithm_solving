import java.util.Scanner;
/*
윤년이면 1, 아니면 0 출력
4의 배수이면서 400의 배수이면서 100의 배수가 아님
*/
class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int year = s.nextInt();

    if (year % 4 == 0 && year % 400 == 0)     
      System.out.print("1");
    else if (year % 4 == 0 && year % 100 != 0)     
      System.out.print("1");
    else System.out.print("0");
  }
}