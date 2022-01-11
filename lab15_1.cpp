#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	T temp;
	for(int i = 1; i < N; i++){
		temp = d[i];
		int j;
		for(j = 1; j <= i; j++){
			if(temp > d[i-j])
				d[i-j+1] = d[i-j];
			else{
				break;
			}
		}
		d[i-j+1] = temp;
		
		cout << "Pass " << i << ":";
		for(int i = 0; i < 10; i++) cout << d[i] << " ";
		cout << endl;
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
