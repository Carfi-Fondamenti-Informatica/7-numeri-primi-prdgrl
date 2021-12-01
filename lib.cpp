//
// Created by simon on 01/12/2021.
//
#include "lib.h"
bool isp(int i,int n){
    if(n==i){
        return true;}
    else if(n%i==0){
        if(i==n){return true;}
        else{return false;}
    }else{
        return isp(i+1,n);
    }
}
