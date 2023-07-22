#include<iostream>
using namespace std;
 
class Box {

    int width;
    Box(int _val):width(_val) {}

    public:
        void print() {
            cout<<this->width<<endl;
        }

    friend class BoxFactory;
};

class BoxFactory {

    private:
        int boxObjectCount;
    
    public:
        Box getBox(int _width) {
            ++boxObjectCount;
            return Box(_width);
        }

        int getBoxCount() {
            return this->boxObjectCount;
        }
};




int main() {

    // Box* box = new Box;
    // box->print();

    BoxFactory* boxFactory = new BoxFactory();
    Box box = boxFactory->getBox(13);

    Box b = boxFactory->getBox(10);
    cout<<"object created are : "<<boxFactory->getBoxCount()<<endl;

    box.print();
    b.print();


return (0);
}