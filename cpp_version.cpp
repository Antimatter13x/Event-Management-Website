//ONLINE GAMING EVENT REGISTRATION APPLICATION
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
string game[4]={"PUBG","CALL OF DUTY","FORTNITE","GTA 5"};
string platform[4]={"ANDROID","IOS","PS4","XBOX 1"};
string a;
string b;
int ch,c,otp;
class data
{
 public:
 string name;
 int age;
 string password;
 string id;
 string *g,*p;
 double num;
  int getdata()
  {
   cout<<"\nEnter name:";
   cin>>name;
   cout<<"\nEnter gamer id:";
   cin>>id;
   cout<<"\nEnter age:";
   cin>>age;
   A:
   cout<<"\nSelect game:\n1.PUBG\n2.CALL OF DUTY\n3.FORTNITE\n4.GTA 5\nEnter game id:";
   cin>>ch;
   if(ch==1)
   g=&game[0];
   else if(ch==2)
   g=&game[1];
   else if(ch==3)
   g=&game[2];
   else if(ch==4)
   g=&game[3];
   else 
   {
    cout<<"\nEnter valid choice:";
    goto A;
   }
   B:
   cout<<"\nSelect platform:\n1.ANDROID\n2.IOS\n3.PS4\n4.XBOX 1\nEnter platform id:";
   cin>>ch;
   if(ch==1)
   p=&platform[0];
   else if(ch==2)
   p=&platform[1];
   else if(ch==3)
   p=&platform[2];
   else if(ch==4)
   p=&platform[3];
   else 
   {
    cout<<"\nEnter valid choice:";
    goto B;
   }
   E:
   cout<<"\nEnter password:";
   cin>>password;
   cout<<"\nRe enter password:";
   cin>>a;
   if(password==a)
   cout<<"\nPassword confirmed";
   else 
   {
    cout<<"\nPasswords not matching, please re enter\n";
    goto E;
   }
   cout<<"\nEnter mobile number:";
   cin>>num;
   cout<<"\nEnter OTP:";
   cin>>otp;
   if(otp==1)
   return 1;
   else
   return 0;
 }
 int updatename()
 {
  int count=3;
  G:
  cout<<"\nEnter password:";
  cin>>a;
  if(password==a)
  {
   cout<<"\nEnter name:";
   cin>>name;
   return 1;
  }
  else
  {
   cout<<"\nPassword incorrect";
   cout<<"\nYou have "<<count-1<<" more tries";
   count--;
   if(count!=0)
   goto G;
   else
   return 0;
  }
 }
 int updateage()
 {
  int count=3;
  H:
  cout<<"\nEnter password:";
  cin>>a;
  if(password==a)
  {
   cout<<"\nEnter age:";
   cin>>age;
   return 1;
  }
  else
  {
   cout<<"\nPassword incorrect";
   cout<<"\nYou have "<<count-1<<" more tries";
   count--;
   if(count!=0)
   goto H;
   else
   return 0;
  }
 }
 int updategame()
 {
   int count=3;
   I:
   cout<<"\nEnter password:";
   cin>>a;
   if(password==a)
   {
    C:
    cout<<"\nSelect game:\n1.PUBG\n2.CALL OF DUTY\n3.FORTNITE\n4.GTA 5\nEnter game id:";
    cin>>ch;
    if(ch==1)
    g=&game[0];
    else if(ch==2)
    g=&game[1];
    else if(ch==3)
    g=&game[2];
    else if(ch==4)
    g=&game[3];
    else 
    {
     cout<<"\nEnter valid choice:";
     goto C;
    }
    return 1; 
   }
   else
   {
    cout<<"\nPassword incorrect";
    cout<<"\nYou have "<<count-1<<" more tries";
    count--;
    if(count!=0)
    goto I;
    else
    return 0;
   }
 }
 int updateplatform()
 {
   int count=3;
   J:
   cout<<"\nEnter password:";
   cin>>a;
   if(password==a)
   {
    D:
    cout<<"\nSelect platform:\n1.ANDROID\n2.IOS\n3.PS4\n4.XBOX 1\nEnter platform id:";
    cin>>ch;
    if(ch==1)
    g=&platform[0];
    else if(ch==2)
    g=&platform[1];
    else if(ch==3)
    g=&platform[2];
    else if(ch==4)
    g=&platform[3];
    else 
    {
     cout<<"\nEnter valid choice:";
     goto D;
    }
    return 1;
   }
   else
   {
    cout<<"\nPassword incorrect";
    cout<<"\nYou have "<<count-1<<" more tries";
    count--;
    if(count!=0)
    goto J;
    else
    return 0;
   }
 }
 int updatenum()
 {
  int count=3;
  K:
  cout<<"\nEnter password:";
  cin>>a;
  if(password==a)
  {
   cout<<"\nEnter new mobile number:";
   cin>>num;
   return 1;
  }
  else
  {
   cout<<"\nPassword incorrect";
   cout<<"\nYou have "<<count-1<<" more tries";
   count--;
   if(count!=0)
   goto K;
   else
   return 0; 
  }
 }
};

int main()
{
 data entry[10];
 list<data> Entry;
 list<data>:: iterator it;
 int i,j,k,m;
 i=0,m=0;
 F:
 while(1)
 {
  cout<<"\n1.New registration\n2.Update previously registered information\n3.Cancel registration\n4.View participants list\n0.Exit\n";
  cout<<"Enter your choice:";
  cin>>c;
  if(c==1)
  {
   if(entry[i].getdata())
   {
    Entry.push_back(entry[i]);
    cout<<"\nYour entry was successfully registered";
    i++;
    //m++;
   }
   else
   {
    cout<<"\nRegistration unsuccessful, please try registering again";
   }
  }
  else if(c==2)
  {
   cout<<"\nEnter your gaming id:";
   cin>>b;
   k=0;
   while(b!=entry[k].id)
   {
    k++;
   }
   cout<<"\nWhat do you want to update?";
   cout<<"\n1.Name\n2.age\n3.Game\n4.Platform\n5.Mobile number\nEnter your choice:";
   cin>>c;
   if(c==1)
   {
    if(entry[k].updatename())
    {
     for (it = Entry.begin(); it != Entry.end(); it++)
     {
      if(it->id==b)
      break;
     }
     it->name=entry[k].name;
     cout<<"\nName updated successfully";
    }
    else
    {
     cout<<"\n Account locked due to suspicious activity";
     cout<<"\nkindly contact us at :9987601209 or onlinegaming@gmail.com for further queries\n";
    }
   }
   else if(c==2)
   {
    if(entry[k].updateage())
    {
     for (it = Entry.begin(); it != Entry.end(); it++)
     {
      if(it->id==b)
      break;
     }
     it->age=entry[k].age;
     cout<<"\nAge updated successfully";
    }
    else
    {
     cout<<"\n Account locked due to suspicious activity";
     cout<<"\nkindly contact us at :9987601209 or onlinegaming@gmail.com for further queries\n";
    }
   }
   else if(c==3)
   {
    if(entry[k].updategame())
    {
     for (it = Entry.begin(); it != Entry.end(); it++)
     {
      if(it->id==b)
      break;
     }
     it->g=entry[k].g;
     cout<<"\nGame updated successfully";
    }
    else
    {
     cout<<"\n Account locked due to suspicious activity";
     cout<<"\nkindly contact us at :9987601209 or onlinegaming@gmail.com for further queries\n";
    }
   }
   else if(c==4)
   {
    if(entry[k].updateplatform())
    {
     for (it = Entry.begin(); it != Entry.end(); it++)
     {
      if(it->id==b)
      break;
     }
     it->p=entry[k].p;
     cout<<"\nPlatform updated successfully";
    }
    else
    {
     cout<<"\n Account locked due to suspicious activity";
     cout<<"\nkindly contact us at :9987601209 or onlinegaming@gmail.com for further queries\n";
    }
   }
   else if(c==5)
   {
    if(entry[k].updatenum())
    {
     for (it = Entry.begin(); it != Entry.end(); it++)
     {
      if(it->id==b)
      break;
     }
     it->num=entry[k].num;
     cout<<"\nMobile number updated successfully";
    }
    else
    {
     cout<<"\n Account locked due to suspicious activity";
     cout<<"\nkindly contact us at :9987601209 or onlinegaming@gmail.com for further queries\n";
    }
   }
   else
   {
 
   }
   
  }
  else if(c==3)
  {
   cout<<"\nEnter your gaming id:";
   cin>>b;
   k=0;
   while(b!=entry[k].id)
   {
    k++;
   }
   cout<<"\nEnter password:";
   cin>>a;
   if(a==entry[k].password)
   {
    /*for(j=k;j<9;j++)
    {
     entry[j]=entry[j+1];
    }
    i--;*/
    for (it = Entry.begin(); it != Entry.end(); it++)
     {
      if(it->id==b)
      break;
     }
     Entry.erase(it);
    cout<<"\nTRUE GAMERS NEVER QUIT. SHAME ON YOU.\nYour registration was cancelled anyway";
   }
   else
   {
    cout<<"\nSUSPICIOUS ACTIVITY HAS BEEN REPORTED";
   }
  }
  else if(c==4)
  {
   if(i==0)
   {
    cout<<"\nNO ENTRIES CURRENTLY REGISTERED";
   }
   else
   {
    cout<<"\n";
    cout<<"\n========================================================================================================";
    cout<<"\n                                        LIST OF PARTICIPANTS FOR THE GAMING EVENT                       ";
    cout<<"\n========================================================================================================";
    /*for(k=0;k<m;k++)
    {
     Entry.push_back(entry[k]);
    }*/
    k=0;
    for (it = Entry.begin(); it != Entry.end(); it++,k++)
    {
     cout<<"\n_____________________________________________________________________________________________________";
     cout<<"\n\tENTRY NO. "<<(k+1);
     cout<<"\n\tGAMER ID : "<<it->id;
     cout<<"\n\tPREFERRED GAME : "<<*it->g;
     cout<<"\n\tPREFERRED PLATFORM : "<<*it->p;
     cout<<"\n______________________________________________________________________________________________________";
    }
   }
  }
  else if(c==0)
  break;
 }
 return 0;
}