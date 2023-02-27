#include <iostream>
using namespace std;
int main()
{
  // 请在此输入您的代码
  int num=0;
  for(int i=1;i<=2020;i++){
    if(i%10==2) num++;
    if(i/10%10==2) num++;
    if(i/100%10==2) num++;
    if(i/1000==2) num++;
  }
  cout<<num;
  return 0;
}
