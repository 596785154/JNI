public class Prompt{
	static{
		System.loadLibrary("Prompt");
	}

	public static void main(String[] args){
		Prompt p = new Prompt();
		String str = p.getLine("I am java");
		System.out.println(str);
	}
	
	public static native String getLine(String str);
}