#include <iostream>
using namespace std;

int maksimal = 10;
string arrayBuku[10];
int top = 0;
	
void pushArray(string data){
	if( top >=maksimal ){
		cout << "Data Penuh" << endl;
	}else{
			arrayBuku[top] = data;
			top++;
		}
}
		
void displayArray(){
	cout << "Data stack array" << endl;
		for( int i = maksimal - 1; i >= 0; i--){
			if( arrayBuku[i] != "" ){
				cout << "Data : " << arrayBuku[i] << endl;
		}
	}
	cout << "\n" <<endl;
}
int main(){
		pushArray("Matematika");
		displayArray();
		pushArray("B jepun");
		displayArray();
}
