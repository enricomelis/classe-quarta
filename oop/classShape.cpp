#include <iostream>
#include <string>
using namespace std;

class Shape {
    protected:
        float width;
        float height;
    public:
        Shape(float w, float h) {width = w; height = h;}
        float area();

        void setWidth(float w) { width = w; }
        void setHeight(float h) { height = h; }
        float getWidth() { return width; }
        float getHeight() { return height; }
        void stampa();

        ~Shape() { cout << "distruttore. "; }
};

class Triangle : public Shape {
    protected:
        string type;
    public:
        Triangle(float w, float h) : Shape(w, h) {}
        float area() { return (width * height) / 2; }

        void setType(string t) { type = t; }
        string getType() { return type; }
};

class Rectangle : public Shape {
    public:
        Rectangle(float w, float h) : Shape(w, h) {}
        float area() { return width * height; }
};

int main() {
    float width, height;
    cout << "Inserire dimensioni: " << endl;
    do {
        cout << "Base: ";
        cin >> width;
    } while(width < 0);
    do {
        cout << "Altezza: ";
        cin >> height;
    } while(height < 0);

    Triangle primo_triangolo(width, height);

    cout << "-------" << endl << "Triangolo: " << endl;
    primo_triangolo.stampa();
    cout << endl << "Area: " << primo_triangolo.area() << "cm^2" << endl;

    cout << endl;
    return 0;
}

void Shape::stampa(){
    cout << "Larghezza: " << width << "cm" << endl;
    cout << "Altezza: " << height << "cm" << endl;
}
