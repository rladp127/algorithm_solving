import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    String[] num = new String[3];
    int[] onenum = new int[3];

    for (int i = 0; i < 3; i++) {
      num[i] = s.nextLine();
      num[i] = num[i].replaceAll(" ", "");
    }
    
    for (int i = 0; i < 3; i++) {   
      onenum[i] = num[i].length() - num[i].replace(String.valueOf("1"), "").length();
      if (onenum[i] == 0) System.out.println("D");
      else if (onenum[i] == 4) System.out.println("E");
      else if (onenum[i] == 3) System.out.println("A");
      else if (onenum[i] == 2) System.out.println("B");
      else if (onenum[i] == 1) System.out.println("C");
    }
    
  }
}