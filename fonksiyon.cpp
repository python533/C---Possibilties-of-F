#include <iostream>
#include <cmath>
using namespace std;

int main() {
int x;
char F;
cout<<"Bir Sayı Girin:";
cinn>>x;
cinn>>F;

if (x<=0) {
F=x** x+1;
}


else if(x>=1){
F=x;
}

else if(x>0 && x<1){
F=sqrt(x);
}

else{
std::cout << "F'in Değeri" << '\n'+F;
}


}
