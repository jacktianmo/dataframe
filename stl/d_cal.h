#ifndef _dates_h_
#define _dates_h
#include"d_date.h"
//dates.display
class calender
{
public:
  calender (arguments);
  virtual ~calender ();

private:
  /* data */
  date d;
  int firstDay() const;
  void displayDates() const;
  void displayTitle() const;
};

calender::display() const
{
    int monthLength=d.daysInMonth();
    int dayValue=1;
    int day=0,first=firstDay();

    while(day <first){
        cout<<setw(7)<<" ";
        day++;
        if(day==6){
            cout<<endl;

        }
        day=(day+1)%7;

    }
    if(day!=0)
      {
        cout<<endl;

      }

}

#endif
