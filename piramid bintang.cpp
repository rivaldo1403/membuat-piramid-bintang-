#include <iostream>
using namespace std;
int main(){
	for(int a=0; a<5; a++){
		//jika a lebih besar dari 5 akan melakukan perulangan
		//ditambah sampai false
		for(int b=0; b<a+1; b++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int c=5; c>0; c--){
			//jika c lebih besar dari 0 akan melakukan perulangan
			//dikurang sampai false
		for(int d=1; d<c+1; d++){
			cout<<"*";
		}
		cout<<endl;
	}
} 
  
