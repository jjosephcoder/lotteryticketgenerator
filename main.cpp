#include <algorithm> //library for the shuffle number method
#include <iostream> //library for cout cin and input output streams
#include <random> //library for creating random numbers
#include <vector> //Library for using vectors instead of arrays
#include <windows.h> //Library for using Windows System Colours
#include <mmsystem.h> //Library for accessing windows multimedia method
#include <cstring> //Library for using string methods
#include <limits>
#include <cwchar> //Library for changing the font type and size in the output console
//Accessibility Note: Helvetica is an easier font to read at distancxe
#pragma comment(lib, "winmm.lib"); //USE PRAGMA TO ACCESS THE WINDOWS MEDIA LIBRARIES FOR PLAYSOUND

using namespace std;

//////////////////////////////////
////////Function Prototypes///////
//////////////////////////////////
void flash();


//////////////////////
//General Flash Function///// 
////////////////////
void flash(){
  
    int counter = 10;
    for(int i=1; i<=counter; i++){
    system("COLOR 2");
    Sleep(20);
    system("COLOR 3");
    Sleep(20);
    system("COLOR 4");
    
    }
}


int main() {
    //Maximize the terminal window requires the windows.h library
    keybd_event(VK_MENU,0x38,0,0);
    keybd_event(VK_RETURN,0x1c,0,0);
    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
   
 keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
    
    //Change The Font Type and Size In the Console
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;                   // Width of each character in the font
    cfi.dwFontSize.Y = 22;                  // Height
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_BOLD;
    std::wcscpy(cfi.FaceName, L"ComicSans"); // Choose your font
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
    
    char choice ={};
    
    system("COLOR 2");
    
        while(choice!='Q'&&choice!='q'&&choice!='Y'&&choice!='y'){
        //Play sound for the start of the program
            PlaySound(TEXT("C://Users//jonat//Desktop//National Lottery Number Picker//winner.wav"),NULL, SND_FILENAME| SND_ASYNC);
    
            cout <<"\n\n\n\n\n\n";
    
            cout << "\t\t\t\t*************************************************" << endl;  
            cout << "\t\t\t\t**WARNING THIS PROGRAM CONTAINS FLASHING LIGHTS**" << endl;
            cout << "\t\t\t\t**WARNING THIS PROGRAM CONTAINS FLASHING LIGHTS**" << endl;
            cout << "\t\t\t\t**WARNING THIS PROGRAM CONTAINS FLASHING LIGHTS**" << endl;
            cout << "\t\t\t\t**WARNING THIS PROGRAM CONTAINS FLASHING LIGHTS**" << endl;
            cout << "\t\t\t\t*************************************************" << endl <<endl; 
            cout << "\t\t\t        Enter Q to Quit or enter Y to Continue: ";
    
            cin >> choice;
    
            system("CLS"); 
    
                if(choice=='Q' || choice=='q'){
                return 0;
                }else if(choice!='Y' || choice!='y'){
                    //cout <<"\n\n";
                   // cout << "                              *****************************************************" << endl;
                   // cout << "                              **Please Try Again Enter Q to Quit or Y to Continue**" << endl;
                   // cout << "                              *****************************************************" << endl;
                system("CLS");
                }
                else {
                     cout <<"\n\n";
                    cout << "                              *****************************************************" << endl;
                    cout << "                              **Please Try Again Enter Q to Quit or Y to Continue**" << endl;
                    cout << "                              *****************************************************" << endl;
                }
            }
  
    system("CLS");
    
    string option{};
    
    system("COLOR 2");
    //Play sound for the start of the program
    PlaySound(TEXT("C://Users//jonat//Desktop//National Lottery Number Picker//winner.wav"),NULL, SND_FILENAME| SND_ASYNC);
    
    Sleep(30);
 
            cout << "\n\n\n\n\n\n\n\n";
            cout << "\t\t\t            ***************************************" << endl;
            cout << "\t\t\t            *    Welcome To The Lottery Picker    *" << endl;
            cout << "\t\t\t            *    Welcome To The Lottery Picker    *" << endl;
            cout << "\t\t\t            *    Welcome To The Lottery Picker    *" << endl;
            cout << "\t\t\t            *    Welcome To The Lottery Picker    *" << endl;
            cout << "\t\t\t            *    Welcome To The Lottery Picker    *" << endl;
            cout << "\t\t\t            ***************************************" << endl;
            cout << endl;
            
            //Call the flash function
            flash();
  
         system("COLOR 2");    
    system("CLS");
    //These two lines of code clear the cin and the endspace return character so that
    //only the first character from the imput is being processed so if we enter yes
    //instead of y then we dont get the e or s value passed on through cin to the
    //game selection options.
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
   
        while(option!="L" && option!="S"&& option!="E" && option!="T"&& option!="R"){  
            cout << "\n";
            cout << "\t\t\t\t    ****************************************" << endl;
            cout << "\t\t\t\t    *    Welcome To The Lottery Picker     *" << endl;
            cout << "\t\t\t\t    * Select A Letter To Pick A Game Type  *" << endl;
            cout << "\t\t\t\t    *   Then Enter The Number Of Tickets   *" << endl;
            cout << "\t\t\t\t    *      You Would Like to Play          *" << endl;
            cout << "\t\t\t\t    *      Or Select R To Randomly         *" << endl;
            cout << "\t\t\t\t    *         Select A Game Type           *" << endl;
            cout << "\t\t\t\t    ****************************************" << endl;
            cout << endl;
     
            cout << "\t\t\t\t       -----------------------------------" <<endl;
            cout << "\t\t\t\t      |Enter L for Lotto Millions         |" << endl;
            cout << "\t\t\t\t      |-----------------------------------|" << endl;
            cout << "\t\t\t\t      |Enter S for Set For Life           |" << endl;
            cout << "\t\t\t\t      |-----------------------------------|" << endl;
            cout << "\t\t\t\t      |Enter E for Euro Millions          |" << endl;
            cout << "\t\t\t\t      |-----------------------------------|" << endl;
            cout << "\t\t\t\t      |Enter T for ThunderBall            |" << endl;
            cout << "\t\t\t\t      |-----------------------------------|" << endl;
            cout << "\t\t\t\t      |Enter R for Random Game Selection  |" << endl;
            cout << "\t\t\t\t       -----------------------------------"   <<endl << endl;
            cout << "\t\t\t\tPlease Enter A Letter For The Game You Want To Play: ";
      
     cin >> option;  
   
    //option = toupper(option);
    //Strip the string entered by cin to be just the first character of the string
    
    option = option.substr(0,option.length()-option.length()+1);
    
    //As the input variable option is a string we can treat it as an array, now only with 
    //one element at position in it, as such we can use the toupper option to capitalize
    //the element at position 0 and reassign back to the option variable at 0 so the first
    //character entered by the user is always a capital.
    //Now we have taken covered the edge case of a user entering a string instead of a 
    //character and lower case entry so we only look at the first character entered
    //for the subsequent if statements.
    
    option[0] = toupper(option[0]);
    
    system("CLS");
    
        if(option!="L" && option!="S"&& option!="E" && option!="T"&& option!="R"){
                cout << "                       *****************************************************************" << endl;
                cout << "                       ***Please Try Again & Enter A Valid Option From The Menu Below***" <<endl;
                cout << "                       *****************************************************************" << endl;
        }
    } 
    
    system("CLS");
     
     //RANDOM GAME SELECTION
     if(option=="R"){
        system("CLS");
        option = "LSET"; //Define the string for randomizing the selection
        
        random_device rd;//instantiate the random function to rd
        
        shuffle(option.begin(),option.end(),rd); //shffle the string
        //Take the first character of the string and assign it to option 
      
        option = option.substr(0,option.length()-option.length()+1);
        //cout << "Your rnadom option is: " << option;
        //system("PAUSE");
     }
      
        if(option=="L"){
           system("CLS");
           PlaySound(TEXT("C://Users//jonat//Desktop//National Lottery Number Picker//winner.wav"),NULL, SND_FILENAME| SND_ASYNC);
           int number_of_lines{}; 
            //used as a counter if the logic for the outer for loop, and to display the ticket no
   
           int total_of_lines{};
            // PROVIDE SOME INFORMATION TEXT ON THE USE OF THE PROGRAM TO THE USER
    
          
            system("CLS");
            system("COLOR 2");
            cout << "\n\n\n\n\n\n\n\n\n"; 
            cout <<"\t\t\t\t*********************************************" << endl;
            cout <<"\t\t\t\t**   WELCOME TO YOUR LOTTO NUMBER PICKER   **" << endl;
            cout <<"\t\t\t\t**   PLEASE ENTER THE NUMBER OF TICKETS    **" << endl;
            cout <<"\t\t\t\t**        YOU WOULD LIKE TO PLAY           **" << endl;
            cout <<"\t\t\t\t*********************************************" << endl;
            cout <<"\n\n\n";
    
    
            cout << "\t\t\t\tHow many lines do you want to play? "; 
   
            cin >> number_of_lines;
            //While Loop below handles the error handling for a none numeric entry being added
            //cin/clear() and cin.ignore(); needed to clear the previous cin and to remove the \n
            //chracter that auto responds to the cin which is a known issue with cin in C++
        while(cin.fail()){
                system("CLS");
                cin.clear();
                cin.ignore();
                system("CLS");
                system("COLOR 2"); 
                cout << "\n\n\n\n\n\n\n\n\n"; 
                cout <<"\t\t\t\t*********************************************" << endl;
                cout <<"\t\t\t\t*   WELCOME TO YOUR LOTTO NUMBER PICKER    **" << endl;
                cout <<"\t\t\t\t**   PLEASE ENTER THE NUMBER OF TICKETS    **" << endl;
                cout <<"\t\t\t\t**        YOU WOULD LIKE TO PLAY           **" << endl;
                cout <<"\t\t\t\t*********************************************" << endl;
                cout <<"\n\n\n";
                cout << "\t\t\t\tSorry please only enter a numeric value higher than 0: ";
                
                cin >> number_of_lines;
            } 
            
        while(number_of_lines==0){
                system("CLS");
                cin.clear();
                cin.ignore();
                system("CLS");
                system("COLOR 2"); 
                cout << "\n\n\n\n\n\n\n\n\n"; 
                cout <<"\t\t\t\t*********************************************" << endl;
                cout <<"\t\t\t\t**   WELCOME TO YOUR LOTTO NUMBER PICKER   **" << endl;
                cout <<"\t\t\t\t**   PLEASE ENTER THE NUMBER OF TICKETS    **" << endl;
                cout <<"\t\t\t\t**        YOU WOULD LIKE TO PLAY           **" << endl;
                cout <<"\t\t\t\t*********************************************" << endl;
                cout <<"\n\n\n";
    
                cout << "\t\t\t\tSorry please only enter a numeric value higher than 0: ";
                
                cin >> number_of_lines;
        } 
  
    system("CLS"); 
    
    //system("COLOR 1"); 
    
    PlaySound(TEXT("C://Users//jonat//Desktop//National Lottery Number Picker//LotteryBall.wav"), NULL, SND_FILENAME| SND_ASYNC);
    
  
                system("COLOR 2");
                cout << "  LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO" << endl;
                cout << "  LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO" << endl;      
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                         *************************************************                       LOTTO" << endl;
                cout << "  LOTTO                         **        GENERATING YOUR LOTTO NUMBERS        **                       LOTTO" << endl;
                cout << "  LOTTO                         **        GENERATING YOUR LOTTO NUMBERS        **                       LOTTO" << endl;
                cout << "  LOTTO                         **        GENERATING YOUR LOTTO NUMBERS        **                       LOTTO" << endl;
                cout << "  LOTTO                         *************************************************                       LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO                                                                                                 LOTTO" << endl;
                cout << "  LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO" << endl;
                cout << "  LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO-LOTTO" << endl; 
    
              
             
    Sleep(5000);
    
    system("CLS");  
                                                                              
    system("COLOR 2"); 
                                                   
    cout << "                               **************************************************" << endl;
    cout << "                               *   YOUR LOTTO TICKETS FOR THIS WEEK ARE BELOW   *" << endl;
    cout << "                               **************************************************" << endl;
    cout <<"\n\n\n";
    
    flash();
     
        
        for (int i =0; total_of_lines < number_of_lines ; i++){
                //define lottery lowest and highest numbers to choose from as integer types
                total_of_lines = total_of_lines+1;
                int low = 1;
                int high = 59;
    
                //create a vector of int type and assign the number of elements to be equal to the value of high - 
                //low +1 so we dont use 0    
                vector<int> nums(high-low +1);
  
                //n C++, iota() is a library function used to fill a range of elements with 
                //increasing values starting from the given initial value.
                iota(nums.begin(),nums.end(),low);    
   
                //std::random_device is a uniformly-distributed 
                //integer random number generator that produces non-deterministic random numbers, and we assign the random
                //numbers to the rd variable which is overwritten with the next random number each time the for loop
                //iterates
                random_device rd;
    
                //It randomly rearrange elements in range [first, last). The function swaps 
                //the value of each element with some other randomly picked element. Shuffling the elements of the vector
                //each iteration removes the likelyhood that the same numbers are picked againby the random funciton.
                shuffle(nums.begin(),nums.end(),rd);
    
        
                cout << "                              **********Your Line:" << ""  << total_of_lines<< " Ticket Numbers Are***********" << endl;    
                //This for loop iterates for six numbers for each lottery ticket, each time outputting to the screen
                //the randomly selected number from the nums vector.
                system("COLOR 2");
    
            for(int i=0; i <6; i++){
                if (nums.at(i) < 10){
                    cout << "                              |                  ***  " <<nums.at(i) << "     ***                 |" << "\n";
                }else if(nums.at(i) > 9){
                cout << "                              |                  ***  " <<nums.at(i) << "    ***                 |" << "\n";
                }  
                }
                cout << "                              ***************************************************" << endl <<endl;
                }
    
    //STOP THE SOUND FOR THE LOTTERY BALLS ROLLING PLAYING AGAIN
    PlaySound(NULL, NULL, 0);

    system("Pause");
    
    //End of main game if statememt
    }
    
    ///////////////////////////////
    ///SET FOR LIFE LOGIC\CODE
    //////////////////////////////
    else if(option=="S"){
         system("CLS");
     //Play sound for the start of the program
    PlaySound(TEXT("C://Users//jonat//Desktop//National Lottery Number Picker//winner.wav"),NULL, SND_FILENAME| SND_ASYNC);
    
    // PROVIDE SOME INFORMATION TEXT ON THE USE OF THE PROGRAM TO THE USER
    system("COLOR 2"); 
    cout << "\n\n\n\n\n\n\n\n\n"; 
            cout <<"\t\t\t\t***************************************************" << endl;
            cout <<"\t\t\t\t**   WELCOME TO YOUR SET FOR LIFE NUMBER PICKER  **" << endl;
            cout <<"\t\t\t\t**       PLEASE ENTER THE NUMBER OF TICKETS      **" << endl;
            cout <<"\t\t\t\t**            YOU WOULD LIKE TO PLAY             **" << endl;
            cout <<"\t\t\t\t***************************************************" << endl;
            cout <<"\n\n\n";
    
    int number_of_lines{0}; 
    //used as a counter if the logic for the outer for loop, and to display the ticket no
   
    int total_of_lines{0}; 
    cout << "\t\t\t\tHow many lines do you want to play? "; 
    cin >> number_of_lines;
    
    while(cin.fail()){
        system("CLS");
        cin.clear();
        cin.ignore();
        cout << "\n\n\n\n\n\n\n\n\n"; 
            cout <<"\t\t\t\t***************************************************" << endl;
            cout <<"\t\t\t\t**   WELCOME TO YOUR SET FOR LIFE NUMBER PICKER  **" << endl;
            cout <<"\t\t\t\t**       PLEASE ENTER THE NUMBER OF TICKETS      **" << endl;
            cout <<"\t\t\t\t**            YOU WOULD LIKE TO PLAY             **" << endl;
            cout <<"\t\t\t\t***************************************************" << endl;
            cout <<"\n\n\n";
    
        cout << "\t\t\t\tSorry please only enter a numeric value higher than 0: ";
        cin >> number_of_lines;
        }
        
         while(number_of_lines==0){
        system("CLS");
        cin.clear();
        cin.ignore();
        cout << "\n\n\n\n\n\n\n\n\n"; 
            cout <<"\t\t\t\t***************************************************" << endl;
            cout <<"\t\t\t\t**   WELCOME TO YOUR SET FOR LIFE NUMBER PICKER  **" << endl;
            cout <<"\t\t\t\t**       PLEASE ENTER THE NUMBER OF TICKETS      **" << endl;
            cout <<"\t\t\t\t**            YOU WOULD LIKE TO PLAY             **" << endl;
            cout <<"\t\t\t\t***************************************************" << endl;
            cout <<"\n\n\n";
    
        cout << "\t\t\t\tSorry please only enter a numeric value higher than 0: ";
        cin >> number_of_lines;
        }
        
    system("CLS"); 
    system("COLOR 1"); 
    PlaySound(TEXT("C://Users//jonat//Desktop//National Lottery Number Picker//LotteryBall.wav"), NULL, SND_FILENAME| SND_ASYNC);
    
    system("COLOR 2");
  
                system("COLOR 2");
                cout << "  SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE" << endl;
                cout << "  SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE" << endl;      
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                     *************************************************                     SET4LIFE" << endl;
                cout << "  SET4LIFE                     **      GENERATING YOUR SET4LIFE NUMBERS       **                     SET4LIFE" << endl;
                cout << "  SET4LIFE                     **      GENERATING YOUR SET4LIFE NUMBERS       **                     SET4LIFE" << endl;
                cout << "  SET4LIFE                     **      GENERATING YOUR SET4LIFE NUMBERS       **                     SET4LIFE" << endl;
                cout << "  SET4LIFE                     *************************************************                     SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE                                                                                           SET4LIFE" << endl;
                cout << "  SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE" << endl;
                cout << "  SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE-SET4LIFE" << endl;
                
               
    
    Sleep(5000);
    system("CLS");                                                                            
    system("COLOR 2");                                                    
    cout << "                           *******************************************************" << endl;
    cout << "                           ***YOUR SET FOR LIFE TICKETS FOR THIS WEEK ARE BELOW***" << endl;
    cout << "                           *******************************************************" << endl;
    cout <<"\n\n\n";
    flash();
        
    for (int i =0; total_of_lines < number_of_lines ; i++){
    //define lottery lowest and highest numbers to choose from as integer types
    total_of_lines = total_of_lines+1;
    int low = 1;
    int high = 47;
    
    //create a vector of int type and assign the number of elements to be equal to the value of high - 
    //low +1 so we dont use 0    
    vector<int> nums(high-low +1);
  
    //n C++, iota() is a library function used to fill a range of elements with 
    //increasing values starting from the given initial value.
    iota(nums.begin(),nums.end(),low);    
   
    //std::random_device is a uniformly-distributed 
    //integer random number generator that produces non-deterministic random numbers, and we assign the random
    //numbers to the rd variable which is overwritten with the next random number each time the for loop
    //iterates
    random_device rd;
    
    //It randomly rearrange elements in range [first, last). The function swaps 
    //the value of each element with some other randomly picked element. Shuffling the elements of the vector
    //each iteration removes the likelyhood that the same numbers are picked againby the random funciton.
    shuffle(nums.begin(),nums.end(),rd);
    
        
    cout << "                               **********Your Line:" << ""  << total_of_lines<< " Ticket Numbers Are**********" << endl;    
    //This for loop iterates for six numbers for each lottery ticket, each time outputting to the screen
    //the randomly selected number from the nums vector.
    system("COLOR 2");
    for(int i=0; i <5; i++)
    {
        if (nums.at(i) < 10){
            cout << "                               |               ***  " <<nums.at(i) << "     ***                   |" << "\n";
        } else if(nums.at(i) > 9){
        cout << "                               |               ***  " <<nums.at(i) << "    ***                   |" << "\n";
    }  
    }
    cout << endl;
     int life_ball = rand();
      int ball = (life_ball % 10) +1;
      cout << "                               |------------------------------------------------|" << "\n";
      cout << "                               |Life Ball:" << ball << "                                     |" << endl;
      cout << "                               *************************************************" << "\n\n\n";
     
    }
 
    //STOP THE SOUND FOR THE LOTTERY BALLS ROLLING PLAYING AGAIN
    PlaySound(NULL, NULL, 0);
    //

    system("Pause");
    }

///////////////////////////////
    ///EUROLOTTERY 
    //////////////////////////////
    else if(option=="E"){
         system("CLS");
     //Play sound for the start of the program
    PlaySound(TEXT("C://Users//jonat//Desktop//National Lottery Number Picker//winner.wav"),NULL, SND_FILENAME| SND_ASYNC);
    
    // PROVIDE SOME INFORMATION TEXT ON THE USE OF THE PROGRAM TO THE USER
    system("COLOR 2"); 
            cout <<"\n\n\n\n\n\n\n\n\n";
            cout <<"\t\t\t\t****************************************************" << endl;
            cout <<"\t\t\t\t**   WELCOME TO YOUR EURO LOTTERY NUMBER PICKER   **" << endl;
            cout <<"\t\t\t\t**       PLEASE ENTER THE NUMBER OF TICKETS       **" << endl;
            cout <<"\t\t\t\t**            YOU WOULD LIKE TO PLAY              **" << endl;
            cout <<"\t\t\t\t****************************************************" << endl;
            cout <<"\n\n\n";
    
    int number_of_lines{0}; 
    //used as a counter if the logic for the outer for loop, and to display the ticket no
   
    int total_of_lines{0}; 
    cout << "\t\t\t\tHow many lines do you want to play? "; 
    cin >> number_of_lines;
    
    while(cin.fail()){
        system("CLS");
        cin.clear();
        cin.ignore();
        system("CLS");
        system("COLOR 2"); 
        cout <<"\n\n\n\n\n\n\n\n\n";
        cout <<"\t\t\t\t****************************************************" << endl;
        cout <<"\t\t\t\t**   WELCOME TO YOUR EURO LOTTERY NUMBER PICKER   **" << endl;
        cout <<"\t\t\t\t**       PLEASE ENTER THE NUMBER OF TICKETS       **" << endl;
        cout <<"\t\t\t\t**            YOU WOULD LIKE TO PLAY              **" << endl;
        cout <<"\t\t\t\t****************************************************" << endl;
        cout <<"\n\n\n";
        cout << "\t\t\t\tSorry please only enter a numeric value higher than 0: ";
        cin >> number_of_lines;
    }
    
    while(number_of_lines==0){
        system("CLS");
        cin.clear();
        cin.ignore();
        system("CLS");
        system("COLOR 2"); 
            cout <<"\n\n\n\n\n\n\n\n\n";
            cout <<"\t\t\t\t****************************************************" << endl;
            cout <<"\t\t\t\t**   WELCOME TO YOUR EURO LOTTERY NUMBER PICKER   **" << endl;
            cout <<"\t\t\t\t**       PLEASE ENTER THE NUMBER OF TICKETS       **" << endl;
            cout <<"\t\t\t\t**            YOU WOULD LIKE TO PLAY              **" << endl;
            cout <<"\t\t\t\t****************************************************" << endl;
            cout <<"\n\n\n";
        cout << "\t\t\t\tSorry please only enter a numeric value higher than 0: ";
        cin >> number_of_lines;
    }
    system("CLS"); 
    system("COLOR 1"); 
    PlaySound(TEXT("C://Users//jonat//Desktop//National Lottery Number Picker//LotteryBall.wav"), NULL, SND_FILENAME| SND_ASYNC);

                system("COLOR 2");
                cout << " EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO" << endl;
                cout << " EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO" << endl;      
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                         ************************************************                            EURO" << endl;
                cout << " EURO                         **        GENERATING YOUR EURO NUMBERS        **                            EURO" << endl;
                cout << " EURO                         **        GENERATING YOUR EURO NUMBERS        **                            EURO" << endl;
                cout << " EURO                         **        GENERATING YOUR EURO NUMBERS        **                            EURO" << endl;
                cout << " EURO                         ************************************************                            EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO                                                                                                     EURO" << endl;
                cout << " EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO" << endl;
                cout << " EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO-EURO" << endl;  
                
      
    Sleep(5000);
    system("CLS");                                                                         
    system("COLOR 2");           
    cout << "\n\n";                                         
    cout << "                              *******************************************************" << endl;
    cout << "                              ***YOUR EURO LOTTERY TICKETS FOR THIS WEEK ARE BELOW***" << endl;
    cout << "                              *******************************************************" << endl;
    cout <<"\n\n";
    flash();
        
    for (int i =0; total_of_lines < number_of_lines ; i++){
    //define lottery lowest and highest numbers to choose from as integer types
    total_of_lines = total_of_lines+1;
    int low = 1;
    int high = 50;
    
    //create a vector of int type and assign the number of elements to be equal to the value of high - 
    //low +1 so we dont use 0    
    vector<int> nums(high-low +1);
  
    //n C++, iota() is a library function used to fill a range of elements with 
    //increasing values starting from the given initial value.
    iota(nums.begin(),nums.end(),low);    
   
    //std::random_device is a uniformly-distributed 
    //integer random number generator that produces non-deterministic random numbers, and we assign the random
    //numbers to the rd variable which is overwritten with the next random number each time the for loop
    //iterates
    random_device rd;
    
    //It randomly rearrange elements in range [first, last). The function swaps 
    //the value of each element with some other randomly picked element. Shuffling the elements of the vector
    //each iteration removes the likelyhood that the same numbers are picked againby the random funciton.
    shuffle(nums.begin(),nums.end(),rd);
    
        
    cout << "                                **********Your Line:" << ""  << total_of_lines<< " Ticket Numbers Are************" << endl;    
    //This for loop iterates for six numbers for each lottery ticket, each time outputting to the screen
    //the randomly selected number from the nums vector.
    system("COLOR 2");
    for(int i=0; i <5; i++)
    {
        if (nums.at(i) <10){
            cout << "                                |               ***  " <<nums.at(i) << "     ***                     |" << "\n";
        } else if(nums.at(i) > 9){
        cout << "                                |               ***  " <<nums.at(i) << "    ***                     |" << "\n";
    }  
    }
    cout << "                                 __________________________________________________" << "\n";
    cout << endl;
  //Shuffling Number for the lucky stars
  //so we need 2 lucky stars thus a for loop with 2 iterations
  //create a vector on integer type amnd store the lowest and highest numbers in 
  //each element of the vextor, adding one so we dont use the 0 start position of
  //vector
  //use the iota method with the random method and shuffle to define the start
  //of the shuffle and the end of the shuffle of numbers in the vector
    //for (int i =1; i<2 ; i++){
    
    int lowlucky = 1;
    int highlucky = 12;
    vector<int> stars(highlucky-lowlucky+1);
    
    iota(stars.begin(),stars.end(),low);
    Sleep(50);
    random_device rd2;
    Sleep(100);
    shuffle(stars.begin(),stars.end(),rd2);
    

    //make luckystars equal the value of stars at the current index of the vector
    //if the value of luckstars equals the previous array value add three to
    //luckystars this way we always have a different number to the original shuffle
    //number, then we output the value at stars(i) for two iterations of the 
    //for loop
    
    
    //Add numbers from 1 to 12 to the end of the vector using the pushback method
    //So that we can handle increasing the vector size by the number of lines
    //this way we would exceed the bounds of the vector but we will also populate
    //the elements of the vector with values using the counter variable
    //we will also resent the counter variable to 12 once it hits a value of 1
    //as the for loop runds we wil also decrement counter from its intial value
    //of 12
    int counter = {12};
    for(int i=1; i<=number_of_lines; i++){
        counter--;
        stars.push_back(counter);
        if(counter==1){
            counter =12;
        }
    }
    
    int luckystars = stars.at(i);
    cout << "                                 Lucky Star One: " << luckystars <<"                                "<< "\n";
    
    //Ensure that the number for the second lucky star is never the same using if else ladder
    //}
     int star2 = stars.at(i+1);
     if(star2>=1 || star2>=12){
        cout << "                                 Lucky Star Two: " << star2 <<"                                "<< "\n";
     }else if(luckystars==1){
        cout << "                                 Lucky Star Two: " << star2+1 <<"                              "<< "\n"; 
     } else if(star2==luckystars){
       cout << "                                  Lucky Star Two: " << star2+1 <<"                              /"<< "\n";  
     }
       cout << "                                 ******************" << "\n\n";
    }
    
 
    //STOP THE SOUND FOR THE LOTTERY BALLS ROLLING PLAYING AGAIN
    PlaySound(NULL, NULL, 0);
    //

    system("Pause");
    }
    ///////////////////////////////
    ///Thunderball
    //////////////////////////////
       else if(option=="T"){
         system("CLS");
     //Play sound for the start of the program
    PlaySound(TEXT("C://Users//jonat//Desktop//National Lottery Number Picker//winner.wav"),NULL, SND_FILENAME| SND_ASYNC);
    
    // PROVIDE SOME INFORMATION TEXT ON THE USE OF THE PROGRAM TO THE USER
    system("COLOR 2"); 
    cout << "\n\n\n\n\n\n\n\n\n"; 
    cout <<"\t\t\t\t**************************************************" << endl;
    cout <<"\t\t\t\t**  WELCOME TO YOUR THUNDERBALL NUMBER PICKER   **" << endl;
    cout <<"\t\t\t\t**      PLEASE ENTER THE NUMBER OF TICKETS      **" << endl;
    cout <<"\t\t\t\t**           YOU WOULD LIKE TO PLAY             **" << endl;
    cout <<"\t\t\t\t**************************************************" << endl;
    cout <<"\n\n\n";
    
    int number_of_lines{0}; 
    //used as a counter if the logic for the outer for loop, and to display the ticket no
   
    int total_of_lines{0}; 
    cout << "\t\t\t\tHow many lines do you want to play? "; 
    cin >> number_of_lines;
    
    while(cin.fail()){
        system("CLS");
        cin.clear();
        cin.ignore();
        system("COLOR 2"); 
        cout << "\n\n\n\n\n\n\n\n\n"; 
        cout <<"\t\t\t\t**************************************************" << endl;
        cout <<"\t\t\t\t**  WELCOME TO YOUR THUNDERBALL NUMBER PICKER   **" << endl;
        cout <<"\t\t\t\t**      PLEASE ENTER THE NUMBER OF TICKETS      **" << endl;
        cout <<"\t\t\t\t**           YOU WOULD LIKE TO PLAY             **" << endl;
        cout <<"\t\t\t\t**************************************************" << endl;
        cout <<"\n\n\n";
       cout << "\t\t\t\tSorry please only enter a numeric value higher than 0: ";
        cin >> number_of_lines;
    }
    
     while(number_of_lines==0){
        system("CLS");
        cin.clear();
        cin.ignore();
        system("COLOR 2"); 
         cout << "\n\n\n\n\n\n\n\n\n"; 
        cout <<"\t\t\t\t**************************************************" << endl;
        cout <<"\t\t\t\t**  WELCOME TO YOUR THUNDERBALL NUMBER PICKER   **" << endl;
        cout <<"\t\t\t\t**      PLEASE ENTER THE NUMBER OF TICKETS      **" << endl;
        cout <<"\t\t\t\t**           YOU WOULD LIKE TO PLAY             **" << endl;
        cout <<"\t\t\t\t**************************************************" << endl;
        cout <<"\n\n\n";
       cout << "\t\t\t\tSorry please only enter a numeric value higher than 0: ";
        cin >> number_of_lines;
    }
    
    
    system("CLS"); 
    system("COLOR 2"); 
    PlaySound(TEXT("C://Users//jonat//Desktop//National Lottery Number Picker//LotteryBall.wav"), NULL, SND_FILENAME| SND_ASYNC);
   
                system("COLOR 2");        
                cout << "  TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL" << endl;
                cout << "  TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL" << endl;      
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                         ************************************************                        TBALL" << endl;
                cout << "  TBALL                         **    GENERATING YOUR THUNDERBALL NUMBERS     **                        TBALL" << endl;
                cout << "  TBALL                         **    GENERATING YOUR THUNDERBALL NUMBERS     **                        TBALL" << endl;
                cout << "  TBALL                         **    GENERATING YOUR THUNDERBALL NUMBERS     **                        TBALL" << endl;
                cout << "  TBALL                         ************************************************                        TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL                                                                                                 TBALL" << endl;
                cout << "  TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL" << endl;
                cout << "  TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL-TBALL" << endl;  
                
         
    Sleep(5000);
    system("CLS");
    system("COLOR 2");                                                    
    cout << "                             *******************************************************" << endl;
    cout << "                             ***YOUR THUNDERBALL TICKETS FOR THIS WEEK ARE BELOW ***" << endl;
    cout << "                             *******************************************************" << endl;
    cout <<"\n\n\n";
   
   flash();
        
    for (int i =0; total_of_lines < number_of_lines ; i++){
    //define lottery lowest and highest numbers to choose from as integer types
    total_of_lines = total_of_lines+1;
    int low = 1;
    int high = 39;
    
    //create a vector of int type and assign the number of elements to be equal to the value of high - 
    //low +1 so we dont use 0    
    vector<int> nums(high-low +1);
  
    //n C++, iota() is a library function used to fill a range of elements with 
    //increasing values starting from the given initial value.
    iota(nums.begin(),nums.end(),low);    
   
    //std::random_device is a uniformly-distributed 
    //integer random number generator that produces non-deterministic random numbers, and we assign the random
    //numbers to the rd variable which is overwritten with the next random number each time the for loop
    //iterates
    random_device rd;
    
    //It randomly rearrange elements in range [first, last). The function swaps 
    //the value of each element with some other randomly picked element. Shuffling the elements of the vector
    //each iteration removes the likelyhood that the same numbers are picked againby the random funciton.
    shuffle(nums.begin(),nums.end(),rd);
    
        
    cout << "                               **********Your Line:" << ""  << total_of_lines<< " Ticket Numbers Are**********" << endl;    
    //This for loop iterates for six numbers for each lottery ticket, each time outputting to the screen
    //the randomly selected number from the nums vector.
    system("COLOR 2");
    for(int i=0; i <5; i++)
    {
        if (nums.at(i) < 10){
            cout << "                               |               ***  " <<nums.at(i) << "     ***                     |" << "\n";
        } else if(nums.at(i) > 9){
        cout << "                               |               ***  " <<nums.at(i) << "    ***                     |" << "\n";
    }  
    }
    cout << endl;
     int thunderball = rand();
      int ball = (thunderball % 14) +1;
      cout << "                               Thunderball: " << ball << endl;
     cout << "                               ***************" << endl <<endl;
     
    }
 
    //STOP THE SOUND FOR THE LOTTERY BALLS ROLLING PLAYING AGAIN
    PlaySound(NULL, NULL, 0);
    //
    }
       
    system("Pause");

    return 0;    
}