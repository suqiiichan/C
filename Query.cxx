#include <iostream>
using namespace std;

struct usqi{
	int data[10];
	int top;
	};

usqi tumpuk;
void push( int input ){
	tumpuk.top++;
	tumpuk.data[tumpuk.top] = input;
	}

int pop(){
	return tumpuk.data[tumpuk.top];
	}

void awal(){
	tumpuk.top = -1;
	}

bool kosong(){
	if(tumpuk.top == -1){
		return 1;
		}else{
			return 0;
			}
	}
bool penuh(){
	if(tumpuk.top == 9){
		return 1;
		}else{
			return 0;
			}
	}
void print(){
	int i;
	cout << "Data" <<endl;
	for(i = 0; i <= tumpuk.top; i++){
		cout <<tumpuk.data[i] << " ";
		}
	}
int main(){
	int pilih, input;
	awal();
	do{
		cout << "1. Push" <<endl;
		cout << "2. Pop" <<endl;
		cout << "3. Print" <<endl;
		cout << "4. clear" <<endl;
		cout << "5. exit" <<endl;
		cin>>pilih;
		switch(pilih){
			case 1:{
				if(penuh() == 1){
					cout << "Tumpukkan Penuh";
					}else{
						cout <<"Data yang di push: ";
						cin>>input;
						push(input);
						}
						break;
					}
					case 2:{
						if(kosong() == 1){
							cout << "tumpukan kosong";
							}else{
								cout << "data yang di pop" <<pop<<endl;
								}
								break;
						}
						case 3:{
							if(kosong() == 1){
							cout << "tumpukan kosong";
							}else{
								print();
								}
								break;
						}
						case 4:{
							awal();
							break;
							}
			}
		}while(pilih >= 1 && pilih <= 4);
		return 0;
	}
