#include<iostream>
#include<string>
using namespace std;

int main(){
    string a,b;
    char da,db;
    cin >> a >> da >> b >> db;
   
    int n1=0,n2=0;
    for(char c :a){
        if(c==da){
            n1++;
        }
    }
    for(char c :b){
        if(c==db){
            n2++;
        }
    }
    string pa,pb;
    for(int i=0;i<n1;i++){
        pa.push_back(da);
    }
    for(int i=0;i<n2;i++){
        pb.push_back(db);
    }
    
    // 1：空字符串处理为0
    // 2：用stoll()转为long long，支持更大数值范围，避免溢出
    long long num1 = pa.empty() ? 0 : stoll(pa);
    long long num2 = pb.empty() ? 0 : stoll(pb);
    
    cout << num1 + num2 << endl;
    return 0;
}
