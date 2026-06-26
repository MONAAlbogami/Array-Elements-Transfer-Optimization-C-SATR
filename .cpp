#include <iostream>

int main() {
    //  5 Elements array
    int Array1[5] = {1, 2, 3, 4, 5};
    
    // identify array
    int Array2[5];
    
    // loop
    for (int i = 0; i < 5; i++) {
        Array2[i] = Array1[i];
    }
    
    // print
    std::cout << "Elements of Array2: ";
    for (int i = 0; i < 5; i++) {
        std::cout << Array2[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
