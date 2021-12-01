#include<iostream>
#include "lib.h"
using namespace std;

/*bool isp(int i, int n){
    if(n==i){
        return true;}
    else if(n%i==0){
        if(i==n){return true;}
        else{return false;}
    }else{
        return isp(i+1,n);}
    }*/

int main(){
    int num;
    cin>>num;
    if(num!=1){
        if( isp(2,num)==true){
            cout<<"numero primo";
        }
        else{cout<<"numero non primo";}
        //isp(2,num) ? cout<<"numero primo" :cout<<"numero non primo";
    }
    else{
        cout<<"primo"<<endl;
    }


}