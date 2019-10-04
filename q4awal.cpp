
#include <iostream>

using namespace std;

int main()
{   int batas;
    cin>>batas;
    int a[batas];
    int b[batas];
    int k[batas];
    int x[batas];
    for(int i=0;i<batas;i++){
        cin>>a[i];
        cin>>b[i];
        cin>>k[i];
    }
    for(int i=0;i<batas;i++){
        int tmp=0;
        for(int n=a[i];n<=b[i];n++){
            if(n%k[i] == 0){
                tmp++;
            }
        }
        x[i] = tmp;
    }
    for(int i=0;i<batas;i++){
        cout<<"Case "<<i+1<<": "<<x[i]<<endl;
    }
    return 0;
}
