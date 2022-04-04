#include <algorithm>

bool func (int a, int b) {
    return (a > b);
}

int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) {
    int* result = new int[lenArr1 + lenArr2];

    for (int i = 0; i < lenArr1 + lenArr2; i++) {
        if (i < lenArr1) {
            result[i] = firstArr[i];
        } else {
            result[i] = secondArr[i - lenArr1];
        }
    }
    
    
    if (firstArr[0] < firstArr[lenArr1 - 1]) {
        sort (result, result + lenArr1 + lenArr2);
    } else {
        sort (result, result + lenArr1 + lenArr2, func);
    }
    
    
    return result;
}