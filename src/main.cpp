#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    // Print a greeting message.
    cout << "Hello, World!" << endl;
    
    // Command-line inputs: argc is argument count, argv is argument array.
    cout << "Program name: " << (argc > 0 ? argv[0] : "(none)") << endl;
    cout << "Argument count: " << argc << endl;

    for (int i = 1; i < argc; ++i) {
        cout << "argv[" << i << "] = " << argv[i] << endl;
    }

    return 0;
}