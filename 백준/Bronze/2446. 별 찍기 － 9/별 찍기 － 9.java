import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int n = s.nextInt();
    int snum = 2*n - 1;
    int blank = 0;
    
    for (int i = 0; i < 2*n - 1; i++) {
      for (int j = 0; j < blank; j++)
        System.out.print(" ");
      for (int j = 0; j < snum; j++)
        System.out.print("*");
      
      if (i < n-1) {snum-=2; blank++;}
      else {snum+=2; blank--;}
      System.out.println("");
    }
    
    }
}