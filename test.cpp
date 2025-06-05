#include<iostream>
#include "AVLDictionary/AVLDictionary.h"
int main() {
    AVLDictionary dict;
    dict.insert("sun", "a star");
    dict.insert("moon", "a satellite");
    dict.displayAscending();

    return 0;
}