#include <iostream>
#include <string.h>
#include <map>
using namespace std;
//Код Азбуки Морзе
map<char,string> CodeMorse = {
    { 'A', ".-" },
    { 'B' , "-..." }, 
    { 'C', "-.-." },
    { 'D', "-.." },
    { 'E', "." },
    { 'F', "..-." },
    { 'G', "--." },
    { 'H', "...." },
    { 'I', ".." },
    { 'J', ".---" },
    { 'K', "-.-" },
    { 'L', ".-.." },
    { 'M', "--" },
    { 'N', "-." },
    { 'O', "---" },
    { 'P', ".--." },
    { 'Q', "--.-" },
    { 'R', ".-." },
    { 'S', "..." },
    { 'T', "-" },
    { 'U', "..-" },
    { 'V', "...-" },
    { 'W', ".--" },
    { 'X', "-..-" },
    { 'Y', "-.--" },
    { 'Z', "--.." },
    { ' ', "/" },
    { '`', "`"}
};

string input(){ 
    string text, morseText = "";
    getline(cin,text); //ввод строки
    for (char ch : text) {
        ch = toupper(ch); // перевод буквы в прописные
        morseText += CodeMorse[ch] + " "; // найденную букву Азбуки вставляем в текст
    }
    cout << morseText << endl;
    return morseText;
}

int main () {
    cout << "if you want to end the program, enter \"`\"" << endl;
    cout << "Enter the text to translate: " << endl;
    int flag = 1;
    while(flag)
    {
    string res = input();
    if(res.find("`") == 0)
    flag = 0;
    }
    return 0;
}

 