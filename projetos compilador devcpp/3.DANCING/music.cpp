#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <MMSystem.h>
#include <conio.h>
using namespace std;
int main()
{
while(true){
if(GetAsyncKeyState(VK_DOWN)||GetAsyncKeyState(VK_UP)||GetAsyncKeyState(VK_LEFT)||GetAsyncKeyState(VK_RIGHT)){
string fname;
fname="5min.wav";
PlaySound(TEXT(fname.c_str()),NULL, SND_SYNC); 
Sleep(1000); 
}
}
}

//LINK PARA OS CODIGUIN.        
//https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
