#include <iostream>
using namespace std;

// Finding max number using friend function...
class number
{
private:
    int x, y;

public:
    friend void max();
    void input() // Add return type and definition for input() function
    {
        cout << "Enter first Number: ";
        cin >> x;
        cout << "Enter second Number: ";
        cin >> y;
    }
};

void max()
{
    number n;
    n.input(); // Call input() to take user input for x and y
    int i = n.x;
    int j = n.y;
    (i >= j) ? cout << "\n\tMax Value: " << i << endl : cout << "\n\tMax Value: " << j << endl;
}

int main()
{
    max();
    return 0; // Add return statement for the main function
}

