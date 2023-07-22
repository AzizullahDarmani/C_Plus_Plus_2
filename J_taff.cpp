//#include<iostream>
//#include<cmath> 
//using namespace std; 
//int main() {
//	int a,b[1000], i, zero=0; 
//	cin>>a; 
//	for (i=0; i<a; i++)
//	cin>> b[i]; 
//	for(i=0; i<a; i=0)
//	if (b[i]==0) 
//	zero++; 
//	cout<< count(0); 
//	
//}

#include <iostream>

using namespace std;

int main(){
//	int n, r, count = 0;
//	cin >> n;
//	int arr[n];
//	for(int i = 0;i < n; i++){
//		cin >> arr[i];
//	}
//	
//	for(int i = 0;i < n; i++){
//		while(arr[i]>0){
//			
//			r = arr[i] % 10;
//			
//			if(r == 0){
//				count++;
//			}
//			
//			arr[i] /= 10;
//		}
//	}
//	

	
//	cout << count;




//	int a,b,e=0; 
//	int d[a]; 
//	cin>>a; 
//	for(int i=0; i<a; i++){
//		cin>> d[i]; 
//		} 
//	for (int i=0; i<a; i++){
//		while (d[i]>0) {
//			b= d[i]%10; 
//			if (b==0){
//			
//			e++; 
//		}
//	d[i]/=10; 
//	}
//}
//	cout<< e << endl; 

//	int a,b,e=0; 
//	int d[a]; 
//	cin>>a; 
//	for(int i=0; i<a; i++) {
//		cin>> d[i]; 
//	}
//	for (int i=0; i<a; i++ ) {
//		while (d[i]>0) {
//			b= d[i]%10; 
//			if (b==0){
//				e++; 
//			}
//			d[i]/=10; 
//		}
//	}
//	cout << e << endl; 


	
//	int a,b,c=0; 
//	int d[a]; 
//	cin>> a; 
//	for(int i=0; i<a; i++) {
//		cin>> d[i]; 
//	} 
//	for (int i=0; i<a; i++) {
//		while (d[i]>0){
//			b=d[i]%10; 
//			if (b==0){
//
//			c++; 
//		}
//		d[i]/=10;
//	}
//	
//	
//}
//	cout<< c << endl; 

	
	
//	int a,b,c=0; 
//	int d[a]; 
//	cin>>a; 
//	for(int i=0; i<a; i++){
//		cin>> d[i]; 
//		
//	}
//	for(int i=0; i<a; i++){
//		while (d[i]>0){
//			b=d[i]%10; 
//			if(b==0){
//				c++; 
//			}
//			d[i]/=10; 
//		}
//	}
//		cout<< c << endl;  

	
	
// 	int a,b,c=0; 
// 	int arr[a]; 
// 	cin>>a; 
// 	for(int i=0; i<a; i++){
// 		cin>> arr[i]; 
// 	}
// for(int i=0; i<a; i++){
// 	while (arr[i]>0){
// 		b=arr[i]%10; 
// 		if(b==0){
// 			c++; 
// 		}
// 		arr[i]/=10; 
// 	}
// }
// cout<< "this is the final result: " << c << endl; 

// }






	//// short method: 
	// int a; 
	// cin>> a ;
	// int cnt ;
	// int arr[a] ;
	// for(int i=1; i<=a; i++){
	// 	cin>> arr[i] ; 
	// 	if (arr[i]%10==0) 
	// 	arr[i]/=10; 
	// 	cnt++; 
		
	// }
	// cout<< "count of zeros in array: "<< cnt ; 



//The c[i]/=10 operation is equivalent to dividing the number 
//by 10 and truncating any decimal places. For example, 
//if c[i] is initially equal to 345, the operation 
//c[i]/=10 will change its value to 34 in the first 
//iteration of the while loop, then to 3 in the second 
//iteration, and finally to 0 in the third iteration, 
//which is the termination condition of the while loop.
//
//By doing this operation, the code is checking each digit 
//of the number one by one, from right to left, until all 
//the digits are checked. Once all the digits are checked, 
//the while loop terminates, and the code moves on to the 
//next element in the array c




//The % operator is the modulus operator, which gives the 
//remainder of the division of the left operand by the 
//right operand. When the left operand is c[i] and the 
//right operand is 10, the modulus operation returns the 
//rightmost digit of c[i].
//
//For example, if c[i] is initially equal to 345, the 
//operation c[i]%10 will return 5, which is the rightmost 
//digit of c[i]. If c[i] is 340, the operation will 
//return 0, indicating that the rightmost digit of c[i] 
//is zero.






}