1) program use the name of user:
#include <iostream>

using namespace std;
int main()
{
 string name = "yousif";

cout<<"wellcom user"<<name<< "\n congratulation"<<endl;
    return 0;
}

2) A function add 4 floats number:
#include <iostream>

using namespace std;

int main()
{
    int m = 4;
    int n = 3;
    int b = 6;
    int z = m+n+b+z;
    cout << "addition" <<z<< endl;
    return 0;
}

3) A function compute Fibonacci:
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}

5) A void function take a parameter:
#include <iostream>
using namespace std;

// void function that takes parameters
void greet(string name, int age) {
    cout << "Hello " << name << endl;
    cout << "Your age is: " << age << " years" << endl;
}

int main() {
    greet("Yousif", 20);
    return 0;
}

6) recursive algorithm:
#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    // Base Case
    if (n == 0 || n == 1)
        return 1;

    // Recursive Case
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << "! = " << factorial(num) << endl;

    return 0;
}
