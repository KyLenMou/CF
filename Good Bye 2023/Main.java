    import java.io.BufferedReader;
    import java.io.IOException;
    import java.io.InputStreamReader;
    import java.math.BigInteger;
import java.util.HashMap;
import java.util.Map;

    public class Main {
        static BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        public static void main(String[] args) throws IOException {
            int T = Integer.parseInt(r.readLine());
            while (T-- > 0)
                solveD();
        }
        static void solveD() throws NumberFormatException, IOException {
            int n = Integer.parseInt(r.readLine());
            if (n == 1) {
                System.out.println(1);
                return;
            }
            f(n,1,9);
            f(n,9,1);
            System.out.println("196" + "0".repeat(n-3));
        }
        static void f(int n, int a, int b) {
            for (int i = 1, d = 0; i <= n/2; i++, d++) {
                System.out.print(a);
                for (int j = 1; j <= d; j++) System.out.print(0);
                System.out.print(6);
                for (int j = 1; j <= d; j++) System.out.print(0);
                System.out.print(b);
                for (int j = 1; j <= n - 3 - d * 2; j++) System.out.print(0);
                System.out.println("");
            }
        }
        static void solveC() throws NumberFormatException, IOException {
            long n = Integer.parseInt(r.readLine());
            String line[] = r.readLine().split(" ");
            long num = 0, cnt = 0;
            for (int i = 0; i < n; i++) {
                long a = Long.parseLong(line[i]); 
                if (a % 2 == 1) cnt++;
                num += a;
                if (i == 0) System.out.print(num + " ");
                else if (i == 1) System.out.print(num / 2 * 2 + " ");
                else System.out.print(num - cnt / 3 - (cnt % 3 == 1 ? 1 : 0) + " ");
            }
            System.out.println("");
        }
        static void solveB() throws NumberFormatException, IOException {
            String line[] = r.readLine().split(" ");
            long a = Integer.parseInt(line[0]);
            long b = Integer.parseInt(line[1]);
            if (b % a == 0) System.out.println(b * b / a);
            else {
                System.out.println(a * b / gcd(a, b));
            }
            
        }
        static long gcd(long a, long b) {
            return b % a == 0 ? a : gcd(b, a % b);
        }

        static void solveA() throws NumberFormatException, IOException {
            String line[] = r.readLine().split(" ");
            long n = Integer.parseInt(line[0]);
            long k = Integer.parseInt(line[1]);
            String line1[] = r.readLine().split(" ");
            long num = 1;
            for (String a : line1) {
                num *= Integer.parseInt(a);
            }
            // System.out.println(num);
            if (2023 % num == 0) {
                System.out.println("yes");
                System.out.print(2023L / num + " ");
                for (int i = 2; i <= k; i++) {
                    System.out.print("1 ");
                }
                System.out.println("");
            } 
            else {
                System.out.println("no");
            }
        }

    }