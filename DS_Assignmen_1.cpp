#include<iostream>
using namespace std;

int main(){

       int SOA1,SOA2,SOA3;



       cout<<"Enter how many element are there in A : ";
       cin>>SOA1;

        cout<<"Enter how many element are there in B : ";
       cin>>SOA2;

       SOA3=SOA1+SOA2;

       int A[SOA1],B[SOA2],C[SOA3];

       cout<<"enter the elements of A : "<<endl;
       for(int i=0;i<SOA1;i++){
        cin>>A[i];
       }

       cout<<"Elements of A : ";
       for(int i=0;i<SOA1;i++){
        cout<<A[i]<<" ,";
       }
       cout<<endl;
       cout<<"ENter the elements of B : " <<endl;
       for(int i=0;i<SOA2;i++){
        cin>>B[i];
       }
       cout<<"Elements of B : ";
       for(int i=0;i<SOA2;i++){
        cout<<B[i]<<" ,";
       }

       cout<<endl;

       for(int i=0;i<SOA1;i++){

        C[i]=A[i];
       }
       for(int i=0;i<SOA2;i++){

        C[SOA1+i]=B[i];
       }

       cout<<"C ARRAY : ";
       for(int i=0;i<SOA3;i++){

        cout<<C[i]<<" , ";
       }

       cout<<"Even numbers from Array C : "<<endl;
       for(int i=0;i<SOA3;i++){
        if(C[i]%2==0){
            cout<<C[i];
        }
       }




}
