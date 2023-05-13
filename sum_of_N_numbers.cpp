#include<iostream>
using namespace std;

int main(){
   int n,sum=0;
   cout<<"Enter the value of n"<<endl;
   cin>>n;
   while(n>0){
    sum+=n;
    n-=1;

   }
   cout<<"sumation is "<<sum;


}
