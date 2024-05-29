import java.io.*;

public class B {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    static void solve() throws Exception {
        int n = Integer.parseInt(br.readLine());
        // 读n个int
        String[] s = br.readLine().split(" ");
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(s[i]);
        }
        int cur = a[0];
        for (int i = 1; i < a.length; i++) {
            if (a[i] <= cur) {
                cur = (cur + a[i]) / a[i] * a[i];
            }
            cur = Math.max(cur, a[i]);
        }
        System.out.println(cur);
    }
    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for (int i = 1; i <= T; i++) {
            solve();
        }
    }
}