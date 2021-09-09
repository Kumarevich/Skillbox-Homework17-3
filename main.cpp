#include <iostream>

bool check(char* mainStr, char* inspect) {
    bool flag = false;
    int i = 0, j = 0;
    while (*(inspect + i) != '\0' && *(mainStr + j) != '\0') {
        if (*(inspect + i) == *(mainStr + j)) {
            ++i;
            flag = true;
        } else {
            if (flag) {
                flag = false;
                break;
            }
        }
        ++j;
    }
    return flag;
}

int main() {
    char* mainStr = "Hello world!";
    char* firstStr = "llo";
    char* secStr = "work";

    std::cout << check(mainStr, firstStr) << " " << check(mainStr, secStr);
    return 0;
}
