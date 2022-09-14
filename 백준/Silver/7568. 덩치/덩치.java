import java.util.ArrayList;
import java.util.Scanner;


class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        ArrayList<Integer> weight = new ArrayList<>();
        ArrayList<Integer> height = new ArrayList<>();
        ArrayList<Integer> rank = new ArrayList<>();

        int num = s.nextInt();

        for (int i = 0; i < num; i++) {
            int w = s.nextInt();
            int h = s.nextInt();
            weight.add(w);
            height.add(h);
        }

        for (int i = 0; i < num; i++) {
            int r = 0;
            for (int j = 0; j < num; j++) {
                if (j == i) continue;
                if (weight.get(i) < weight.get(j))
                    if (height.get(i) < height.get(j))
                        r++;
            }
            rank.add(r+1);
        }

        for (int i = 0; i < rank.size(); i++) {
            System.out.print(rank.get(i) + " ");
        }
    }
}