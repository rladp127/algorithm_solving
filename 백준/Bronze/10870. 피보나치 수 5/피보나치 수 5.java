import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Main stepJ = new Main();
        stepJ.j06();
    }

    void j06() {			
      Scanner s = new Scanner(System.in);
      int num = s.nextInt();
      System.out.println(fibonacci(num));		

}	
  
  int fibonacci(int n) {		
    if (n <= 1) return n;		
    else return fibonacci(n-2) + fibonacci(n-1);	}
}