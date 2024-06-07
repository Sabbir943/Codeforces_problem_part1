#include<iostream>
using namespace std;
class parent{
protected:
    int id_projected;
};
class child:public parent
{
   public:
       void setId(int id)
       {
           id_protected=id;
       }
       void displayId{

       cout<<"id_protected is:"<<id_protected<<endl;
       }
};
int main()
{
  child obj;
  obj.setId(81);
  obj.display();
  return 0;
}
