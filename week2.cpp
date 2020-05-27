
#include<iostream>
using namespace std;
class Rectangle {
private:
    int top, left, bottom, right;

    Rectangle(int t, int b, int l, int r);
    Rectangle(int width, int height) : Rectangle(0, height, 0, width) {};
    Rectangle();
};


int main(int argc, char **argv)
{
   
}