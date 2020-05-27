
#include<iostream>
using namespace std;
class Rectangle {
private:
    int top, left, bottom, right;
public:
    Rectangle(int t, int b, int l, int r);
    Rectangle(int width, int height) : Rectangle(0, height, 0, width) {};
    Rectangle();
    ~Rectangle();
};
Rectangle::Rectangle(int t, int b, int l, int r) {
    cout << "In constructor with 4 parameters" << endl;
}
Rectangle::Rectangle(int width, int height) {
    cout << "In constructor with 2 parameters, width = " << width << " height = " << height << endl;
}
Rectangle::Rectangle() {
    cout << "In constructor with 0 parameter" << endl;
}
Rectangle:: ~Rectangle() {
    cout << "In destructor" << endl;
}
int main(int argc, char **argv)
{
    Rectangle myRectangle(0, 5, 0, 10);
    cout << "Hello World!" << endl;
    return 0;
}