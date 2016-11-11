public class ObjectArray{
	static{
		System.loadLibrary("ObjectArray");
	}

	private static native int[][] init2DArray(int size);

	public static void main(String[] args){
		int[][] i2arr = init2DArray(3);
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				System.out.print(" " + i2arr[i][j]);
			}
			System.out.println();
		}
	}
}