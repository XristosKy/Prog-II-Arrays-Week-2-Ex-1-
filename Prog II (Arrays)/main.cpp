//Main.cpp
//Created By Christos Kyriakou at 13/02/2024.
//Prog II (Arrays)

#include <iostream>

using namespace std;

const int MAX=15;

int main(){
    
    int num[MAX];
    
    for(int  i=0;i<MAX;i++)
        num[i]=0;
    
    for(int i=0;i<MAX;i++)
        if(i%2==1)num[i]=-1;
    
    for(int i=0;i<MAX;i++)
        if(i%2==0)
        {
            cout<<"Enter value for pos: "<< i <<":" ;
            cin>>num[i];
            
        }
            
    for(int i=0;i<MAX;i++)
        cout<<i<<":"<<num[i]<<endl;
    
    return 0;
}
