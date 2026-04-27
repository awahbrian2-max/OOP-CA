#include<iostream>
using namespace std;
class Vehicle{
  private:
    string brand;
    string model;
    int year;
  public:
    Vehicle(string b,string m,int y){
      brand=b;
      model=m;
      year=y;
    }
    virtual void GetInfo(){
      cout<<"brand: "<<brand<<"\nmodel: "<<model<<"\nYear: "<<year<<endl;
    }
};
class Car:public Vehicle{
  private:
    int numDoors;
  public:
    Car(string b,string m,int y,int numdoors):Vehicle(b,m,y){
      numDoors=numdoors;
    }
    void Getinfo(){
      Vehicle::GetInfo();
      cout<<"\nnumber of doors: "<<numDoors;
    }
};
class Motorcycle:public Vehicle{
  private:
   bool hasSidecar;
  public:
    Motorcycle(string b,string m,int y,bool has_side_car):Vehicle(b,m,y){
     hasSidecar=has_side_car;
   }
  void GetInfo(){
    Vehicle::GetInfo();
    cout<<"Has side car: "<<hasSidecar<<endl;
  }
};
int main(){
  Car car_1("Mercedes","GLE",2018,4);
  car_1.GetInfo();
  Motorcycle motorcycle_1("NANFANG","E700",2007,false);
  motorcycle_1.GetInfo();
  return 0;
}