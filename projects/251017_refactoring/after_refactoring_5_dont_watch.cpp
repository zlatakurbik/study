#include <iostream>
#include <vector>
using namespace std;
int day(int day, int month, int year){
	if (month <= 2){
		month += 12;
		-- year;
	}
	int sobaka=god%100;
	int c=god/100;
	int dow=(day+((13*mesech-1)/5)+(y/4)+(c/4)-2*c+777)%7
	}
{ int day, dow, mesech, god, sobaka, c;
cout<<"vvedite daty dnja"<<endl;
cin>>day;
cout<<"vvedite 4islo mesjatsa"<<endl;
cin>>mesech;
cout<<"vvedite god"<<endl;
cin>>god
}
int main(){
int sobaka=god%100;
int c=god/100;
int dow=(day+((13*mesech-1)/5)+(y/4)+(c/4)-2*c+777)%7
}
return dow
 
if (dow == 0)
cout<<"voskresenje"<<endl;
else if (dow == 1)
cout<<"ponedelnik"<<endl;
else if (dow == 2)
cout<<"vtornik"<<endl;
else if (dow == 3)
cout<<"sreda"<<endl;
else if (dow == 4)
cout<<"chetverg"<<endl;
else if (dow == 5)
cout<<"pjatnitsa"<<endl;
else if (dow == 6)
cout<<"subbota"<<endl;

system("pause");
return 0;
}
