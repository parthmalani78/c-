#include<iostream>
using namespace std;
template <class T>

class Vector
{
    public:
        T *arr;
        int size;
        Vector(int m)
        {
            size = m;
            arr=new T[size];
        }
        T dotproducted(Vector &v)
        {
            T d=0;
            for(int i=0;i<size;i++)
            {
                d += this->arr[i]*v.arr[i];
            }
            return d;
        }

};

int main()
{
    Vector<float>v1(3);
    v1.arr[0]=2.5;
    v1.arr[1]=4.7;
    v1.arr[2]=9.8;
    Vector<float>v2(3);
    v2.arr[0]=3.2;
    v2.arr[1]=6.5;
    v2.arr[2]=4.2;

    float a=v1.dotproducted(v2);

    cout<< a<<endl;

    return 0;
}
