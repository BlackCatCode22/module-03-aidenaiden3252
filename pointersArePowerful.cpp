#include <iostream> 
using namespace std;


void pointerArithmetic(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    for (int i = 0; i < 5; i++){
        cout << "Address of arr[ " << i << " ]: " << (p + i) << endl;
        cout << "Value of arr[ " << i << " ]: " << *(p + i) << endl;
    }
}

int main(){

int a = 10; 
int *p;
p = &a; 
cout << "Address in pointer p: " << &p << endl;
cout << "Value of a using pointer p: " << *p << endl;
*p = 20; 
cout << "New value of a: " << *p << endl << endl;

pointerArithmetic(); 

    return 0;
}