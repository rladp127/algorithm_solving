import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);

    int caseNum = s.nextInt();
    int[] total = new int[caseNum];
    
    for (int j = 0; j < caseNum; j++) {
      String arr = s.next();
      int scr = 0;
      char[] arrlist = arr.toCharArray();
    
      for (int i = 0; i < arr.length(); i++) {
        if (arrlist[i] == ('O')) { 
          scr++;
          total[j] += scr; }
          else scr = 0;
      }    
    }
    for (int i = 0; i < caseNum; i++)
      System.out.println(total[i]);

    }
  
}
  