#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {

    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    int HeightB1, WidthB1, LengthB1;
    int HeightB2, WidthB2, LengthB2;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> HeightB1;
    cout << "Enter Box 1 Width : ";
    cin >> WidthB1;
    cout << "Enter Box 1 Length : ";
    cin >> LengthB1;
    
    cout << "Enter Box 2 Height : ";
    cin >> HeightB2;
    cout << "Enter Box 2 Width : ";
    cin >> WidthB2;
    cout << "Enter Box 2 Length : ";
    cin >> LengthB2;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume( HeightB1,WidthB1,LengthB1 )
             + volume( HeightB2,WidthB2,LengthB2 );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}
int volume (int height, int width, int length)
{
  return height*width*length;
}

// Implement the functions here
