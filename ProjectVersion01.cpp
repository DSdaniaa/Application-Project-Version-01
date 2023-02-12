#include <iostream>
#include <conio.h>
using namespace std;
string Names[200], Gender[200], Country[200], SignedAs[200],orderArtist[200], orderSize[200],orderType[200],orderTheme[200], Age[200];
string City[200], Address[200], Username[200], password[200], Artists[50], paintingTypes[20], paintingThemes[20], paintingSize[10];
int UserID[200], Number, TypeCount=0, ArtistCount=0, ThemeCount=0, SizeCount=0, orderCount=0,orderID[200];
float paintingPrice[10];
void printHeader();
void initialize();
string printFirstMenu();
void SignedAsMenu(int num);
void printRegistrationMenu(int num);
string printLoginMenu();
void printAdminMenu();
void printCustomerMenu();
void AdminChoice1();
void AdminChoice2();
void AdminChoice3();
void AdminChoice4();
void AdminChoice5();
void AdminChoice6();
void AdminChoice7();
void AdminChoice8();
void AdminChoice9();
void CustomerChoice1();
void CustomerChoice2();
void CustomerChoice3();
void CustomerChoice4();
void CustomerChoice5();
void CustomerChoice6();
void CustomerChoice7();
void CustomerChoice8();
void CustomerChoice9();


main(){
    string isLogin, AdminChoice, CustomerChoice,CustomerEnd="0",AdminEnd="0";
    bool match=false, match2=false;
    string isAdmin;
    initialize();

    for(int i=0; i<200; i++){
        match2=false;
        while(match2==false){
            printHeader();
            isLogin = printFirstMenu();
            if(isLogin=="2"){
                match2=true;
                printHeader();
                printRegistrationMenu(i);
                SignedAsMenu(i);
           
            }
           else if(isLogin=="1"){
                match2=true;
                printHeader();
                isAdmin =printLoginMenu();
                if(isAdmin=="false"){
                    cout << "INVALID USERNAME AND PASSWORD"<< endl <<endl;
                    cout << " Press any key to go back: ";
                    getch();
                
                }
            }
            else{
                cout << "INVALID ENTRY";
                getch();
            }
        }
       if(isAdmin=="Admin" || isAdmin=="admin"){
          while(AdminEnd!="10"){
                printHeader();
                printAdminMenu();
                cout << "PLEASE ENTER YOUR CHOICE: ";
                cin >>AdminChoice;
                if(AdminChoice=="1"){
                    printHeader();
                    AdminChoice1();
                }
               else if(AdminChoice=="2"){
                    printHeader();
                    AdminChoice2();
                }
               else if(AdminChoice=="3"){
                    printHeader();
                    AdminChoice3();
                }
               else if(AdminChoice=="4"){
                    printHeader();
                    AdminChoice4();
                }
               else if(AdminChoice=="5"){
                    printHeader();
                    AdminChoice5();
                }
               else if(AdminChoice=="6"){
                    printHeader();
                    AdminChoice6();
                }
              else if(AdminChoice=="7"){
                    printHeader();
                    AdminChoice7();
                }
                else if(AdminChoice=="8"){
                    printHeader();
                    AdminChoice8();
                }
                else if(AdminChoice=="9"){
                    printHeader();
                    AdminChoice9();
                }
                else if(AdminChoice=="10"){
                    AdminEnd="10";
                }
                else{
                    cout << "INVALID ENTRY";
                    getch();
                }
            }
        }
        else if(isAdmin=="Customer" || isAdmin=="customer"){
            while(CustomerEnd!="10"){
               system("cls");
               printHeader();
               printCustomerMenu();
               cout << "PLEASE ENTER YOUR CHOICE: ";
               cin >> CustomerChoice;
                if(CustomerChoice=="1"){
                    printHeader();
                    CustomerChoice1();
                }
                else if(CustomerChoice=="2"){
                    printHeader();
                    CustomerChoice2();
                }
                else if(CustomerChoice=="3"){
                    printHeader();
                    CustomerChoice3();
                }
                else if(CustomerChoice=="4"){
                    printHeader();
                    CustomerChoice4();
                }
                else if(CustomerChoice=="5"){
                    printHeader();
                    CustomerChoice5();
                }
                else if(CustomerChoice=="6"){
                    printHeader();
                    CustomerChoice6();
                }
                else if(CustomerChoice=="7"){
                    printHeader();
                    CustomerChoice7();
                }
                else if(CustomerChoice=="8"){
                    printHeader();
                    CustomerChoice8();
                }
                else if(CustomerChoice=="9"){
                    printHeader();
                    CustomerChoice9();
                }
                else if(CustomerChoice=="10"){
                    CustomerEnd="10";
                }
                else{
                    cout << "INVALID ENTRY";
                    getch();
                }

            }
        }
    }
}
void printHeader(){
    system("cls");
    cout << "************************************************************************************************************************" << endl;
    cout << "***********************************************ART GALLERY MANAGEMENT SYSTEM********************************************"<< endl ;
    cout << "************************************************************************************************************************" <<endl << endl;
}
void SignedAsMenu(int num){// Funtion that stores weather the user registered as customer or admin
    string choice;
    bool match=false;
    cout << "                                                   ******SELECT******                                                   " << endl;
    cout << "                                    *********************      ********************"<< endl;
    cout << "                                1-  *       ADMIN       *   2- *     CUSTOMER     *"<< endl;
    cout << "                                    *********************      ********************" << endl <<endl;
    while(match==false){
        cout << "                                                   Enter Your Choice: ";
        cin >> choice;
        if(choice=="1"){
            SignedAs[num]="admin";
            match=true;
        }
        else if(choice=="2"){
            SignedAs[num]="customer";
            match=true;
        
        }
        else{
           cout << "INVALID ENTRY" <<endl << endl;
           getch();
        }
    }

}
string printFirstMenu(){
    string choice;
    cout << "                                              **********WELCOME**********                                     " << endl<<endl;
    cout << "                                    *********************      *********************"<< endl;
    cout << "                                1-  *       LOGIN       *   2- *      REGISTER     *"<< endl;
    cout << "                                    *********************      *********************" << endl <<endl;
    cout << "                                                   Enter Your Choice: ";
    cin >> choice;
    return choice;
    
}
void printAdminMenu(){
    cout << "                                               ************ADMIN************"<<endl<<endl;
    cout << "********************OPTIONS********************" << endl;
    cout << "1-  Add An Artist" << endl;
    cout << "2-  Remove A specific Artist" <<endl;
    cout << "3-  Add A Type Of Painting" << endl;
    cout << "4-  Add A Themes Of Paintings" << endl;
    cout << "5-  Remove A Theme Of Painting " << endl;
    cout << "6-  Update Available Size And price Of Paintings"<<endl;
    cout << "7-  View List Of Customers And Their Details" << endl;
    cout << "8-  View List Of Pending Orders" << endl;
    cout << "9-  Remove A Pending Order From The List "<< endl;
    cout << "10- Log Out" << endl<<endl;
    cout << "***********************************************" << endl;
    cout << "***********************************************" << endl<<endl;

    

}
void printCustomerMenu(){
    cout << "                                             ************CUSTOMERS************"<<endl <<endl;
    cout << "*************************OPTIONS*************************" << endl;
    cout << "1-  View Your Cart" << endl;
    cout << "2-  Add A Painting To Cart" << endl;
    cout << "3-  Remove A Painting From Cart" << endl;
    cout << "4-  View List Of Artists" << endl;
    cout << "5-  View Avaiable Types Of Paintings" << endl;
    cout << "6-  View Available Size Of Pintings" << endl;
    cout << "7-  View Available Themes Of Paintings" <<endl;
    cout << "8-  View Price Of A Specific Painting"<< endl;
    cout << "9-  Checkout" << endl;
    cout << "10- Log Out" << endl <<endl;
    cout << "*********************************************************" << endl;
    cout << "*********************************************************" << endl << endl;

}
void printRegistrationMenu(int num){// Function to Register a user
    int length;
    string age;
    string username, Password;
    bool match=false, match1=false, match2=true;
    cout << "                                         **************************************"<< endl;
    cout << "                                         |#|           Registration         |#|"<< endl;
    cout << "                                         **************************************" << endl << endl;
    cout << "                                         Enter Your Full Name: ";
    cin.ignore();
    getline(cin,Names[num]);
    while(match1==false){
    cout << "                                         Enter Your Gender (Male or Female): ";
    getline(cin, Gender[num]);
    if((Gender[num]!="male") && (Gender[num]!="Male") && (Gender[num]!="Female") && (Gender[num]!="female")){
        cout << " INVALID ENTRY" <<endl;
    }
    else{
        match1=true;
    }
    }
    while(match!=true){
        cout << "                                         Enter Your Age: ";
        cin >> Age[num];
        age=Age[num];
        length=age.length();
        for(int i=0; i<length; i++){// To validate that Age is entered in digits
            if(age[i]<48 || age[i]>57){
                match=false;
            }
           else{
                match=true;
            }
        }
        if(match==false){
            cout << " INVALID ENTRY";

        }
    }
    cout << "                                         Enter Your Country: ";
    cin >> Country[num];
    cout << "                                         Enter Your City: ";
    cin >> City[num];
    cout << "                                         Enter Your Address: ";
    cin.ignore();
    getline(cin,Address[num]);
    while(match2==true){
    cout << "                                         Enter A Username: ";
    cin >> username;
    cout << "                                         Enter A Password: ";
    cin >> Password;
    for(int i=0; i<200; i++){// To check if the username and password already exists or not
        if(Username[i]==username && password[i]==Password){
            match2=true;
            cout << "USERNAME AND PASSWORD ALREADY EXISTS"<< endl;
            break;
        }
        else{
            match2=false;
        }
    }
    if(match2==false){
        Username[num]=username;
        password[num]=Password;
    }
    }
    cout << "                                               ASSIGNED USER ID: "<< UserID[num] << endl << endl ;
    cout << "PRESS ANY KEY TO CONTINUE: ";
    getch();
    system("cls");
    
}
string printLoginMenu(){// Function for the user to login
    string isUsername, isPassword, isAdmin;
    cout << "                                         **************************************"<< endl;
    cout << "                                         |#|         LOGIN INFORMATION      |#|"<< endl;
    cout << "                                         **************************************" << endl << endl;
    cout << "                                         Enter Your Username: ";
    cin >> isUsername;
    cout << "                                         Enter Your Password: ";
    cin >> isPassword;
    cout << "                                         Login As admin or customer: ";
    cin >> isAdmin;
    for(int x=0;x<200; x++){// To store the UserID of the current user in a variable, so it can be used in different options
        if(isUsername== Username[x] && isPassword==password[x] && isAdmin==SignedAs[x]){
            Number=UserID[x];
            return isAdmin;
        }
    }
 return "false";
}
void initialize(){
    for(int z=0; z<200; z++){
        UserID[z]=z+1;
        orderID[z]=-1;
    }
    for(int z=0; z<50; z++){
        Artists[z]="none";
    }
    for(int z=0; z<20; z++){
        paintingTypes[z]="none";
        paintingThemes[z]="none";
    }
    for(int z=5; z<10; z++){
        paintingSize[z]="none";
    }
    paintingSize[0]= "Extra Small";// Build in Five sizes of paintings
    paintingSize[1]= "Small";
    paintingSize[2]= "Medium";
    paintingSize[3]= "Large";
    paintingSize[4]= "Extra Large";
    paintingPrice[0]=100.0;
    paintingPrice[1]=200.0;
    paintingPrice[2]=200.0;
    paintingPrice[3]=400.0;
    paintingPrice[4]=500.0;


}
void AdminChoice1(){
    string Artist;
    bool match=false;
    cout << "    Enter The Name Of Artist You want To Add: ";
    cin.ignore();
    getline(cin,Artist);
    for(int z=0; z<50;z++){// to check if Artist already exists
        if(Artists[z]==Artist){
            match==true;
            cout << "ARTIST ALREADY EXISTS";
            getch();
            break;
        }
    }
    if(ArtistCount==50 && match==false){
        cout << "Maximum 50 Artists Can Be Entered, Space Is Full";
    }
    for(int i=0; i<50; i++){//To make sure no other record of Artists is being overwrited
        if(Artists[i]=="none" && match==false){
            Artists[i]=Artist;
            ArtistCount++;
            break;
        }
    }

}
void AdminChoice2(){
    string Artist;
    bool match=false;
    cout << "    Enter The Name Of Artist You want To Remove: ";
    cin.ignore();
    getline(cin,Artist);
    for(int i=0; i<50; i++){// To check if the name entered exists in the array or not
        if(Artists[i]==Artist){
            Artists[i]="none";
            match=true;
            ArtistCount--;
        }
    }
    if(match==false){
        cout <<" Artist Was Not Found";
        getch();
            
    }

}
void AdminChoice3(){
    string type;
    bool match=false;
    cout << "    Enter The type Of Painting You Want To Add: ";
    cin.ignore();
    getline(cin,type);
    for(int z=0; z<20;z++){//To check if the type entered already exists in the array or not
        if(paintingTypes[z]==type){
            match==true;
            cout << "TYPE ALREADY EXISTS";
            getch();
            break;
        }
    }
    if(TypeCount==20 && match==false){
        cout << "Maximum 20 Types Can Be Entered, Space Is Full";
        getch();
    }
    else{
        for(int i=0; i<20; i++){//To make sure no other record of Types is being overwrited
            if(paintingTypes[i]=="none" && match==false){
                paintingTypes[i]=type;
                TypeCount++;
                break;
            }
        }
    }
}
void AdminChoice4(){
 string newTheme;
 bool match=false;
    
    cout << " Enter The Name of Theme You Want To Add: ";
    cin.ignore();
    getline(cin,newTheme);
    for(int z=0; z<20;z++){//To check if the Theme entered already exists in the array or not
        if(paintingThemes[z]==newTheme){
            match==true;
            cout << "THEME ALREADY EXISTS";
            getch();
            break;
        }
    }
    if(ThemeCount==20 && match==false){
        cout << "Maximum 20 Themes Can Be Entered, Space Is Full";
        getch();
    }
    else{
        for(int i=0; i<20; i++){//To make sure no other record of Theme is being overwrited
            if(paintingThemes[i]=="none" && match==false){
                paintingThemes[i]=newTheme;
                ThemeCount++;
                break;
            }
        }
    }
    
}
void AdminChoice5(){
    bool match=false;
    string theme1;
    cout << "    Enter The Name Of Theme You want To Remove:";
    cin >> theme1;
    for(int i=0; i<20; i++){// To check if the theme entered exists in the array or not
        if(paintingThemes[i]==theme1){
            match=true;
            paintingThemes[i]="none";
            break;
        }
    }
    if(match==false){
        cout <<" Theme Was Not Found";
        getch();
            
    }
}
void AdminChoice6(){
    int choice;
    float price;
    string size;
    bool match=false, match1=false;
    cout <<"*******OPTIONS*******"<<endl;
    cout <<" 1- Add A Size"<<endl;
    cout <<" 2- Remove A Size "<<endl<<endl;
    cout <<" ENTER YOUR CHOICE:";
    cin >> choice;
    if(choice==1){
        cout <<"    Enter The New Size:";
        cin >> size;
        cout <<"    Enter Its Price: ";
        cin >> price;
        for(int z=0; z<10;z++){//To check if the Size entered already exists in the array or not
            if(paintingSize[z]==size){
                match==true;
                cout << "SIZE ALREADY EXISTS";
                getch();
                break;
            }
        }
        if(SizeCount==10 && match==false){
           cout << "Maximum 10 Sizes Can Be Entered, Space Is Full";
           getch();
        }
       else{
            for(int i=0; i<10; i++){//To make sure no other record of Size is being overwrited
               if(paintingSize[i]=="none" && match==false){
                    paintingSize[i]=size;
                    paintingPrice[i]=price;
                    SizeCount++;
                    break;
                }
            }
        }
    }
    else if(choice==2){
        cout <<"    Enter The Size you want to remove: ";
        cin >> size;
        for(int i=0; i<10; i++){// To check if the Size entered exists in the array or not
            if(paintingSize[i]==size){
                match1=true;
                paintingSize[i]="none";
                paintingPrice[i]=0;
                break;
            }
        }
        if(match1==false){
        cout <<" Size Was Not Found";
        getch();
            
    }
    }
}
void AdminChoice7(){
    for(int i=0; i<200; i++){// To Show the list of all the customers and their details
        if(SignedAs[i]=="customer"){
        cout << "  USER ID: " << UserID[i]<<endl;
        cout << "  NAME: " <<Names[i]<< endl;
        cout << "  GENDER: "<< Gender[i]<< endl;
        cout << "  AGE: "<< Age[i]<<endl;
        cout << "  CITY: " << City[i]<<endl;
        cout << "  COUNTRY: " << Country[i]<<endl;
        cout << "  ADDRESS: " << Address[i]<<endl <<endl;
        }
    }
    getch();
}
void AdminChoice8(){
    int num;
    cout << "**********PENDING ORDERS**********" << endl << endl;
    for(int z=0; z<orderCount; z++){// To view List of all the orders placed and details
        num=orderID[z]-1;
        cout << "  User ID: " << orderID[z]<<endl;
        cout << "  NAME: " <<Names[num]<< endl;
        cout << "  CITY: "<< City[num] <<endl;
        cout << "  COUNTRY: " << Country[num]<<endl;
        cout << "  ADDRESS: " << Address[num]<<endl;
        cout << "  PAINTING: " << endl;
        cout << "  ARTIST: " << Artists[num] <<endl;
        cout << "  TYPE: " << paintingTypes[num];
        cout << "  SIZE: " << paintingSize[num];
        cout << "  THEME: "<< paintingThemes[num] << endl <<endl;
    }
    getch();
}
void AdminChoice9(){
    int ID;
    bool match=false;
    string name, type,themee,size;
    cout <<"    Enter order ID:";
    cin >> ID;
    cout <<"    Enter Artist Name: ";
    cin >> name;
    cout <<"    Enter Painting Type: ";
    cin >>type;
    cout <<"    Enter Painting Theme: ";
    cin >>themee;
    cout <<"    Enter Painting Size: ";
    cin >>size;
    for(int i=0; i<200; i++){// To remove the wanted record from the pending order list
        if(orderID[i]==ID && orderArtist[i]==name && orderType[i]==type &&  orderTheme[i]==themee && orderSize[i]==size ){
            orderID[i]=-1;
            orderType[i]="none";
            orderTheme[i]="none";
            orderArtist[i]="none";
            orderSize[i]="none";
            orderCount--;
            match=true;
            cout << "Done!";
            break;

        }
    }
    if(match==false){
        cout << " Record Does Not Exist";
    }
    getch();


}
void CustomerChoice1(){
    cout << "                                                ***********CART***********"<<endl<<endl;
    for(int i=0; i<200; i++){// To view the cart of the current logged in customer
        if(orderID[i]==Number){
           cout << "     **PAINTING**"<<endl;
           cout << " Artist: " << orderArtist[i]<< endl;
           cout << " Type: " <<orderType[i] <<endl;
           cout << " Theme: "<< orderTheme[i] <<endl;
           cout << " Size: " << orderSize[i] <<endl<<endl;

        }
    }
    getch();
}
void CustomerChoice2(){
    int num;
    for(int i=0; i<200;i++){
        if(orderID[i]==-1){
            num=i;
            orderID[i]=Number;// orderID contains the UserID of the person(used as a link)
            orderCount++;
            break;
        }
    }
    cout << "    Enter The Artist Name Of The Painting You Want To Add To Your Cart: ";
    getline(cin, orderArtist[num]);
    cout << "    Enter The Type Of The Painting You Want To Add To Your Cart: ";
    cin >> orderType[num];
    cout << "    Enter The Theme Of The Painting You Want To Add To Your Cart: ";
    cin >> orderTheme[num];
    cout << "    Enter The Size Of The Painting You Want To Add To Your Cart: ";
    getline(cin, orderSize[num]);
    

}
void CustomerChoice3(){
    string artist, type, theme, size;
    cout << "    Enter The Artist Name Of The Painting You Want To Remove From Your Cart: ";
    getline(cin, artist);
    cout << "    Enter The Type Of The Painting You Want To Remove From Your Cart: ";
    cin >> type;
    cout << "    Enter The Theme Of The Painting You Want To Remove From Your Cart: ";
    cin >> theme;
    cout << "    Enter The Size Of The Painting You Want To Remove From Your Cart: ";
    cin >>size;
    for(int i=0; i<200; i++){// To Remove a order from the cart
        if(orderID[i]=Number && orderArtist[i]==artist && orderType[i]==type &&  orderTheme[i]==theme && orderSize[i]==size ){
            orderID[i]=-1;
            orderType[i]="none";
            orderTheme[i]="none";
            orderArtist[i]="none";
            orderSize[i]="none";
            orderCount--;

        }
    }

}
void CustomerChoice4(){
    bool match=false;
    cout << "********ARTISTS********"<<endl<<endl;
    for(int i=0; i<50; i++){// To view all the list of artists
        if(Artists[i]!="none"){
            match=true;
            cout <<"   " <<  Artists[i] << endl <<endl;
        }

    }
     if(match==false){
        cout << "NO ARTISTS FOUND";
    }
    cout <<endl <<endl<<  "Press Any Key To go back: ";
    getch();

}
void CustomerChoice5(){
    bool match=false;
    cout << "********PAINTING TYPES********"<< endl <<endl;
    for(int i=0; i<20; i++){// To view list of all the Painting types
        if(paintingTypes[i]!="none"){
            match=true;
            cout << paintingTypes[i] << endl<< endl;
        }

    }
    if(match==false){
        cout << "NO TYPES FOUND";
    }
    cout <<endl <<endl<<  "Press Any Key To go back: ";
    getch();

}
void CustomerChoice7(){
    bool match=false;
    cout << "********PAINTING THEMES********"<<endl<<endl;
    for(int i=0; i<20; i++){// To view list of all the Painting Themes
        if(paintingThemes[i]!="none"){
            match=true;
            cout << paintingThemes[i] << endl<<endl;
        }

    }
    if(match==false){
        cout << "NO THEMES FOUND";
    }
    cout <<endl <<endl<<  "Press Any Key To go back: ";
    getch();

}
void CustomerChoice6(){
    bool match=false;
    cout << "********PAINTING SIZES********"<<endl<<endl;
    for(int i=0; i<10; i++){// To view list of all the Painting Sizes
        if(paintingSize[i]!="none"){
            match=true;
            cout << paintingSize[i] << endl<< endl;
        }
    }
    if(match==false){
        cout << "NO SIZES FOUND";
    }
    cout <<endl <<endl<<  "Press Any Key To go back: ";
    getch();
}
void CustomerChoice8(){
    string size;
    bool match=false;
    cout << "Enter The Size Of The Painting : ";
    cin >> size;
    for(int i=0; i<10; i++){// To view price of a specific painting, which depends on its size
        if(paintingSize[i]==size){
            match=true;
            cout <<" Painting Price: $" << paintingPrice[i];
            break;
        }
        
    }
    if(match==false){
    
        cout << "Size Does Not exist"<<endl;
        
    }
    getch();

}
void CustomerChoice9(){
    float sum=0;
    for(int i=0 ; i<200; i++){// To checkout and show the total amount
        if(orderID[i]==Number){
            for(int z=0; z<200; z++){
                if(orderSize[i]==paintingSize[z]){
                    sum=sum+paintingPrice[z];

                }

            }
            

        }
    }
    cout << " TOTAL PAYABLE AMOUNT IS: " << sum ;
    getch();

}











