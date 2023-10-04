#include<iostream>
using namespace std;
//Q 1
void square(int n){for(int i =1;i<= n;i++){
    cout<<i<<"^2 = "<<i*i<<endl;
}}
//Q 2
float arofcr(float r){
    return 3.14*r*r;
}
//Q 3
void oddnum(int a,int b){
    for(int i = min(a,b)+1;i<max(a,b);i++){
    if(i%2 != 0){
        cout<<i<<endl;
    }
}
}
//Q 4
void cns(int x){int n =1;
int a=1,b =10;
    for(int i =1; i<=n;i++){
        if(x>=a && x<b){
            cout<<"number of digits in enter number is "<<i;
        }
        else{
            a *=10;
            b*=10;
            n++;
        }
    }

}

int main(){int n;
cout<<"Enter a number : ";
cin>>n;
cns(n);

}