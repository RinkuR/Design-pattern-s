// Hey dude this is singleton pattern which allow to create only single object of 
// class and lifetime of this object untill program not terminate in another 
// word you can say it's global accessible object.
// I hope you know basic fundamental of CPP or oops
//Let's start

 #include <iostream>
 using namespace std;

 class Rinku
   {
     public:
            static Rinku *getinstance()
                   {
                         if(obj==NULL)
                         {
                           cout<<"It's First time creation of object"<<endl;
                           obj=new Rinku();
                          
                          return obj;
                         }
                         else
                         {
                            cout<<"Dude Rinku  already created object"<<endl;
                          
                          return obj;
                         }
                   }
 
          
     private:
             static Rinku *obj;  //static variable must initilized out side the class if you ask why then send mail to Stroustrup and tell answer to me I'm learner
             Rinku()
             {
                  //we make constructor private because only class member fuction create the object         
             }
          
     
     };
 
      Rinku *Rinku ::obj=NULL;
  
 int main()
  {
    //Driver function it's going to drive let's see how expert this driver
     Rinku *R1=Rinku::getinstance();
     Rinku *R2=Rinku::getinstance();
     Rinku *R3=Rinku::getinstance();
   
   return 0;
  }

// Note: more Question's come can we write destructor in singleton class or can be avoid copy or assignment  singleton object  
//  for this check next program singleton_dest.cpp 
//

