#include <stdio.h>
int main(){
    int year,month,date;
    printf("Enter Year - ");
    scanf("%d",&year);
    printf("Enter Month - ");
    scanf("%d",&month);
    printf("Enter Date - ");
    scanf("%d",&date);
    char week_days[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int y,s=0,day,flag=0;
    int m;
    if(year>=1900 && year<1906){
        m=1900;
    }
    else if(year>=1906 && year<1917){
        m=1906;
    }
    else if(year>=1917 && year<1923){
        m=1917;
    }
    else if(year>=1923 && year<1934){
        m=1923;
    }
    else if(year>=1934 && year<1945){
        m=1934;
    }
    else if(year>=1945 && year<1951){
        m=1945;
    }
    else if(year>=1951 && year<1962){
        m=1951;
    }
    else if(year>=1962 && year<1973){
        m=1962;
    }
    else if(year>=1973 && year<1979){
        m=1973;
    }
    else if(year>=1979 && year<1990){
        m=1979;
    }
    else if(year>=1990 && year<2001){
        m=1990;
    }
    else if(year>=2001 && year<2007){
        m=2001;
    }
}
