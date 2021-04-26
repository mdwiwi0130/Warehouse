/*22_2.做大事的方法-圓面積與體積(10.0)*/
#include <iostream>  
#include <iomanip>
using namespace std; 
int f(float r,float h){
  return r*h; 
}
int g(float r){
  r=r*r;
 return r;
}
int main() { 
    float r,h;
    for(int i=1;i<=10;i++)
    cin>>r>>h;
    cout<<"圓柱體體積"<<fixed<<setprecision(6)<<f();
    return 0;
}
