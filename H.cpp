#include<iostream>
#include<cmath>
using namespace std;       
int main()
{
//   int a, b[100], i, eve=0, odd=0;
//   cin>>a;
//   for(i=0; i<a; i++)
//      cin>>b[i];
//   for(i=0; i<a; i++)
//   {
//      if(b[i]%2==0)
//         eve++;
//      else
//         odd++;
//   }
//   if(eve>1)
//      cout<<eve;
//   else
//   {
//      if(eve==1)
//         cout<<1;
//      else
//         cout<<0;
//   } 
//   cout<< " ";
//   if(odd>1)
//      cout<<odd;
//   else
//   {
//      if(odd==1)
//         cout<<1;
//      else
//         cout<<0;
//   }
//   cout<<endl;
//
//
//  return 0;

//	int n,even=0,odd=0;
//	cin>>n;
//	int arr[n];
//	for(int i=0;i<n;++i){
//		cin>>arr[i];
//		if(arr[i]%2==0)
//		even++;
//
//		else
//		odd++;
//	}
//	cout<<even<<' '<<odd<<endl; 

//	int n, even=0, odd=0; 
//	int arrl[n]; 
//	cin>> n; 
//	for(int i=0; i<n; i++) {
//		cin>> arrl[i]; 
//		if(arrl[i]%2==0) 
//		even++; 
//		else 
//		odd++; 
//	}
//	cout<< even << " " << odd; 

	
	int a,even=0, odd=0; //NOTE: even++; counts the number of integers
	cin>>a;              //NOTe: even+=c[i]; this methood calculate the number mean it does the addition operation
	int c[a]; 
	for(int i=0; i<a; i++){
		cin>> c[i]; 
		if(c[i]%2==0)
		even++; 
		else 
		odd++; 
	}
	cout<< "this is the number of even numbers:"<< even<< endl; 
	cout<< "this is the number of odd numbers: "<< odd << endl; 
	
	
}
