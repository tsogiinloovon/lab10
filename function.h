#include"class.h"
#include<iostream>
#include<string>
using namespace std;
//date
int date::getyear(){return this->year;}
int date::getmonth(){return this->month;}
int date::getday(){return this->day;}
void date::setyear(int year){this->year=year;}
void date::setmonth(int month){this->month=month;}
void date::setday(int day){this->day=day;}
//employee
void employee::setstartdate(int year,int month,int day)
{
  this->startdate.setyear(year);
  this->startdate.setmonth(month);
  this->startdate.setday(day);
}
void employee::showdata()
{
    cout<<"start date:";
    cout<<" "<<this->startdate.getyear();
    cout<<" /"<<this->startdate.getmonth();
    cout<<" /"<<this->startdate.getday()<<endl;
    cout<<"company_id:";
    cout<<this->getcompany_id();
    cout<<endl<<"tittle:";
    cout<<this->gettitle();
    cout<<endl<<"anniversary date:";
    cout<<endl<<"job description:";
    cout<<this->get_jobdescription();
    cout<<this->gethuuhed();
}
//company
void employee::setcompany_id(string company_id){this->company_id=company_id;}
void employee::settitle(string title){this->title=title;}
string employee::getcompany_id(){return this->company_id;}
string employee::gettitle(){return this->title;}
//spouse
void spouse::setanniversary_date(int year,int month,int day)
{
  this->anniversary_date.year=year;
  this->anniversary_date.month=month;
  this->anniversary_date.day=day;
}
date spouse::getanniversary_date()
{
    return this->anniversary_date;
}
void employee::setcelebrate(int year,int month,int day)
{
 this->celebrate->setanniversary_date(year,month,day);
}
date employee::getcelebrate()
{
    this->celebrate->getanniversary_date();
}

//jobdescription
void jobdescription::setdescription(string description){this->description=description;}
string jobdescription::getdescription(){return this->description;}
void employee::set_jobdescription(string description){this->worker->setdescription(description);}
string employee::get_jobdescription(){return this->worker->getdescription();}
//division
void division::setdivisionname(string name)
{
    this->divisionname=name;
}
string division::getdivisionname()
{
    return this->divisionname;
}
void employee::setdiv(string div)
{
    this->div.setdivisionname(div);
}
string employee::getdiv()
{
    return this->div.getdivisionname();
}
//child
void employee::sethuuhed(string togloom)
{
    this->huuhed->setfavorite_toy(togloom);
}
void child::setfavorite_toy(string togloom)
{
    this->favorite_toy=togloom;
}
string employee::gethuuhed()
{
    return this->huuhed->getfavorite_toy();
}
string child::getfavorite_toy()
{
    return this->favorite_toy;
}
