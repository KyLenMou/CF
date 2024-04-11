import java.io.*;
import java.util.Arrays;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException {
        int T;
        T = Integer.parseInt(br.readLine());
        while (T-- > 0) solve();
    }
    static void solve() throws IOException {
        String line[];
        line = br.readLine().split(" ");
        int n;
        long m,k;
        n = Integer.parseInt(line[0]);
        m = Integer.parseInt(line[1]);
        k = Integer.parseInt(line[2]);
        P a[] = new P[n+1];
        line = br.readLine().split(" ");
        for (int i = 0; i < line.length; i++) {
            a[i+1] = new P(Integer.parseInt(line[i]), i+1);
        }
        Arrays.sort(a, 1, n+1, (P x, P y) -> {
            if (x.x == y.x) return x.y - y.y;
            return x.x - y.x;
        });
        long d = (m + k - 1) / m;
        int b[] = new int[n+2];
        for (int i = 1; i <= d; i++) {
            b[a[i].y+1] += (i == d ? (k % m == 0 ? m : k % m) : m);
        }
        for (int i = 1; i <= n; i++) {
            b[i] += b[i-1];
            // System.out.print(b[i] + " ");
        }
        // System.out.println();
        long ans = 0;
        for (int i = 1; i <= d; i++) {
            ans += (a[i].x += b[a[i].y]) * (i == d ? (k % m == 0 ? m : k % m) : m);
        }
        System.out.println(ans);
    }
}

class P {
    int x;
    int y;
    P(int x, int y) {
        this.x = x;
        this.y = y;
    }
}