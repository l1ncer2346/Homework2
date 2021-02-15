#include <iostream>

int GetModule(int number) {

    if(number > 0) {
        return number;
    }else{
        return -number;
    }



}

int main() {

    int number,result;
    std::cin >> number;
    result = GetModule(number);
    std::cout << result;
    return 0;
}
