import java.io.*;

public class C {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    static void solve() throws Exception {
        String lines[];
        lines = br.readLine().split(" ");
        int n = Integer.parseInt(lines[0]);
        int m = Integer.parseInt(lines[1]);
        lines = br.readLine().split(" ");
        int a[] = new int[n+1];
        for (int i = 1; i <= n; i++) {
            a[i] = Integer.parseInt(lines[i-1]);
        }
        String s = br.readLine();
        int l = 1, r = n, p = 1;
        int b[] = new int[n+1];
        for (int i = 1; i <= n; i++) {
            if (s.charAt(i-1) == 'L') b[p++] = l++;
            else b[p++] = r--;
        }
        int ans[] = new int[n+1];
        ans[n] = a[b[n]] % m;
        for (int i = n - 1; i >= 1; i--) {
            ans[i] = ans[i+1] * a[b[i]] % m;
        }
        for (int i = 1; i <= n; i++) {
            bw.write(ans[i] + " ");
        }
        bw.write("\n");
        bw.flush();
    }
    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for (int i = 1; i <= T; i++) {
            solve();
        }
        bw.close();
    }
}