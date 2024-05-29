import java.io.*;

public class A {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    static void solve() throws Exception {
        int ans = 0;
        int n = Integer.parseInt(br.readLine());
        String s = br.readLine();
        for (int i = 0; i < s.length(); i++) {
            if (i != s.length() - 1 && s.charAt(i) == '*' && s.charAt(i+1) == '*') break;
            if (s.charAt(i) == '@') ans++;
        }
        System.out.println(ans);
    }
    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for (int i = 1; i <= T; i++) {
            solve();
        }
    }
}