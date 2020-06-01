#include "Headers/integer.h"
#include "Headers/number.h"
#include "Headers/vector.h"

int main(){
    integer i1(2);
    integer i2(6);
    integer i3;
    i3+=i1;
    cout<<i2<<endl;
    i3=i1*i2;
    cout<<i3<<endl;
    i3*=i2;
    cout<<i3<<endl;
    if (i2!=i1){cout<<"lalala"<<endl;}
    
    number<double> n1(4.5);
    number<double> n2(10.0);
    number<double> n3;
    n3=n1+n2;
    cout<<n1<<endl;
    double n=pow(n1,n2);
    cout<<n<<endl;

    vector<int> v1;
}