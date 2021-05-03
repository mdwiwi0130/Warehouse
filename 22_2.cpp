/*22_2.做大事的方法-圓面積與體積(10.0)*/
#include <iostream>  
#include <iomanip>
using namespace std; 
float g(float r){
  r=r*r;
  float pi=3.14;
 return r*pi;
}
float f(float r,float h){
  return g(r)*h;
}
int main() { 
    float r,h;
    for(int i=1;i<=10;i++)
    cin>>r>>h;
    cout<<"圓柱體體積"<<fixed<<setprecision(6)<<f(r,h);
    return 0;
}
