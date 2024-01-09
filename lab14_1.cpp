#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    int x =1 ;
    for(int i=1;i<N;i++){
        T current = d[i];
        int j = i-1;
        while(j>=0){
			if(d[j]<current){
				d[j+1]=d[j];
				if(j==0) d[j]=current;
			}else{
				d[j+1]=current;
				break;
			}
            j--;
        }
        d[j+1] = current;
        cout << "Pass " << x << ":";
		x++;
        for(int k =0;k<N;k++) cout << d[k] << " ";
        cout << "\n";
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
