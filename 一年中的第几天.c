#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct Date
{
    int year;
    int month;
    int day;
};
bool isLeapYear(int year);
int getDayOfYear(struct Date date);
int  getDayOfMonth(int month,int year);
bool isEqualToAny(int num,int arr[],int size);
int main(void) {
    struct Date date;
    int year,month,day;
    scanf("%d%d%d",&year,&month,&day);
    date.year=year;
    date.month=month;
    date.day=day;
    printf("%d",getDayOfYear(date));
    return 0;
}
//获取一年的第几天
int getDayOfYear(struct Date date){
    int dayOfYear=0;
    int dayOfMonths=0;
    for (int i = 1; i < date.month; i++)
    {
        
        dayOfMonths+=getDayOfMonth(i,date.year);
    }
    dayOfYear=dayOfMonths+date.day;
    return dayOfYear;
}

//获取每个月有多少天
int getDayOfMonth(int month,int year){
    int leap=0,dayOfMonth;
    int thirtyOne[]={1,3,5,7,8,10,12};
    int thirty[]={4,6,9,11};
    if (isLeapYear(year))
    {
        leap=1;
    }
    if (month==2)
    {
        dayOfMonth=28+leap;
    }else if (isEqualToAny(month,thirty,4))
    {
        dayOfMonth=30;
    }else if (isEqualToAny(month,thirtyOne,7))
    {
        dayOfMonth=31;
    }
    else {
        printf("月份不对!");
        exit(1);
    }
    return dayOfMonth;
}
//是否在数组中
bool isEqualToAny(int num,int arr[],int size){
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i]==num)
        {
            return true;
        }
    }
    return false;
}
//是否是闰年
bool isLeapYear(int year){
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return true;
    } else {
        return false;
    }
}