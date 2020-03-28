


char * dayOfTheWeek(int day, int month, int year){
    char output[8][30]={"Sunday","Monday","Tuesday","Wednesday", "Thursday","Friday","Saturday"};
    int i,s_year=2000,s_date=6,one=0;
    int day_0[12]={0,31,59,90,120,151,181,212,243,273,304,334};
    char *reba;

    int ret=0;
    if(year>=s_year){
        for(i=s_year;i<year;i++){
            if((i%4==0&&i%100!=0)||(i%400==0)){
                one+=2;
            }
            else{
                one+=1;
            }
        }
        one=(one%7+s_date)%7;
    }
    else{
        for(i=s_year-1;i>=year;i--){
            if((i%4==0&&i%100!=0)||(i%400==0)){
                one+=2;
            }
            else{
                one+=1;
            }
        }
        one=s_date-one%7;
    }
    
   
    if((year%4==0&&year%100!=0)||year%400==0){
        if(month>=3){
            ret=((day_0[month-1]+day+1)%7+one-1)%7;
        }
        else
            ret=((day_0[month-1]+day)%7+one-1)%7;
    }
    else {
        ret=((day_0[month-1]+day)%7+one-1)%7;
    }
    reba=output[ret];
    return reba;
}

/*
Given a date, return the corresponding day of the week for that date.

The input is given as three integers representing the day, month and year respectively.

Return the answer as one of the following values {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}.

 

Example 1:

Input: day = 31, month = 8, year = 2019
Output: "Saturday"
Example 2:

Input: day = 18, month = 7, year = 1999
Output: "Sunday"
Example 3:

Input: day = 15, month = 8, year = 1993
Output: "Sunday"
 

Constraints:

The given dates are valid dates between the years 1971 and 2100.

*/

