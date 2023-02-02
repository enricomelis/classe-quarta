#include <iostream>
using namespace std;

class triangle{
    private:
        float side1;
        float side2;
        float side3;
        float height; //relativa a side1 sempre
    public:
        void setData(float l1, float l2, float l3, float h);
        float getData();
        float area(float b, float h);
        float perimeter(float l1, float l2, float l3);
} triangolo;

void triangle::setData(float l1, float l2, float l3, float h){
    side1 = l1;
    side2 = l2;
    side3 = l3;
    height = h;
}

float triangle::getData(){
    float l = side1;
    return l;
}

float triangle::area(float b, float h){
    return b*h/2;
}

float triangle::perimeter(float l1, float l2, float l3){
    return l1+l2+l3;
}

int main(){
    int choice = 0;
    do{
        cout << "Insert the type of triangle: ";
        cin >> choice;
    } while(choice < 1 || choice > 3);

    float b;
    float l;
    float l2;
    float h;
    switch(choice){
        case 1:
            do{
                cout << "Insert side: ";
                cin >> l;
            } while(l < 0);
            do{
                cout << "Insert height: ";
                cin >> h;
            } while(h < 0);
            triangolo.setData(l, l, l, h);

            cout << "Area: " << triangolo.area(l, h) << 
            endl << "Perimetro: " << triangolo.perimeter(l, l, l);
            break;
        case 2:
            do{
                cout << "Insert base: ";
                cin >> b;
            } while(b < 0);
            do{
                cout << "Insert oblique side: ";
                cin >> l;
            } while(l < 0);
            do{
                cout << "Insert height: ";
                cin >> h;
            } while(h < 0);
            triangolo.setData(b, l, l, h);
            cout << "Area: " << triangolo.area(b, h) << 
            endl << "Perimetro: " << triangolo.perimeter(b, l, l);
            break;
        case 3:
            do{
                cout << "Insert base: ";
                cin >> b;
            } while(b < 0);
            do{
                cout << "Insert first oblique side: ";
                cin >> l;
            } while(l < 0);
            do{
                cout << "Insert second oblique side: ";
                cin >> l2;
            } while(l2 < 0);
            do{
                cout << "Insert height: ";
                cin >> h;
            } while(h < 0);
            triangolo.setData(b, l, l2, h);
            cout << "Area: " << triangolo.area(l, h) << 
            endl << "Perimetro: " << triangolo.perimeter(b, l, l2);
            break;
    }

    

    return 0;
}