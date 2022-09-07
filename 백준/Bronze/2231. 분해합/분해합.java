import java.util.Scanner;
/*
분해합
입력 받을 숫자 M
알아낼 숫자 N

M을 입력 받고, int i를 1 ~ M
String str = Integer.toString(i)
int sum = 0;
for (int j = 0 ~ str.length())
  sum += str[j].parseInt +...+ i
  if (sum == M) break;
sum 출력하기
*/

class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int M = s.nextInt();
        int N = 0;

        for (int i = 1; i <= M; i++) {
            int sum = 0;
            String str = Integer.toString(i);

            for (int j = 0; j < str.length(); j++) {
                sum += str.charAt(j)-'0';
            }
            sum += i;
            if (sum == M) {
                N = i;
                break;
            }
        }
        System.out.print(N);
    }
}