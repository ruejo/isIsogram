#include "isogram.h"
#include "string.h"


bool is_isogram(const char phrase[]){
    int length = strlen(phrase);
    for (int i = 0; i<length; i++){
        char currentChar = phrase[i];
        for (int j=0; j<length; j++){
            int occurences = 0;
            if ((phrase[j] == currentChar) && (j != i)){
                occurences++;
            }
            if (occurences > 0){
                return false;
            }
        }
    }
    
    return true;
}