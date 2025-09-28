// Papri Sen
// 24070123070
// A3

#include<iostream>
using namespace std;

class Rect{
    public:
    float length;
    float width;

float area(float length, float width){
    return length*width;
}
};

int main(){

    Rect r1;
    cout<<"Enter Length: ";
    cin>>r1.length;

    cout<<"Enter Width: ";
    cin>>r1.width;

    cout<<"Area of Rectangle is: "<<r1.area(r1.length, r1.width)<<endl;

    return 0;
}

/*
Output:
Enter Length: 6
Enter Width: 5
Area of Rectangle is: 30
*/
