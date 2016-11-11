public class HelloWorld{
	public static void main(String[] args){
		new HelloWorld().print();
	}
	public static native void print(); 
	static{
		System.loadLibrary("HelloWorld");
	}
}