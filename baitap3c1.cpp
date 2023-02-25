public class baitap3 {
	public class Hinhvuong{
		private String tenHinh;
		public String getTenhinh(){
			return tenHinh;
		}
		private int canh;
		public Hinhvuong(String tenhinh, int canh){
			this.tenhinh=tenhinh;
			this.canh=canh;
		}
		public float tinhchuvi(){
			return (float) (this.canh*4);
		}
		public float tinhdientich(){
			return (float) (this.canh * this.canh);
		}
	}

	public class Hinhtron{
	private String tenhinh;
	public String gettenhinh(){
		return tenHinh;
	}
	private double bankinh;
	private double duongkinh;
	public double getduongkinh(){
		return duongkinh;
	}
	public Hinhtron(String tenhinh,double bankinh,double duongkinh){
		this.tenHinh =tenhinh;
		this.bankinh =bankinh;
		this.duongkinh =duongkinh;
	}
	public float tinhchuvi(){
		double PI=3.14;
		return (float) (this.bankinh * PI * 2);
	}
	public double tinhdientich(){
		double PI=3.14;
		return this.bankinh * this.bankinh * PI;
	}
}
