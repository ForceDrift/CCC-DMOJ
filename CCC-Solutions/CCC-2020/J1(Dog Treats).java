import java.util.*;  

public class print {

	public static int totalTreats(int s, int m, int l) {
		return (s * 1 + 2 * m + 3 * l);
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int s, m ,l;
		s = sc.nextInt();
		m = sc.nextInt();
		l = sc.nextInt();

		int total = totalTreats(s,m,l);
		
		if (total < 10) {
			System.out.print("sad");
		}
		else {
			System.out.print("happy");
		}
		
	}
	
	
}