#include <iostream>
using namespace std;

int main() {
    float x=0;
    float y=0;
    float a=0;
    float b=0;
    float z=0;
    cin >> a;
    cin >> b;
    cin >> x;
    cin >> y;
    if (x<0 and y>0 ){
        z=(a*x) - (b*y);
        cout << z <<endl;
    } else if ( x >= 0 and y<= 0 ) {
        z=(a*x*x) - (b*y);
        cout << z <<endl;
    } else {
        z=(a*x) + (b*y*y);
        cout << z <<endl;
    }

    return 0;
}
