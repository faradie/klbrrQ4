#include <iostream>
#include <fstream>
#include <sstream> 
#include <ctime>


using namespace std;

 int main(){
 	int mainArr[] = {2,3,1,4,5,1,4,5,6,4,4,3,8};
 	int arr2[4][3];
	int k=1; 
	for(int i = 0 ; i<4;i++){
		for(int x=0;x<3;x++){
			arr2[i][x] = mainArr[k];
			k++;
		}
	}
	
	for(int i = 0 ; i<4;i++){
		for(int x=0;x<3;x++){
			cout<<arr2[i][x];
		}
		cout<<endl;
	}
	
	    return 0;
 }
