import java.util.Scanner;
import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    List<Integer> num = new ArrayList<>();
    List<Integer> bigger = new ArrayList<>();
    
    int N; int M;
    
    N = s.nextInt(); M = s.nextInt();

    for (int i = 0; i < N; i++) {
      int number; number = s.nextInt();
      num.add(number);
    }

    // 모든 경우의 카드 합 (M보다 작으면 List에 추가)
    for (int i = 0; i < N-2; i++)
      for (int j = i+1; j < N-1; j++)
        for (int z = j+1; z < N; z++) {
          int sum = num.get(i) + num.get(j) + num.get(z);
          if (sum <= M) bigger.add(sum);
        }

    int max = bigger.get(0);
    // M보다 작은 카드의 합들 중 가장 큰 것 구하기
    for (int i = 1; i < bigger.size(); i++)
      if (bigger.get(i) > max) max = bigger.get(i);

    System.out.print(max);
  }
}
/*
백준 블랙잭
N장의 카드, 숫자 M
N장의 카드 중 3개 골라서 -> M을 넘지 않지만 최대한 가깝게

첫 줄에 카드 개수(N)와 M 주어짐
다음 줄에 카드 수

변수 선언 N M 하고, 카드는 List에 저장
모든 경우의 수 생각 (3중 for문)
M보다 작고, 그들중 가장 큰 수 출력
*/