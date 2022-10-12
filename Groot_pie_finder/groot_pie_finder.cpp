// Problem: Groot's pie finder
// Solve: By recursion 

#include<bits/stdc++.h>
using namespace std;

void grootSolve(int i,int s,int arr[],vector<int> &ds,vector<int> &ans,int t, int n){
	// Base Case:
		if(i==n){
			if(t==0){
				for(auto i:ds){
					cout<<i<<" ";
				}
				cout<<endl;
				return;
			}
			else return ;
		}
	// Checking element is good for our requirement or not.
		// Solve Recursive
		if(arr[i]<=t){
			// Taking element at index i and store that index in (ds)
			ds.push_back(i);
			grootSolve(i+1,s,arr,ds,ans,t-arr[i],n);
			//Not taking the element
			ds.pop_back();
		}
		else grootSolve(i+1,s,arr,ds,ans,t,n);
	
		for(auto i:ans){
				cout<<i<<" ";
			}cout<<endl;
	}

int main(){
	int arr[] ={8, 4, 3, 2, 6, 5};
	int n= sizeof(arr)/sizeof(arr[0]);
	int t =7;
	int i=0;
	vector<int> ans;
	vector<int> ds;
	grootSolve(i,0,arr,ans,ds,t,n);
	return 0;
}