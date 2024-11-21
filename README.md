# String Project
## Overview
The **ClsString** library is a C++ class that provides a variety of functions for working with strings. It includes tools for counting words, trimming spaces, splitting strings, reversing words, replacing words, removing punctuation, and other common string operations.

## Features
- **Word Count**: Counts the number of words in a string.
- **Trim**: Removes spaces from the beginning or end of a string.
- **String Split**: Splits a string into a list of words based on a specified delimiter.
- **String Join**: Joins a list of strings using a specified delimiter.
- **Reverse**: Reverses the order of words in a string.
- **Replace**: Replaces a word in the string with another word.
- **Remove Punctuation**: Removes punctuation marks from the string.
- **Character Count**: Counts occurrences of a specific character in the string.
- **Invert Case**: Changes the case of each letter in the string.
- **Capitalize First Letter**: Capitalizes the first letter of each word in the string.
- **Vowel Count**: Counts the number of vowels in the string.
- **Get First Characters**: Retrieves the first character of each word.
- **To Upper**: Converts the entire string to uppercase.
- **To Lower**: Converts the entire string to lowercase.
- **String Length**: Returns the length of the string.

## Usage
1. Include the header file:
    ```cpp
    #include "ClsString.h"
    ```
2. Create a ClsString object and use the methods as needed:
    ```cpp
    ClsString str("Hello World");
    int wordCount = str.CountWords();
    string reversed = str.reverse();
    ```

## Example
```cpp
#include <iostream>
#include "ClsString.h"

int main() {
    ClsString str("Hello Yousef!");
    std::cout << "Original: " << str.GetValue() << std::endl;
    std::cout << "Word Count: " << str.CountWords() << std::endl;
    std::cout << "Reversed: " << str.reverse() << std::endl;
    std::cout << "Vowel Count: " << str.vowelcounter() << std::endl;

    return 0;
}
```
