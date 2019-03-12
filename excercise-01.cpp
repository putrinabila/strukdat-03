/*
Nama : Putri Nabila
NPM : 140810180007
Kelas : A
Tahun 2019
Deksripsi : excercise-03
Tanggal : 12 Maret 2019 */

#include <iostream>
#include <math.h>
#include <cmath>


using namespace std;

typedef struct{
    float panjang;
    float lebar;
} segiempat;


void input(segiempat *s){
    cout << "Panjang    : ";
    cin >> s->panjang;
    cout << "Lebar      : ";
    cin >> s->lebar;
}
float keliling(segiempat s){
    return(2*(s.panjang+s.lebar));
}
float luas(segiempat s){
    return(s.panjang*s.lebar);
}
float diagonal(segiempat s){
    return(sqrt(s.panjang*s.panjang+s.lebar*s.lebar));
}
void print(segiempat s){
    cout << "Keliling\t: " <<keliling(s)<<endl;
    cout << "Luas\t\t: " <<luas(s)<<endl;
    cout << "Diagonal\t: "<<diagonal(s)<<endl;
}
int main()
{
    segiempat* sg;
    sg = new segiempat;
    input(sg);
    print(*sg);
    return 0;
}
