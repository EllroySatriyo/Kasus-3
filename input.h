using namespace std;

class Input{
	public:
	void print(){
    harga=0;
		cout<<"Masukkan banyak pesananmu : ";
		cin>>pilih_menu;
		for(int i=1;i<=pilih_menu;i++){
			cout<<"Masukkan menu apa saja yang kamu inginkan : ";
			cin>>pilih;
			if(pilih==1){
				cout<<"Ayam Geprek\n";
				harga=harga+21000;
			}
			else if(pilih==2){
				cout<<"Ayam goreng\n";
				harga=harga+17000;
			}
			else if(pilih==3){
				cout<<"Udang Goreng\n";
				harga=harga+19000;
			}
			else if(pilih==4){
				cout<<"Cumi Goreng\n";
				harga=harga+20000;
			}
			else if(pilih==5){
				cout<<"Ayam Bakar\n";
				harga=harga+25000;
			}
			else{
				cout<<"Pilihanmu Tidak Tersedia";
			}
		}
		cout<<"Masukkan jarak rumahmu dalam KM : ";
		cin>>jarak;
	}
	void toFile(){
		tulis_data.open("api_data.txt");
		tulis_data<<harga<<endl;
		tulis_data<<jarak;
		tulis_data.close();
	}

	private:
	ofstream tulis_data;
	int pilih_menu,pilih,jarak,i,harga;
};