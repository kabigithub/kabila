public class Number {
	public static String LowestNumber(String num, int n1) {
		if (num == null || num.length() < n1) {
			return null;
		} else if (num.length() > n1) {
			int removed = 0;
			for (int i = 0, j = 1; removed != n1 && j != num.length();) {
				if (num.charAt(i) > num.charAt(j)) {
					num = num.substring(0, i)
							+ num.substring(j, num.length());
					System.out.println(num);
					i = 0;
					j = 1;
					removed++;
				} else {
					i++;
					j++;
				}
			}
		}
		return null;
	}

	public static void main(String[] args) {
		LowestNumber("2200010300", 4);
	}
}
