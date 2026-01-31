#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

string getpinyin(char num) {
    unordered_map<char, string> numtopinyin = {
        {'0',"ling"},  // 注意：这里是单引号包裹的字符，不是整数
        {'1',"yi"},
        {'2',"er"},
        {'3',"san"},
        {'4',"si"},
        {'5',"wu"},
        {'6',"liu"},
        {'7',"qi"},
        {'8',"ba"},
        {'9',"jiu"}
    };
    if (numtopinyin.find(num) != numtopinyin.end()) {
        return numtopinyin[num];
    }
    else {
        return " 仅支持0-9";
    }
}
int main() {
    string str;
    cin >> str;
    
    int len = str.size();
    int sum = 0;
    for (int i = 0; i < len; i++) {
        int c = str[i]-'0';
        sum += c;
    }
    string strnum = to_string(sum);
    for (int i = 0; i < strnum.size(); i++) {
        cout << getpinyin(strnum[i]);
        if (i != (strnum.size() - 1)) {
            cout << ' ';
        }
    }
    return 0;

}
