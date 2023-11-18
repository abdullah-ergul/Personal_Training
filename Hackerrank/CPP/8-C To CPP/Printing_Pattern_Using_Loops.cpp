#include <iostream>


int main(){
	int n, i, j, k=1;
	std::cin >> n;
	int temp=n;
	
	for(i=1; i<=2*n-1; i++){
		if(i==1 || i==2*n-1){
			for(j=0; j<2*n-1; j++)
				std::cout << n << " ";
		}
		else if(i<n){
			for(j=0; j<2*n-1; j++){
				if(n-j >= n-i+1){
					std::cout << temp-- << " ";
					k++;
				}
				else if(j <= 2*n-1-k)
					std::cout << temp+1 << " ";
				else
					std::cout << ++temp << " ";
			}
			k=1;
		}
		else if(i==n){
			for(j=0; j<2*n-1; j++){
				if(temp==0){
					temp=1;
					for(j=n; j<2*n-1; j++){
						std::cout << ++temp << " ";
					}
					break;
				}
				std::cout << temp-- << " ";
				k++;
			}
			k=1;
		}
		else{
			for(j=0; j<2*n-1; j++){
				if(j < n-k-1)
					std::cout << temp-- << " ";
				else if(j < n+k)
					std::cout << temp << " ";
				else
					std::cout << ++temp << " ";
			}
			k++;
		}
		
		temp=n;
		std::cout << "\n";
	}
	
	return 0;
}
