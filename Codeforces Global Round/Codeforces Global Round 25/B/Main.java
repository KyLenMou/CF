import java.io.*;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    public static void main(String[] args) throws IOException {
        int T;
        T = Integer.parseInt(br.readLine());
        while (T-- > 0) solve();
    }
    static void solve() throws IOException {
        String line[];
        line = br.readLine().split(" ");
        int n = Integer.parseInt(line[0]), k = Integer.parseInt(line[1]);
        line = br.readLine().split(" ");
        int a[] = new int[n+1];
        for (int i = 1; i <= n; i++) {
            a[i] = Integer.parseInt(line[i-1]);
        }
        int index = -1;
        for (int i = 1; i <= n; i++) {
            if (a[i] > a[k]) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            System.out.println(n - 1);
            return;
        }
        int ans = Math.max(index - 2,0);
        if (k < index) {
            System.out.println(ans);
            return;
        }
        int temp = a[k];
        a[k] = a[index];
        a[index] = temp;
        temp = (index == 1 ? 0 : 1);

        for (int i = index+1; i <= n; i++) {
            if  (a[i] > a[index]) {
                break;
            }
            temp++;
        }
        // System.out.println(ans + " " + temp);
        System.out.println(Math.max(ans,temp));
    }
}
