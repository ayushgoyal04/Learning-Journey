import static java.lang.Math.max; //ease of calling
import static java.lang.Math.min; //ease of calling
import static java.lang.Math.abs; //ease of calling
import static java.lang.Math.pow; //ease of calling
import java.io.*;// for input-output
import java.util.*; //for Collections Framework, Arrays.sort, etc
import java.math.*; //for BigInteger Class, etc
 
public class Solution {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
 
        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }
 
        String next() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
 
        int nextInt() {
            return Integer.parseInt(next());
        }
 
        long nextLong() {
            return Long.parseLong(next());
        }
 
        double nextDouble() {
            return Double.parseDouble(next());
        }
 
        String nextLine() {
            String str = "";
            try {
                str = br.readLine().trim();
            } catch (Exception e) {
                e.printStackTrace();
            }
            return str;
        }
    }
 
    static class FastWriter {
        private final BufferedWriter bw;
 
        public FastWriter() {
            this.bw = new BufferedWriter(new OutputStreamWriter(System.out));
        }
 
        public void print(Object object) throws IOException {
            bw.append("" + object);
        }
 
        public void println(Object object) throws IOException {
            print(object);
            bw.append("\n");
        }
 
        public void close() throws IOException {
            bw.close();
        }
    }
 
    public static void main(String[] args) {
        try {
            FastReader sc = new FastReader();
            FastWriter out = new FastWriter();
            int testCases = sc.nextInt();
            while (testCases-- > 0) {
                // write code here
                int n = sc.nextInt();
                String s = sc.nextLine().toLowerCase();
                if (n < 4) {
                    System.out.println("NO");
                } else {
                    boolean possible = true;
                    if (s.indexOf('m') == -1 || s.indexOf('e') == -1 || s.indexOf('o') == -1 || s.indexOf('w') == -1) {
                        possible = false;
                    }
                    if (s.indexOf('o') > s.indexOf('w') || s.lastIndexOf('o') > s.indexOf('w')) {
                        possible = false;
                    }
                    if (s.indexOf('e') > s.indexOf('o') || s.lastIndexOf('e') > s.indexOf('o')) {
                        possible = false;
                    }
                    if (s.indexOf('m') > s.indexOf('e') || s.lastIndexOf('m') > s.indexOf('e')) {
                        possible = false;
                    }
                    for (char c : s.toCharArray()) {
                        if (c != 'm' && c != 'e' && c != 'o' && c != 'w') {
                            possible = false;
                            break;
                        }
                    }
                    if (possible) {
                        System.out.println("YES");
                    } else {
                        System.out.println("NO");
                    }
                }
 
            }
            out.close();
        } catch (Exception e) {
            e.printStackTrace();
            return;
        }
    }
}