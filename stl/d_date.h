#ifndef __date_h_
#define __date_h_

 class date
 {
 public:
   date (int mm=1,int dd=1,int yy=1900):m(mm),d(dd),y(yy);
   virtual ~date ();
   int daysinMonth();
   int getMonth();
   int getYear();
   bool isLeapYear();
   int numberOfDays();
   void setMonth(int mm);
   void setYear(int yy);
 private:
   /* date */
   int m;
   int d;
   int y;
 };



 int date::daysinMonth(){

  if(m==1 || m ==3 || m==5 || m==7 || m==8 ||m==10 ||m==12 ){
    return 31;

  } else if(m==4 || m ==6 || m==9 || m==11 )
  {
    return 30;
  } else{
    if(isLeapYear()){

      return 28;
    }else{

      return 29;
    }

  }

}

void date::setMonth(int mm){

  m=mm;

}

void date::setYear(int yy){

  y=yy;

}

int date::getYear(){

  return y;
}
int date::getMonth(){

  return m;
}

bool date::isLeapYear(){

  if((y%4==0 && y%100!==0) || y%400==0){

    return true;

  }else{

  return false;
}

#endif
