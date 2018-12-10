#include <iostream>

using namespace std;

int main(){
	
	for(int i=0; i <=10; i++){
		
		if(i == 8){
			//continue; //dalam bahasa c++ berfungsi untuk mengarahkan eksekusi proses program ke proses
			break; //dalam bahasa c++ berfungsi untuk keluar dari perulangan atau biasa disebut juga berhenti sejenak
		}
		cout << i << endl;
	}
	return 0;
}
