import java.util.Scanner;
/*
45분 일찍 알람 설정하기
min < 45 => 
if (hour == 0) hour = 23
else hour -= 1
, min = 60 + min - 45

else => min - 45
*/
class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int hour = s.nextInt();
    int min = s.nextInt();

    if (min < 45) {
      if (hour == 0) hour = 23;
      else hour -= 1;
      min = 60 + min - 45;
    }
    else min -= 45;

    System.out.print(hour + " " + min);
  }
}