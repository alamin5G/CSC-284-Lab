/**
 * @file 3-lab.cpp
 * Following is a statement:
C++ is an OOP language
In this sentence, there are eight vowels and eight constants.
Write a C++ program that will take a string as input and 
count the number of vowels and constants
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
int main(){
    string sentence;
    getline(cin, sentence);
    int vowel, consonant, len;
    vowel = 0, consonant = 0;
    len = sentence.size();
    for(int i; i<len; i++){
        if(sentence.at(i) == 'A' || sentence.at(i) == 'E' || sentence.at(i) == 'I' || sentence.at(i) == 'O' || sentence.at(i) == 'U'){
            vowel++;
        }else if(sentence.at(i) == 'a' || sentence.at(i) == 'e' || sentence.at(i) == 'i' || sentence.at(i) == 'o' || sentence.at(i) == 'u'){
            vowel++;
        }else if((sentence.at(i) >= 'A' &&  sentence.at(i) <= 'Z') || (sentence.at(i) >= 'a' &&  sentence.at(i) <= 'z') ){
            consonant++;
        }
    }

    cout << "Vowels = " << vowel << endl;
    cout << "Consonant = " << consonant << endl;

    return 0;
}