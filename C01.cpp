#include<iostream>
using namespace std;
void reverse(char a[]){
    int dem=0;
    for (char *cp = a; (*cp) != '\0'; cp++) {
      dem++;
   }
   for(int i=0;i<dem/2;i++){
    char temp=a[i];
    a[i]=a[dem-i-1];
    a[dem-i-1]=temp;
   }

}
void delete_char(char a[], char c){
     for (char *cp = a; (*cp) != '\0'; cp++) {
      if(*cp==c) continue;
      else cout<<*cp;
   }
}
void pad_right(char a[], int n){
    int dem=0;
     for (char *cp = a; (*cp) != '\0'; cp++) {
            cout<<*cp;
      dem++;
   }
   while(dem<=n){
    cout<<" ";
   }
}
void pad_left(char a[],int n){
    int dem=0;
    for (char *cp = a; (*cp) != '\0'; cp++) {

      dem++;
   }
   while(dem<=n){
    cout<<" ";
   }
   for (char *cp = a; (*cp) != '\0'; cp++) {
            cout<<*cp;
   }
}
void truncate(char a[], int n){
    int dem=0;
    for (char *cp = a; (*cp) != '\0'; cp++) {

      dem++;
   }
   if(dem<n){
     for (char *cp = a; (*cp) != '\0'; cp++) {

      cout<<*cp;
   }
   }else
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
bool is_palindrome(char a[]){
    char *p=new char;
    int i=0;
    for (char *cp = a; (*cp) != '\0'; cp++) {
        *(p+i)=*cp;
   }
   reverse(a);
   for (char *cp = a; (*cp) != '\0'; cp++) {
       if(*cp==*(p+i)){
           i++;
       }else{
           return false;
       }
   }
   return true;
}
void trim_left(char a[]){
    for (char *cp = a; (*cp) != '\0'; cp++) {
        if(*cp==' ') continue;
        else
      cout<<*cp;
   }
}
void trim_right(char a[]){
     for (char *cp = a; (*cp) != '\0'; cp++) {
        if(*cp==' ') continue;
        else
      cout<<*cp;
   }
}

int main()
{
    char foo[]="   Tat ca cac cau trong bai nay deu phai dung con tro de xu ly mang/xau   ";
   //reverse(foo);
   //delete_char(foo,'d');
   //pad_right(foo,20);
   //pad_left(foo,20);
   //truncate(foo,30);
   /*
   if (is_palindrome(foo)==true)
    cout<<"yes";
   else cout<<"No";
   */
   //trim_left(foo);
   trim_right(foo);
}
