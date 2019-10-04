#include <iostream>
#include <fstream>
#include <sstream> 

using namespace std;
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type)) 

 main(){
	ifstream inFile;
	short loop=0;
	string line;
	int array[301];
    inFile.open("E:\\cek.txt");
    ofstream myfile ("E:\\hasil.txt");
    if (!inFile) {
    cerr << "Unable to open file datafile.txt";
    exit(1);   // call system to stop	
    }else{
	    	while(!inFile.eof()){
	            getline (inFile,line); //get one line from the file
	            stringstream geek(line); 
	            geek >> array[loop]; 
	           
	            cout << array[loop] << endl; //and output it
	            loop++;
	    }
	    inFile.close(); 
	    int batas = array[0];
	    int a[batas];
	    int b[batas];
	    int k[batas];
	    int x[batas];
	    int size = my_sizeof(array)/my_sizeof(array[0]);
	    int arr2[batas][3];
	    int p=1; 
			for(int i = 0 ; i<batas;i++){
				for(int x=0;x<3;x++){
					arr2[i][x] = array[p];
					p++;
				}
			}
			
			cout<<endl<<"======="<<endl;
//			
			for(int i=0;i<batas;i++){
				for(int u=0;u<3;u++){
					cout<<arr2[i][u]<<" ";
				}
				cout<<endl;
			}
			cout<<endl<<"======="<<endl;
	    
	    for(int i = 0 ; i<batas;i++){
	    		a[i]= arr2[i][0];
	    		b[i]= arr2[i][1];
	    		k[i]= arr2[i][2];
		}
	    
//    	for(int i=0;i<batas;i++){
//    		cout<<"ini b"<<i<<" = "<<b[i]<<endl;
//		}
    	
    	for(int i=0;i<batas;i++){
	        int tmp=0;
	        for(int n=a[i];n<=b[i];n++){
	            if(n%k[i] == 0){
	                tmp++;
	            }
	        }
	        x[i] = tmp;
	    }

	    if (myfile.is_open())
		  {
		    for(int count = 0; count < batas; count ++){
		        myfile << "Case "<<count+1<<": "<<x[count]<<endl;
		    }
		    myfile.close();
		  }
	}
	
}
