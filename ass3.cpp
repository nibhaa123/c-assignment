#include<iostream>
using namespace std;
int main(){
    int l,b,area,peri;
    cout<<"enter the value of length and breadth:";
    cin>>l>>b;
    area=l*b;
    peri=2*(l+b);
    cout<<"area="<<area<<endl;
    cout<<"peri="<<peri;
    
    return 0;
}