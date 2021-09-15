#include<iostream>
using namespace std;


void swap(int arr[],int i,int j){
	int temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	return;
}

int partition(int arr[],int s, int e){
	if(s==e) return s;
	else{
		int pivot=arr[e];
		//cout<<pivot<<"\n\n\n";
		int i=s-1;
		for(int j=s;j<e;j++){
			if(arr[j]<=pivot){
				//cout<<arr[j]<<" \n";
				i++;
				swap(arr,i,j);
			}
		}
		swap(arr,i+1,e);
		return i+1;
	}
}

void quicksort(int arr[],int s, int e){
	if(s>=e) return;
	else{
		int pi=partition(arr,s,e);
		quicksort(arr,s,pi-1);
		quicksort(arr,pi+1,e);
		return;
	}
}

int main(){
	int arr[6]={7,5,3,4,2,1};
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	quicksort(arr,0,5);
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
