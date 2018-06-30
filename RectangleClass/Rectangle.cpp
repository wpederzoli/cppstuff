#include <iostream>
using namespace std;

class Rectangle{
    public:
    Rectangle() = default;

    Rectangle(double width, double height)
        : width_{width}, height_{height}
    {}

    double Width() const { return width_; }
    double Height() const { return height_; }

    double Area() const {
        return width_ * height_;
    }

    double Perimeter() const {
        return 2.0*(width_ + height_);
    }

    void Scale(double scaleFactor){
        width_ *= scaleFactor;
        height_ *= scaleFactor;
    }

    private:
    double width_{};
    double height_{};

};

void PrintInfo(const Rectangle & r){
    cout << "Rectangle width = " << r.Width()
    << ", height = " << r.Height()
    << ", \n"
    << "area = " << r.Area()
    << ", perimeter = " << r.Perimeter()
    << "\n\n";

}

int main(){
    cout << "Default constructed rectangle:\n";
    Rectangle rl{};
    PrintInfo(rl);

    cout << "Rectangle r{10, 20}:\n";
    Rectangle r{10, 20};
    PrintInfo(r);

    cout << "After 2x scaling:\n";
    r.Scale(2);
    PrintInfo(r);
}