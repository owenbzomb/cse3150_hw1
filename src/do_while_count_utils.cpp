#include <iostream>
#include "../include/do_while_count_utils.h"

using namespace std;

namespace do_while_count_utils {

int runDoWhileCount(){
    int input;
    do {
        cout << "Enter a number between 1 and 5: ";
        cin >> input;

    } while(input < 1 || input > 5);

    int arr[5] = {1, 2, 3, 4, 5};
    for(int value : arr){
        cout << "Value: " << value << endl;
        if(value == input){
            break;
        }
    }
    return 0;
}
}
