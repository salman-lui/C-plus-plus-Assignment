#include<iostream>
 using namespace std;
int main()
{
int score;
cout<<"Enter your test score: ";
cin>>score;
if(score>100||score<0) cout<<"that score is not VALID"<<endl;
else if (score>=80 && score<=100)
cout<<"Your GRADE is A+"<<endl;
else if (score>=80 && score<=100)
cout<<"Your GRADE is A"<<endl;
else if (score>=70 && score<=79)
cout<<"Your GRADE is B+"<<endl;
else if (score>=60 && score<=69)
cout<<"Your GRADE is B-"<<endl;
else if (score>=50 && score<=59)
cout<<"Your GRADE is C"<<endl;
else if (score>=40 && score<=49)
cout<<"Your GRADE is D"<<endl;
else if (score>=0 && score<=39)
cout<<"Your GRADE is F"<<endl;
 }
