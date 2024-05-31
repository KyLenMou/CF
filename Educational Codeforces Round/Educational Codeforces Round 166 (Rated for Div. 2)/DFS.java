import java.io.*;
import java.util.*;

public class DFS {
    static int n = 0;
    static int arr[], vis[];
    static ArrayList<Integer> a[];
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    public static void main(String[] args) throws NumberFormatException, IOException {
        n = Integer.parseInt(br.readLine());
        String lines[] = br.readLine().split(" ");
        a = new ArrayList[n+1];
        Arrays.setAll(a, e -> new ArrayList<>());
        for (int i = 0; i < n; i++) {
            int t = Integer.parseInt(lines[i]);
            a[i+1].add(t);
        }
        // arr = new int[20];
        vis = new int[n+1];
        // dfs(5);
        Queue<Integer> q = new LinkedList<>();
        q.add(3);
        while (!q.isEmpty()) {
            int t = q.poll();
            vis[t] = 1;
            bw.write(t + " ");
            for (int ne : a[t]) {
                if (vis[ne] == 1) continue;
                q.add(ne);
            }
        }
        bw.flush();
        bw.close();
    }
    // static void dfs(int u) {
    //     if (vis[u] == 1) return;
    //     vis[u] = 1;
    //     System.out.print(u + " ");
    //     for (int ne : a[u]) {
    //         dfs(ne);
    //     }
    // }
    // static void dfs(int u) throws IOException {
    //     if (u > n) {
    //         for (int i = 1; i <= n; i++) {
    //             System.out.print(arr[i] + " ");
    //         }
    //         System.out.println("");
    //         return;
    //     }
    //     for (int i = 1; i <= n; i++) {
    //         if (vis[i] == 1) continue;
    //         arr[u] = i;
    //         vis[i] = 1;
    //         dfs(u+1);
    //         vis[i] = 0;
    //     }
    // }
}