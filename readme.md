Lottery Ticket Generator Designed & Tested For Windows 64Bit OS Only

The program auto generates Lottery Tickets for the following National Lottery games: -

-Lotto
-Euro Lottery
-Set For life
-Thunderball
There is a also a random ticket selection option where the program randomly selects one of the four games to generate tickets for. Users then enter the number of tickets they wish to play for each Lottery game and the program randomly creates the numbers for these tickets and returns them to the terminal ooutput screen for the user.

The soluiton was designed, and tested using the Code Lite IDE and the MinGW-w64 Modern C++ Compiler both of which can be downloaded from the below sutes: -

MinGW-64 https://winlibs.com/#download-release From the latest release of the compiler click on the Zip arcbive for Win 64. GCC 14.2.0 (with POSIX threads) + LLVM/Clang/LLD/LLDB 19.1.1 + MinGW-w64 12.0.0 UCRT - release 2 (LATEST) Win32: 7-Zip archive* | Zip archive - without LLVM/Clang/LLD/LLDB: 7-Zip archive* | Zip archive Win64: 7-Zip archive* | Zip archive - without LLVM/Clang/LLD/LLDB: 7-Zip archive* | Zip archive

CodeLite IDE https://downloads.codelite.org/

The source code utilizes the Windows Media Library available by importing the winmm libraries which I have included in the Project Resources folder as this was difficult to find.

If you are using the Code Lite IDE to compile this program then you will need to configure the Linker "Libraries Search Path" to include the path of where you extract the library files too for example: C:\mmlib Then in the Libraries field below enter: - winmm, click on apply and ok. Now you can use the required windows header include files that are commented as such in the main.cpp file.

Configuring The Windows Sounds To Play The compiler will use the Windows libraries in order to play the wav files for this project, they point at a specific file location in the main.cpp as per below:- PlaySound(TEXT("C://Users//jonat//Desktop//National Lottery Number Picker//winner.wav"),NULL, SND_FILENAME| SND_ASYNC); In order for the executable which is compiled change these paths accordingly to where you want the files to be stored before compilation. I have included in the wav files I used in the Project Resources folder, but feel welcome to use your own.

I have included a compiled version of the program for demonstration purposes, however the sounds will not play unless you create the same folder paths on your local system and copy in the two wav files, otherwise as per the above change the PlaySound path and recompile the code to reflect the new path to the files.

This is one of my very first Modern C++ Projects which I learnt a tremendous amount from, I may revise and refactor this code in the future as my coding abilities in Modern C++ develop.

Thanks for reading and enjoy my project.

Kind regards,

Jonathan Joseph

P.S If you have any questions please feel welcome to reach out to me at:- jjosephuk@outlook.com