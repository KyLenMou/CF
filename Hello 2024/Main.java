import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class Main {
    static BufferedReader r = new BufferedReader(new InputStreamReader(System.in));

    static void solve() throws NumberFormatException, IOException {
        int n = Integer.parseInt(r.readLine());
        String line[] = r.readLine().split(" ");
        int a[] = new int[n+1];
        for (int i = 1; i <= n; i++) {
            a[i] = Integer.parseInt(line[i-1]);
        }
        
        ArrayList<Integer> p = new ArrayList<>();
        ArrayList<Integer> q = new ArrayList<>();
        p.add((int)1e9);
        q.add((int)1e9);

        for (int i = 1; i <= n; i++) {
                int pp = p.get(p.size()-1), qq = q.get(q.size() - 1);
                boolean f1 = a[i] <= pp, f2 = a[i] <= qq;
                if (f1 == f2) {
                    if (pp < qq) p.add(a[i]);
                    else q.add(a[i]);
                } 
                else if (f1) {
                    p.add(a[i]);
                }
                else {
                    q.add(a[i]);
                }
        }
        int ans = 0;
        for (int i = 2; i < p.size(); i++) {
            if (p.get(i-1) < p.get(i)) ans++;
        }
        for (int i = 2; i < q.size(); i++) {
            if (q.get(i-1) < q.get(i)) ans++;
        }
        // for (int i : q) System.out.println(i);
        System.out.println(ans);
    }

    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(r.readLine());
        while (T-- > 0)
            solve();
    }
}