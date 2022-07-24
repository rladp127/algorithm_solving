import java.util.Scanner;
 
public class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int[] num;
		int test = s.nextInt();
		
		for(int i = 0; i < test; i++) {
			int N = s.nextInt();
			num = new int[N];
			double sum = 0;

			for(int j = 0; j < N; j++) {
				int val = s.nextInt();
				num[j] = val;
				sum += val;
			}
			
			double aver = (sum / N) ;
			double count = 0;
			 
			for(int j = 0; j < N; j++) {
				if(num[j] > aver) {
					count++;
				}
			}
			System.out.printf("%.3f%%\n",(count/N)*100);

		}
	}
	
}