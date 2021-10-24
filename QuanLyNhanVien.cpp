#include"QuanLyNhanVien.h"
#include<iomanip>
int QuanLyNhanVien::ind = 0;

QuanLyNhanVien::QuanLyNhanVien(){
    this->p = NULL;
    this->n = 0;
    this->ind++;
}

QuanLyNhanVien::~QuanLyNhanVien(){
    delete[] this->p;
    this->ind--;
}

void QuanLyNhanVien::Add_NV(NhanVien v){
    if(this->n == 0){
        this->p = new NhanVien[this->n+1];
        *(this->p + this->n) = v;
    }
    else{
        NhanVien *temp = new NhanVien[this->n+1];
        for(int i = 0; i < this->n; i++){
            *(temp+i) = *(this->p+i);
        }
        delete[] this->p;
        this->p = new NhanVien[this->n+1];
        for(int i = 0; i < this->n; i++){
            *(this->p+i) = *(temp+i); 
        }
        delete[] temp;
        *(this->p + n) = v;
    }   
    this->n++;
}

void QuanLyNhanVien::Show(){
    cout << "ID:";
    cout << setw(25) << "Name:     ";
    cout << setw(25) << "Tel:      ";
    cout << setw(25) << "CMND:     ";
    cout << setw(25) << "Position:      " << endl;
    for(int i= 0; i < this->n; i++){
        (p+i)->Display();
    }
}

// int QuanLyNhanVien::IndexOf(string k){
//     int index = -1;
//     for(int i = 0; i < this->n; i++){
//         if((this->p+i)->getMaNV() == k){
//             index = 
//         }
//     }
// }

void QuanLyNhanVien::Update_NV(string m){
    bool c = false;
    for(int i = 0; i < this->n; i++){
        if(m == (this->p +i)->getMaNV()){
            string g;
            system("cls");
            (this->p + i)->Display();
            cout << "Nhap Ten Moi:";
            fflush(stdin);
            getline(cin,g);
            (this->p + i)->setHoTen(g);
            c = true;
        }
    }
    if(!c) {
        cout << "Khong tim thay";
        system("pause");
        }
    cout << endl;
}

void QuanLyNhanVien::Delete_NV(string m){
    bool c = false;
    for(int i = 0; i < this->n; i++){
        if(m == (this->p +i)->getMaNV()){
            if(this->n == 1){
                delete[] this->p;
                this->p = nullptr;
            }
            else {
                NhanVien *temp = new NhanVien[this->n];
                for(int k = 0; k < this->n ; k++){
                    *(temp+k) = *(this->p + k);
                }
                delete[] this->p;
                this->p = new NhanVien[this->n-1];
                for (int j = 0; j < this->n-1; j++)
                {
                    if(j < i){
                        *(this->p + j) = *(temp + j);
                    }
                    else{
                        *(this->p + j) = *(temp + j + 1);
                    }
                }
                delete[] temp;
            }
            c = true;
        }
    }
    if(!c) cout << "Khong Tim Thay" << endl;
    else {
        this->n--;
        cout << "Xoa Thanh Cong" << endl;
    }
}