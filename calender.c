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
}
