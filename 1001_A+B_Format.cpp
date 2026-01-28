//提供标准输入（cin）和标准输出（cout）的功能，
//引入string头文件：提供string字符串类的相关功能
// 使用std命名空间：std是C++标准库的命名空间，cin、cout、string等都属于该命名空间，
#include<iostream>
#include<string>
using namespace std;

int main(){
  int a,b;
  //输入a,b
  /*cin>>a;
  cin>>b;*/
  cin>>a>>b;

  int sum=a+b;
  //题目中输入的两个值之和不会超过int的范围，不需要使用double类型
  //当使用double类型时，会使两数之和会带有小数部分，当两数之和转换为字符串时，会增加字符
  string str=to_string(sum);
  //to_string()将数字转换成字符串
  int len=str.length();
  //获取字符串长度

  //两数之和可能是正数可能是负数，当为负数时，要考虑字符串的第一个字符为'-'
  //标准格式输出三个数字为一组，用","隔开，注意是：从后面开始
  /*数字部分从后面开始三个为一组，组成n组，最后剩下一个，二个或者三个（不包括字符）
  字符串我习惯从前开始遍历，再进行添加字符，所以我们要计算剩下的字符是否整除3，
    当整除3时，加一个"，"，注意：最后一组时不需要再加*/
  for(int i=0;i<len;i++){
    cout<<str[i];
    //直接打印字符,字符串从0开始

    if(str[i]=='-')
      continue;
    //负号要用'',然后结束本次循环

    if((len-1-i)%3==0 && i!=len-1){
      //i从0开始，所以剩余的字符是len-1-i
      //最后一组不需要添加，所以字符不能是最后一个字符
      
      cout<<",";
      //字符用""
      
    }
    
  }
  return 0;
}
