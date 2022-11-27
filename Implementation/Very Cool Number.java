import java.util.Scanner;

class TestClass {

public static boolean cool(long n, long k) {      

        long p, i, c = 0;

        long[] a = new long[10_000];

        i = 0;

        while(n > 0) {

            a[(int)i] = n % 2;

            n /= 2;

            i++;

        }

        p = i;

        for(i = p - 1; i >= 2; i--) {

            if(a[(int)i] == 1 && a[(int)(i - 1)] == 0 && a[(int)(i - 2)] == 1) {

                c++;

            }

        }

        if(c >= k) {

            return true;

        } else {

            return false;

        }

    }

    public static int solution(long r, long k) {

        long c = 0;

        for(long i = 1; i <= r; i++) {

            if(cool(i, k)) {

                c++;

            }

        }

        System.out.println(c);

        return 0;

    }

    public static void main(String[] args) {

        long t, r, k;

        t = STDIN_SCANNER.nextLong();

        while(t-- != 0) {

            r = STDIN_SCANNER.nextLong();

            k = STDIN_SCANNER.nextLong();

            solution(r, k);

        }

    }

    public final static Scanner STDIN_SCANNER = new Scanner(System.in);

}

