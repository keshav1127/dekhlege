#include <iostream>
using namespace std;

class array {
    int a[10]; 
public:
    array() {
        
        int values[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        for (int i = 0; i < 10; i++) {
            a[i] = values[i];  
        }
    }
    void show()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << a[i] << "\t";
        }
        cout << endl;
    }
    void reverse1();
};
void array :: reverse1()
{
    int *b;
    b=new int[10];
    for (int i=9, j=0;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    for(int i=0;i<10;i++)
    {
        a[i]=b[i];
    }
delete []b;
}

int main() {
    array a1;
    a1.show();
    a1.reverse1();
a1.show();
    return 0;
}
