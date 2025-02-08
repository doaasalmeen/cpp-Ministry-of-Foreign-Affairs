#include<iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;
class Ministry{

private:
     string s;
public:
    void Residence_visa_extension(){
    string text[3] = {"************", "Residence visa extension" ,"************"};
    for(int i=0;i<3;i++){
        int padding = (120 - text[i].length()) / 2;
        cout << setw(padding + text[i].length()) << text[i] << endl;
       }

    string full_name , gender, place_of_birth, reasons, Agen;

    int gen, day, month, year, period_of_extension, pass_no, house_rental,last_visa;
    long int Identity_Card_No, passport_No;

    cout<<"Enter your Original passports \n";
    cin>>pass_no;

    cout<<"Enter House rental contract \n";
    cin>>house_rental;

    cout<<"Enter Last visa \n";
    cin>>last_visa;

    cout<<"Bring a copy of the apartment's electricity bill \n";
    cout<<"Bring a copy of the tenant's passport \n";
    cout<<"Bring a copy of your tenant visa \n";
    cout<<"Do you want to fill out the Migration Agency form?\n(YES OR NO) \n";
    cin>>Agen;

    if(Agen == "yes")
    {

    cout<<"Enter your full name \n";
    getline(cin, s);
    getline(cin, full_name);
    cout<<"What is your gender?\n1.Male\n2.female\n";
    cin>>gen;
    (gen==1)? gender="male" : gender="female";
    cout<<"Enter date of birth (day month year)";
    cin >> day >> month >> year;
    cout<<"Enter place of birth\n";
    cin>>place_of_birth;
    cout<<"Enter your Identity Card No. \n";
    cin>>Identity_Card_No;
    cout<<"Enter passport No. \n";
    cin>>passport_No;
    cout<<"Period of extension sought?";
    cin>>period_of_extension;
    cout<<"Reasons for seeking extension? \n";
    getline(cin, s);
    getline(cin, reasons);
    }
    else
        {
    cout<<"your application has been done! \n";
        }

        cout<<"\n\n************************successfully registered***************************\n";
        cout<<"\n\n**press any key to continue**\n";
        cin>>s;
}
void Mixed_marriageY_F(){
    string text[4] = {"************", "Requirements mixed marriage contract", "(Yemeni husband , Foreign wife)" ,"************"};
    for(int i=0;i<4;i++){
        int padding = (120 - text[i].length()) / 2;
        cout << setw(padding + text[i].length()) << text[i] << endl;
       }
       int pass_H, pass_W;
    cout<<"Yemeni husband:\n";
    cout<<"1) Bring Photograph\n";
    cout<<"2) HIV TEST AIDS screening\n";
    cout<<"3) Submit a request to the embassy to address the authorities inside to obtain a document (no objection to mixed marriage)\n";
    cout<<"\n4) **Enter your Passport and a copy thereof**\n";
    cin>>pass_H;
    cout<<"\n\n-------------\n\n";
    cout<<"Foreign wife:\n";
    cout<<"1) Bring Photograph\n";
    cout<<"2) HIV TEST AIDS screening\n";
    cout<<"3) Approval of the wife’s guardian\n";
    cout<<"4) A copy of the father and mother’s passport\n";
    cout<<"5) Certificate of good conduct and conduct\n";
    cout<<"6) Approval of the authorities in the wife’s country\n";
    cout<<"\n7) **Enter your Passport and a copy thereof**\n";
    cin>>pass_W;


    cout<<"\n\n************************successfully registered***************************\n";
        cout<<"\n\n**press any key to continue**\n";
        cin>>s;

}
void Mixed_marriageF_Y(){
    string text[4] = {"************", "Requirements mixed marriage contract", "(Foreign husband , Yemeni wife)" ,"************"};
    for(int i=0;i<4;i++){
        int padding = (120 - text[i].length()) / 2;
        cout << setw(padding + text[i].length()) << text[i] << endl;
       }
    int pass_Hu, pass_Wi;
    cout<<"Yemeni wife:\n";
    cout<<"1) Bring Photograph\n";
    cout<<"2) Health certificate (HIV TEST AIDS test)\n";
    cout<<"3) The presence of the guardian at the embassy or a statement of approval certified by the competent authorities\n";
    cout<<"4) Submit a request to the embassy to address the authorities at home to obtain a document (no objection to mixed marriage)\n";
    cout<<"\n5) **Enter your Passport and a copy thereof**\n";
    cin>>pass_Wi;
    cout<<"\n\n-------------\n\n";
    cout<<"Foreign husband:\n";
    cout<<"1) Bring Photograph\n";
    cout<<"2) Health certificate (HIV TEST AIDS test)\n";
    cout<<"3) A copy of the father and mother’s passport\n";
    cout<<"4) Original certificate of good conduct\n";
    cout<<"5) The original approval of the authorities in his country\n";
    cout<<"6) To be a Muslim\n";
    cout<<"7) The age difference should not be more than 20 years\n";
    cout<<"\n8) **Enter your Passport, a copy thereof, and ID card**\n";
    cin>>pass_Hu;


    cout<<"\n\n************************successfully registered***************************\n";
        cout<<"\n\n**press any key to continue**\n";
        cin>>s;
    }
void Mixed_marriageY_Y(){
    string text[4] = {"************", "Requirements mixed marriage contract", "(Yemeni husband , Yemeni wife)" ,"************"};
    for(int i=0;i<4;i++){
        int padding = (120 - text[i].length()) / 2;
        cout << setw(padding + text[i].length()) << text[i] << endl;
       }
    cout<<"Yemeni (husband, and wife):\n";
    cout<<"1) The presence of the guardian at the embassy or a power of attorney to do so (certified by the Ministries of Foreign Affairs and Justice)\n";
    cout<<"2) Passports of the husband and wife and a copy thereof\n";
    cout<<"\n3) **Enter your Passport of the guardian or agent and a copy thereof**\n";


    cout<<"\n\n************************successfully registered***************************\n";
        cout<<"\n\n**press any key to continue**\n";
        cin>>s;

}
void Requirements_student_not_to_leave_a_companion(){
     string text[3] = {"************", "Requirements for a student not to leave a companion" ,"************"};
    for(int i=0;i<3;i++){
        int padding = (120 - text[i].length()) / 2;
        cout << setw(padding + text[i].length()) << text[i] << endl;
       }
       int pass_o, pass_s, birth;
    cout<<"1) Enter your the applicant's original passport?\n";
    cin>>pass_o;
    cout<<"2) Enter The original student passport accompanying the valid student visa.\n";
    cin>>pass_s;
    cout<<"3) Enter the birth certificate?";
    cin>>birth;


    cout<<"\n\n************************successfully registered***************************\n";
        cout<<"\n\n**press any key to continue**\n";
        cin>>s;
}
void driving_license_translation(){
    string text[3] = {"************", "Requirements of driving license translation" ,"************"};
    for(int i=0;i<3;i++){
        int padding = (120 - text[i].length()) / 2;
        cout << setw(padding + text[i].length()) << text[i] << endl;
       }
    cout<<"The original passport\n";
    cout<<"The original Yemeni license is valid\n";


    cout<<"\n\n************************successfully registered***************************\n";
        cout<<"\n\n**press any key to continue**\n";
        cin>>s;
}
 void Making_agencies_of_all_kinds(){
    string text[3] = {"************", "Requirements of different types of agencies","************"};
    for(int i=0;i<3;i++){
        int padding = (120 - text[i].length()) / 2;
        cout << setw(padding + text[i].length()) << text[i] << endl;
       }
       int pass_contract_wife, pass_contract_husband,pass_devorse_wife;

       cout<<"1) The client must be present with his passport\n";
       cout<<"2) A copy of the proof document (passport or ID card)\n";
       cout<<"3) Types of agencies:____________________\n";
       cout<<"1.Marriage contract\n";
       cout<<"2.Divorce power of attorney\n";
       int contract_operation;
       cin>>contract_operation;
       switch(contract_operation)
       {
       case 1:
            cout<<"***************   Marriage contract   *********\n";
            cout<<"1) Proof of the identity of the husband and wife\n";
            cout<<"**FOR wife:\n";
            cout<<"Enter your Original passports OR ID card\n";
            cin>>pass_contract_wife;
            cout<<"\n-------------\n";
            cout<<"**FOR husband:\n";
            cout<<"Enter your Original passports OR ID card\n";
            cin>>pass_contract_husband;
            break;
       case 2:
        cout<<"Bring a copy of the marriage contract\n";
        cout<<"Enter The (passport or ID card) for the wife\n";
        cin>>pass_devorse_wife;
        break;
       default:
               cout<<"you have to choose 1 -OR-> 2 \n";

       }

       cout<<"\n\n************************successfully registered***************************\n";
        cout<<"\n\n**press any key to continue**\n";
        cin>>s;

}

};



int main(){
Ministry t;
bool b=true;
do{
   //system("cls");
   string text[5] = {"****************","********" , "Ministry of Foreign Affairs" ,"********", "****************"};
   cout<<endl;
   for(int i=0;i<5;i++){
        int padding = (120 - text[i].length()) / 2;
        cout << setw(padding + text[i].length()) << text[i] << endl;
       }
    cout<<"\n\n\nHow can we help you \n\n";
    cout<<"1.Residence visa extension\n";
    cout<<"2.Mixed marriage contract(Yemeni husband , Foreign wife)\n";
    cout<<"3.Mixed marriage contract(Foreign husband , Yemeni wife)\n";
    cout<<"4.Mixed marriage contract(Yemeni husband , Yemeni wife)\n";
    cout<<"5.Requirements_student_not_to_leave_a_companion\n";
    cout<<"6.Driving license translation\n";
    cout<<"7.Making agencies of all kinds\n";
    cout<<"8.Exit\n";
    int operation;
    cin>>operation;
    //system("cls");
    switch(operation){
case 1:
    t.Residence_visa_extension();
    break;
case 2:
    t.Mixed_marriageY_F();
    break;
case 3:
    t.Mixed_marriageF_Y();
    break;
case 4:
    t.Mixed_marriageY_Y();
    break;
case 5:
    t.Requirements_student_not_to_leave_a_companion();
    break;
case 6:
    t.driving_license_translation();
    break;
case 7:
   t.Making_agencies_of_all_kinds();
    break;
case 8:
    b=false;
    break;
default:
    cout<<"you have to choose from 1 --> 8 \n";
    }
}while(b);
return 0;
}
