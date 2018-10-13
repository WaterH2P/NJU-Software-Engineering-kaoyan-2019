
// 6 个相同的硬币分给 8 个不同的队伍，一共有多少种分法。
public class Q_1{

	public static void main(String args[]){
		int result = 0;
		result =
			C(8, 1) * A(1, 1) +							// 6
			C(8, 2) * A(2, 2) +							// 5 1
			C(8, 2) * A(2, 2) +							// 4 2
			C(8, 2) +									// 3 3
			C(8, 3) * A(3, 3) / A(2, 2) +				// 4 1 1
			C(8, 3) * A(3, 3) +							// 3 2 1
			C(8, 3)	+									// 2 2 2
			C(8, 4) * A(4, 4) / A(3, 3) +				// 3 1 1 1
			C(8, 4) * A(4, 4) / A(2, 2) / A(2, 2) +		// 2 2 1 1
			C(8, 5) * A(5, 5) / A(4, 4) +				// 2 1 1 1 1
			C(8, 6);									// 1 1 1 1 1 1
		System.out.println(result);

	}

	public static int A(int total, int numOfSelected){
		int result = 1;
		int totalSave = total;
		for( int i=0; i<numOfSelected; i++ ){
			result *= totalSave;
			totalSave--;
		}
		return result;
	}

	public static int C(int total, int numOfSelected){
		int result = 1;
		int totalSave = total;
		int index = 1;
		for( int i=0; i<numOfSelected; i++ ){
			result *= totalSave;
			result /= index;
			totalSave--;
			index++;
		}
		return result;
	}
}



