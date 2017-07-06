
public class RepeatedNumber {
public static void main(String[] args) {
		int[] a={21,78,31,44,19,21,33,78,62};
		int flag=0;
		int i,j;
		for(i=0;i<a.length;i++){
			for(j=0;j<a.length;j++){
				if(a[i]==a[j]){
					flag=1;
				}
			}
			if(flag==1){
				break;
			}
		}
		System.out.println(a[i]);
	}

}
