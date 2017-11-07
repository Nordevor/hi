#include <iostream>

using namespace std;



/*
//1.1
class Integer{
public:
    int val;
    Integer(int v=0){
        val = v;
        cout<<"Integer value: "<<v<<endl;
    }
};
*/
/*
//1.2
class Integer{
public:
    int val;
    Integer(int val=0){
        this-> val =val;
    }
    void setVal(int val){
        this -> val = val;
    }
};
*/
/*
//1
int main(){
    Integer i;
    Integer j(3);
}
*/



/*
//2.1
int *getPtrToFive(){
    int *x=new int;
    *x=5;
    return x;
}
*/
/*
//2
int main(){
    int *p = getPtrToFive();
    cout<<*p<<endl;
    delete p;
}
*/



/*
//3
int *getPtrToFive(){
    int *x=new int;
    *x=5;
    return x;
}
int main(){
    int*p;
    for (int i=0; i<3;++i){
        p=getPtrToFive();
        cout<<*p<<endl;
        //siempre un delete cuando haya un "new int" ya que colapsara tu memoria
    }
}
*/



/*
//4
int main(){
    int numItems;
    cout<<"How many items?  ";
    cin>>numItems;
    int *arr =new int[numItems];
    for (int i=0; i<numItems; ++i){
        cout<<"enter item "<<i<<": ";
        cin>>arr[i];
    }
    for(int i=0; i<numItems;++i){
        cout << arr[i]<< endl;
    }
    delete[] arr;
}
*/


/*
//5
class Point {
public:
    int x, y;
    Point(){
        cout<<"constructor invoked"<<endl;
    }
    ~Point(){
        cout<<"destructor invoked"<<endl;
    }
};

/*
//5.1
int main(){
    Point *p= new Point;
    delete p;
}
*/
/*
//5.2
int main(){
    if (true){
        Point p;
    }
    cout << "p out of scope"<<endl;
}
*/



/*
//6
class IntegerArray{
public:
    int *data;
    int size_;
};
int main(){
    IntegerArray arr;
    arr.size_=2;
    arr.data=new int[arr.size_];
    arr.data[0]=4; arr.data[1]=5;
    delete[] arr.data;
}
*/



/*
//7
class IntegerArray{
public:
    int *data;
    int size_;
    IntegerArray(int size_){
        data = new int [size_];
        this-> size_= size_;
    }
    ~IntegerArray(){
        delete[] data;
    }
};
int main(){
    IntegerArray a(2);
    a.data[0]=4; a.data[1]=2;
    if (true){
        IntegerArray b=a;
    }
    cout <<a.data[0]<<endl;
}
*/
