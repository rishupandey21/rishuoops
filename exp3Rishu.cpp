#include <iostream>

using namespace std;

class Room {
private:
    float length;
    float breadth;

public:

    Room(float l, float b) : length(l), breadth(b) {}


    void get(float l, float b) {
        length = l;
        breadth = b;
    }


    void display() {
        cout << "Length: " << length << " meters" << endl;
        cout << "Breadth: " << breadth << " meters" << endl;
    }

   
    float area() {
        return length * breadth;
    }

  
    float perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
 
    Room rooms[5] = {
        Room(10, 15),   // Room 1
        Room(12, 18),   // Room 2
        Room(8, 10),    // Room 3
        Room(15, 20),   // Room 4
        Room(9, 12)     // Room 5
    };

    
    for (int i = 0; i < 5; ++i) {
        cout << "Room " << i+1 << ":" << endl;
        rooms[i].display();
        cout << "Area: " << rooms[i].area() << " square meters" << endl;
        cout << "Perimeter: " << rooms[i].perimeter() << " meters" << endl;
        cout << endl;
    }

    return 0;
}

