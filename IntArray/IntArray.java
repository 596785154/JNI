public class IntArray{
	static{
		System.loadLibrary("IntArray");
	}
	private static native int sumArray(int[] arr);
	public static void main(String[] args){
		IntArray mIntArray = new IntArray();
		int[] arr = new int[10];
		for(int i=0;i<10;i++){
			arr[i] = i;
		}
		int sum = mIntArray.sumArray(arr);
		System.out.println("sum = "+sum);
	}
}