#include<iostream>
#include<ctime>
#include <stdlib.h>
using namespace std;

class bank
{
public:
  int reply;
  int ans;
  int pin=1130;
  int enteredpin;
  
  void wellcome();
  void insertcard();
  void choose();
  void language();
  void iamnotrobot();
  void enterpin();
  void menu();
  void pingeneration();
  void mobileverify();
  void otpview();
  void seeotp();
  
  
};
      void bank::wellcome()
  {
    //cout<<"\n\n\n\n\n\n\n\t\t\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc";
    cout<<"\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2          |==========================================|          \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2          |             WELCOME TO S.B.I. ATM        |          \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2          |==========================================|          \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
  }
  
      void bank::insertcard()
      {
    cout<<"\n\t\t\xb2\xb2                    PLEASE INSERT YOUR CARD                     \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2            -------------------------------------------         \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2            |          PRESS 1 FOE INSTERT THE CARD   |         \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2            |          PRESS 2 FOR HELP               |         \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2            -------------------------------------------         \xb2\xb2";
  //  cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                PLEASE ENTER YOUR CHOICE :-                     \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
       
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t                                       :- ";
        cin>>reply;
        
        if (reply==1)
        {
          system("cls");
          wellcome(); 
          choose();
        }
        else
        {
          
    }
     
  }
  void bank::choose()
  {
 //     cout<<"\n\t\t\xb2\xb2                                                                    \xb2\xb2";
 //     cout<<"\n\t\t\xb2\xb2  1.DOMESTIC                                        2.INTERNATIONAL \xb2\xb2";
 //     cout<<"\n\t\t\xb2\xb2                                                                    \xb2\xb2";
  // cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2           HI! PLEASE DO NOT REMOVE YOUR CHIP CARD.             \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                LEAVE YOUR CARD INSERTED DURING                 \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                      THE ENTIRE TRANSACTION.                   \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        
  }
  void bank::language()
  {
    sleep(3);
    system("cls");
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                PLEASE SELECT LANGUAGE                          \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   | 1. ENGLISH |  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |1. HINDI    |  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   | 1. GUJARATI|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\t\t ANSWER ;- ";
      cin>>ans;
      if (ans==1)
      {
        system("cls");
        iamnotrobot();
      }
      
  } 
  void bank::iamnotrobot()
  {
    int NUMBER;
    int responce;
      cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                 ENTER ANY NUMBER BETWEEN 10 AND 99             \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                           FOR E.X.'25'                         \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   | 1. YES     |  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   | 2. NO      |  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
    cout<<"\n\t\t\t ENTER NUMBER :- ";
    cin>>NUMBER;
    cout<<"\n\t\t\t YES OR NO    :- ";
    cin>>responce;
    if (responce==1)
    {
      system("cls");
      enterpin();
    }
  }
void bank::enterpin()
{
  int png;
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2   PRESS 1              PLEASE ENTER YOUR PIN                   \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               ---------------------------------------          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |     7     |     8       |     9     |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |           |             |           |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |-------------------------------------|          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |     6     |     5       |     4     |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |           |             |           |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |-------------------------------------|          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |     3     |     2       |     1     |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |           |             |           |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |-------------------------------------|          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                            |           |                       \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                            |    0      |                       \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                            |-----------|                       \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                            |-----------------| \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                            |2. PIN GENERATION| \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                            |-----------------| \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
    cout<<"\n\t\t PLEASE ENTER NUMBER :- ";
    cin>>png;
    switch(png)
       {
      case 1 : cout<<"\n\t\t\t\t\t ENTER PIN ;-   ";
                cin>>enteredpin;
               
               if (enteredpin==pin)
               {
                system("cls");
                 menu();
               }
               else
               {
                system("cls");
                cout<<"\n\n\t\tTRANSACTION FAILED,SORRY YOU HAVE ENTERED INVAILD ATM PIN ";
               }
              break; 
       case 2 : system("cls");
            pingeneration();
              break;
       default : cout<<"\n\n\t\t INVAILD INPUT PLEASE TRY AGAIN ";
                 cout<<"\n\n\t\t PRESS ANY  KEY FOR GO TO PREVIOUS PAGE ";
        }
    
      
    
     
     
   
}
   void bank::menu()
   {
  cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                   PLEASE CHOOSE 'BANKING' FOR                  \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                         CASH  WITHDRAW                         \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ---------------                                               \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  | REGISTRATION |                                              \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ---------------                       -----------------       \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                        |   BANKING     |       \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ----------------                      -----------------       \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  |MINI STATEMENT|                                              \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ----------------                                              \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                         -----------------      \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ----------------                       |BALANCE INQUIRY|      \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  |   SERVICES   |                       -----------------      \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ----------------                                              \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ----------------                       ------------------     \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  |  QUICK CASH  |                       |     TRANSFER   |     \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ----------------                       ------------------     \xb2\xb2";
  cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      
   }
   void bank::pingeneration()
    {
        double accno;
        int correct;
        cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                    PLEASE ENTER TO YOUR ACCOUNT NUMBER                    \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
       cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2            \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2                             \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2            \xb2\xb2   ";cin>>accno;cout<<"                \xb2\xb2            \xb2\xb2                                                             \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2            \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2                             \xb2\xb2";   
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |-------------------|      \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   | PRESS 1 IF CORRECT|      \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |-------------------|      \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";  
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2  |------------------------|  \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2  | press 2 if not correct |  \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2  |------------------------|  \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\t ENTER responce :- ";
        cin>>correct; 
        if (correct==1)
        {
        	system("cls");
        	
          mobileverify();
        }
   }
    
   void bank::mobileverify()
    {
    long long vrfy;
    int crt;
     cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                    ENTER 10 DIGITS MOBILE NUMBER                          \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
       cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2            \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2                             \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2            \xb2\xb2   ";cin>>vrfy;cout<<"                \xb2\xb2            \xb2\xb2                                                             \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2            \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2                             \xb2\xb2";   
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |-------------------|      \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   | PRESS 1 IF CORRECT|      \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |-------------------|      \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";  
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2  |------------------------|  \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2  | press 2 if not correct |  \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2  |------------------------|  \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\n\t\t Enter Responce :- ";
        cin>>crt; 
        if(crt==1)
        {
        	system("cls");
        	otpview();
        	sleep(3);
        	system("cls");
        	seeotp();
		}
        
   }
   void bank::otpview()
   {
   		time_t now = time(0);
            char* currentTime = ctime(&now);
			system("Color 1E");
		 cout<<"\n\n\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";	     
		 cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	      cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	    cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2        ";cout<<currentTime;     
		 cout<<"\t\t\t\t\xb2\xb2                                             \xb2\xb2";                 
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";                 
	        cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	   cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	    cout<<"\n\t\t\t\t\xb2\xb2  |---------------------------------------|  \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2  |      THIS IS YOUR MOBILE SCREEN.      |  \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2  |                                       |  \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2  |   PLEASE WAIT 3 SECONDS TO VIEW OTP.  |  \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2  |---------------------------------------|  \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	   cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	   cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2 =====>>   =====>>    =====>>    =====>>>    \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2       ====>>       ====>>       =====>>     \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";	     
	              
		
   }
   void bank::seeotp()
   {
   		time_t now = time(0);
            char* currentTime = ctime(&now);
   	cout<<"\n\n\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";	     
		 cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	      cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	    cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2        ";cout<<currentTime;     
		 cout<<"\t\t\t\t\xb2\xb2                                             \xb2\xb2";                 
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";                 
	        cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	   cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	    cout<<"\n\t\t\t\t\xb2\xb2  |---------------------------------------|  \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2  |                                      |  \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2  |        THIS IS YOUR MOBILE SCREEN    |  \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2  |   PLEASE WAIT 3 SECONDS TO VIEW OTP.  |  \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2  |---------------------------------------|  \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	   cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	   cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2 =====>>   =====>>    =====>>    =====>>>    \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2       ====>>       ====>>       =====>>     \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";	     
	              
		
   }
  

int main()
{
		system("Color 1E");
  bank sbi;
  sbi.wellcome();
  sbi.insertcard();
  sbi.language();
  
  return 0;
}