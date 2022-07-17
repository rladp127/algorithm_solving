import java.util.Scanner;
/*
총 다섯번의 입력 -> 배열 선언(최소 1, 최대 15 글자)
word[5][15]
for (i 0 - 14)
j 0 - 4 word[j][i] 
if 비어 있으면(null) continue?
*/
class Main {
  public static void main(String[] args) {
    Main codingTest = new Main();
    codingTest.b05();
  }
  void b05(){
    Scanner s = new Scanner(System.in);
    String[] word = new String[5];
    char[][] cword = new char[5][15];
    for (int i = 0; i < 5; i++) {
      word[i] = s.next();
      for(int j = 0; j < word[i].length(); j++)
				cword[i][j] = word[i].charAt(j);
    }
    
    int max = 0;
    for (int i = 0; i < 5; i++)
      if(max < word[i].length()) max = word[i].length();
    
    for (int i = 0; i < max; i++) {
      for (int j = 0; j < 5; j++) {
        if(cword[j][i] == '\0')	continue;
				System.out.print(cword[j][i]);
      }
  }
    
}
}