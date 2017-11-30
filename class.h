#include<iostream>
using namespace std;
class date
{
public:
    int year,month,day;
    int getyear();
    int getmonth();
    int getday();
    void setyear(int year);
    void setmonth(int month);
    void setday(int day);

};
class spouse
{
    date anniversary_date;
 public:
     date getanniversary_date();
     void setanniversary_date(int year,int month,int day);
};
class jobdescription
{
  string description;
  public:
      string getdescription();
      void setdescription(string);
};
class division
{
    string divisionname;
public:
    string getdivisionname();
    void setdivisionname(string);
};
class child{
    string favorite_toy;
    public:
        string getfavorite_toy();
        void setfavorite_toy(string);
};
class employee
{
       spouse *celebrate;//0 1
       string company_id;
       string title;
       date startdate;
       jobdescription *worker;
       division div;//1
    public:
        child *huuhed;
        string getcompany_id();
        string gettitle();
        void showdata();
        void setcompany_id(string company_id);
        void settitle(string title);
        void setstartdate(int year,int month,int day);
        void setcelebrate(int year,int month,int day);
        date getcelebrate();
        employee()
        {
            this->worker=new jobdescription[1];//1..n
        }
        void set_jobdescription(string);
        string get_jobdescription();
        void setdiv(string);
        string getdiv();
        date getbaby(string);
        vector <string> getbaby();
        string gethuuhed();
        void sethuuhed(string);
};
