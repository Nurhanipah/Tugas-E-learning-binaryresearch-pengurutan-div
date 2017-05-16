#include<iostream>
using namespace std;

int main(){
	int data[10], i, j, k, key, tempt;
	bool ketemu = false; 
	
	for (int i=0 ; i<10; i++){
		cout << " masukan angka ke " << (i+1) << " : ";
		cin >> data[i];
	}
	
	cout <<endl;
	cout << " Data Sebelum Diurutkan "<<endl;
	for(int i=0; i<10; i++){
		cout << data[i] << " ";
		
	}
	
	
	cout << endl;
	
	for(int i=0; i<9; i++){
		for(j=i+1; j<10; j++){
			if (data[i] > data[j]){
				tempt = data[i];
				data[i]=data[j];
				data[j]=tempt;
				
			}
		}
	}
	cout<<endl;
	cout << " Data setelah diurutkan : " << endl;
	for (int i=0; i<10; i++){
		cout << data[i] << " ";
	}
	cout<<endl;
	cout <<"\n Masukan Angka Yang Dicari : ";
	cin >> key;
	
	
	i=0;
	k=j-1;
	
	while(i<=k){
		j=(i+k)/2;
		if(key==data[j]){
			ketemu=true;
			break;
		}
		else if(key<data[j]){
		k=j-1;
		}
	}
	if(ketemu==true){
	cout << " Data ditemukan!!! "<<endl;
	}else{
	cout << " Data Tidak Ditemukan!!! "<< endl;
		
	}
	
	
	return 0;
}
