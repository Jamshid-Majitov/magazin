#include <iostream>
using namespace std;
float hisob1;
int main(){
	
    cout<<"\t\t  || Milliy Bank ATM   ||"<<endl;
	cout<<"\t\t  ||  ***************  ||"<<endl;
	cout<<"\t\t  ||  ***************  ||"<<endl;
	cout<<endl;

int parol;
int pinkod;

cout<<"Iltimos pinkodni tering: ";
cin>>pinkod;

if(pinkod == 0000){
	
	cout<<"\n Xush kelibsiz \n";
	for(int i=0; i<=3;i++){
		cout<<"Parolingizni kiriting: \n";
		cin>>parol;
		
		float hisob = 10000; 
		hisob1 =hisob;
		if(parol == 7777){
			for(int x=0; x<=10; x++){
				float qiymat, miqdor;
				int tanlang;
				cout<<endl;
				if(x==1){
					cout<<"\t\tMILLIY BANK ATM " <<endl;
					cout<<"Amaliyotni tanlang \n\n";
					}
					cout<<"Bosh menyu \n";
					cout<<"1.Hisob holati"<<endl;
					cout<<"2.Qancha pul yechmoqchisiz"<<endl;
					cout<<"3.Qancha pul qo'ymoqchisiz"<<endl;
					cout<<"4.Chiqish"<<endl;
					cout<<endl;
					cout<<"Umumiy bo'lim: ";
					cin>>tanlang;
					
					 sleep(2);
					system("CLS");
					
					switch(tanlang){
						case 1:
							cout<<"Hisob holati"<<endl;
							cout<<"Sizning hisobingizdagi "<<hisob<<" bor"<<endl;
							continue;
							case 2:
								cout<<"Qancha pul yechmoqchsiz"<<endl;
								cout<<"Miqdorni kiriting:";
								cin>>miqdor;
								hisob = hisob-miqdor;
						//cout<<"Sizning hisobingizda bor: "<<hisob<<endl;
						cout<<"Sizning hisobingizda mablag' qoldi: "<<hisob<<endl;
						
								continue;
								case 3:
									cout<<"qancha pul qo'ymoqchisiz"<<endl;
									cout<<"Miqdorni kiriting:";
									cin>>miqdor;
									hisob=hisob+miqdor;
							//cout<<"sizning hisobingizda bor: "<<miqdor<<endl;
									cout<<"Sizning joriy hisobingiz : "<<hisob<<endl;
									continue;
									case 4:
										cout<<"Chiqish"<<endl;
								
										break;
										default:
											cout<<"Noto'g'ri buyruq"<<endl;
											continue;
					}
				break;
			}
			break;
		}
		else if(i==2){
		cout<<"Kartani oling"<<endl;	
		}
		else{
	cout<<"Iltimos qayta uruning"<<endl;	
		}

}


}
return 0;
}