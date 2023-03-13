#include<iostream>
using namespace std;

long long int sqrtInteger(int n) {

	int s = 0;
	int e = n;
	long long int mid = s + (e-s)/2;

	long long int ans = -1;
	while(s<=e) {
		
		long long int square = mid*mid;

		if(square == n)
		{
			return mid;
		}
		if(square > n)
		{ 
			e = mid-1; 
		}
		else
		{
			ans = mid;
			s = mid+1;  
		}
		mid = s + (e-s)/2;
	}
	return ans;
}

double morePrecision(int n,int sol) {

	double factor = 1;
	double ans = sol;

	for(int i=1; i<=3; i++) {
		factor = factor/10;

		for(double j=ans; j*j<n; j=j+factor) {
			ans = j;
		}
	} 
	return ans;

}



int main() {

	int n;
	cout <<"Enter the number :";
	cin>>n;
	int sol = sqrtInteger(n);
	cout<<endl<<morePrecision(n,sol);


	return(0);

}