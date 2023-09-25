/*Given a list of strings containing dates, arrange them in ascending order.
dates = [“20 Jan 2000”, “12 May 1998”, “9 Oct 2010”]
Output :
12 May 1998
20 Jan 2000
9 Oct 2010*/
// C++ program to sort the dates in a string array
#include <bits/stdc++.h>
using namespace std;
unordered_map<string,int>mp;
void sortMonths()
{
    mp["Jan"]=1;
    mp["Feb"]=2;
    mp["Mar"]=3;
    mp["Apr"]=4;
    mp["May"]=5;
    mp["Jun"]=6;
    mp["Jul"]=7;
    mp["Aug"]=8;
    mp["Sep"]=9;
    mp["Oct"]=10;
    mp["Nov"]=11;
    mp["Dec"]=12;
}

bool com(string s1, string s2)
{
 if(s1.length()<11){
   s1='0'+s1;
 }
 if(s2.length()<11){
    s2='0'+s2;
 }
 //comparing years
 string str1=s1.substr(7,5);
 string str2=s2.substr(7,5);

 if(str1.compare(str2)!=0)
 {
    if(str1.compare(str2)<0)
    return true;
    return false;
 }
 //comapring months
string month1=s1.substr(3,3);
string month2=s2.substr(3,3);
int m1 = mp[month1];
int m2= mp[month2];
 	if (m1 != m2) {
 		return m1 < m2;
 	}
	// Comparing the days
	string d1 = s1.substr(0, 2);
	string d2= s2.substr(0, 2);
	if (d1.compare(d2) < 0)
		return true;
	return false;  
}

int main()
{
 string dates[] = {"2 Jan 2000","20 Apr 2002","12 May 1998","9 Oct 2010"};
int n = sizeof(dates) / sizeof(dates[0]);
sortMonths();

sort(dates,dates+n,com);
for(int i=0;i<n;i++)
{
   cout<<dates[i]<<endl;
}
    return 0;
}
