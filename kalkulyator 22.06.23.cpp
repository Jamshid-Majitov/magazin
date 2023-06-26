#include <iostream>
using namespace std;
int qoshish(int x,int y){
return x+y;
}  
int ayirish(int x,int y){
return x-y;  
}  
int bulish (int x,int y){
return x/y;  
}  
int kupaytirish(int x,int y){
return x*y;  
}  
int main(){
int x,y;  
char belgi;  
while(true){

cout<<"1 sonni kirit: ";cin>>x;
cout<<"2 sonni kirit: ";cin>>y;
cout<<"belgini kirit: ";cin>>belgi;
if(belgi=='+'){
cout<<qoshish(x,y)<<endl;  
}
 else if(belgi=='-'){
cout<<ayirish(x,y)<<endl;  
}
 else if(belgi=='*'){
cout<<kupaytirish(x,y)<<endl;  
}
 else if(belgi=='/'){
cout<<bulish(x,y)<<endl;  
}
sleep(2);
system("CLS");
}

return 0;

}