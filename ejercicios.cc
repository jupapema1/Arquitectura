#include <iostream>
#include <stdlib.h>


using namespace std;

int mult(int a, int b){
    int n=0;
    for(int i=0; i<a; i++)
        n+=b;
    return n;
}

int pot(int a, int b){
    int sum=a,n=a;
    if(b==0)
        return 1;
    for(int i=0;i<b-1;i++){
        n=mult(sum,a);
        sum=n;
    }
    return n;

}

int pol(int k[], int x, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=mult(k[i],pot(x,n-i-1));
    }
    return sum;
}

int fact(int n){
    int sum=1;
    while(n>0){
        sum*=n;
        n--;
    }
}

int divi(int a,int b){
    int sum=0,i=0;
    while(a<b){
        a=a-b;
        i++;
    }
    return i;
}

int main(){
    int k[100]={4,2,1,10,20};
    //cout<<pot(2,1);
    //cout<<pol(k,2,5)<<endl;
    //cout<<fact(5)<<endl;
    cout<<divi(45,2);
    return 0;
}
