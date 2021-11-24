#include "NhanVien.h"
#include<iomanip>
NhanVien::NhanVien(string MaNhanVien, string HoTen, string NgaySinh, string QueQuan, string SoDienThoai, string SoCMT, string ChucVu, string PhanQuyen, string TaiKhoan, string MatKhau){
    this->MaNhanVien =  MaNhanVien;
    this->HoTen = HoTen;
    this->NgaySinh = NgaySinh;
    this->QueQuan = QueQuan;
    this->SoDienThoai = SoDienThoai;
    this->SoCMT = SoCMT;
    this->ChucVu = ChucVu;
    this->PhanQuyen = PhanQuyen;
    this->TaiKhoan = TaiKhoan;
    this->MatKhau = MatKhau;
}

NhanVien::~NhanVien(){

}

    string NhanVien::getMaNV(){
        return this->MaNhanVien;
    }
    
    string NhanVien::getHoTen(){
        return this->HoTen;
    }
    
    string NhanVien::getNgaySinh(){
        return this->NgaySinh;
    }
    
    string NhanVien::getQueQuan(){
        return this->QueQuan;
    }
    
    string NhanVien::getSDT(){
        return this->SoDienThoai;
    }
    
    string NhanVien::getSoCMT(){
        return this->SoCMT;
    }
    
    string NhanVien::getChucVu(){
        return this->ChucVu;
    }
    
    string NhanVien::getPhanQuyen(){
        return this->PhanQuyen;
    }
    
    string NhanVien::getTaiKhoan(){
        return this->TaiKhoan;
    }
    
    string NhanVien::getMatKhau(){
        return this->MatKhau;
    }
    
    // ham set
    void NhanVien::setMaNV(string MaNhanVien){
        this->MaNhanVien = MaNhanVien;
    }
    
    void NhanVien::setHoTen(string HoTen){
        this->HoTen = HoTen;
    }
    
    void NhanVien::setNgaySinh(string NgaySinh){
        this->NgaySinh = NgaySinh;
    }
    
    void NhanVien::setQueQuan(string QueQuan){
        this->QueQuan = QueQuan;
    }
    
    void NhanVien::setSDT(string SoDienThoai){
        this->SoDienThoai = SoDienThoai;
    }
    
    void NhanVien::setSoCMT(string SoCMT){
        this->SoCMT = SoCMT;
    }
    
    void NhanVien::setChucVu(string ChucVu){
        this->ChucVu = ChucVu;
    }
    
    void NhanVien::setPhanQuyen(string PhanQuyen){
        this->PhanQuyen = PhanQuyen;
    }
    void NhanVien::setTaiKhoan(string TaiKhoan){
        this->TaiKhoan = TaiKhoan;
    }
    void NhanVien::setMatKhau(string MatKhau){
        this->MatKhau = MatKhau;
    }
    
void NhanVien::Display(){
    cout <<char(179)<< setw(15-1) << left<< this->MaNhanVien <<char(179);
    cout << setw(30-1) << left << this->HoTen <<char(179);
    cout << setw(15-1) << left << this->SoDienThoai <<char(179);
    cout << setw(15-1) << left << this->SoCMT <<char(179);
    cout << setw(35-1) << left << this->ChucVu<< endl;
}

void NhanVien::Display2(){
    SetColor(0,3);
    CanLe();
    cout << "Ma Nhan Vien: "<< this->MaNhanVien << endl;
    CanLe();
    cout << "Ho Ten: " << this->HoTen << endl;
    CanLe();
    cout << "Ngay Sinh: " << this->NgaySinh << endl;
    CanLe();
    cout << "Que Quan: " << this->QueQuan << endl;
    CanLe();
    cout << "SDT: " << this->SoDienThoai << endl;
    CanLe();
    cout << "CMND: " << this->SoCMT << endl;
    CanLe();
    cout << "Chuc Vu: " << this->ChucVu << endl;
    CanLe();
    cout << "Phan Quyen: " << this->PhanQuyen << endl;
    CanLe();
    cout << "Tai Khoan: " << this->TaiKhoan << endl;
    CanLe();
    cout << "Mat Khau: " << this->MatKhau << endl;
    cout << "\n\n       Nhan Phim Bat Ki De Tro Ve";
    getch();
}


// Da Nang Hoa

istream& operator>>(istream& i, NhanVien& e){
    SetColor(0,3);
    CanLe();
    cout << "Nhap Ma Nhan Vien: ";
    fflush(stdin);
    SetColor(0,7);
    getline(i,e.MaNhanVien);
    SetColor(0,3);
    CanLe();
    cout << "Nhap Ten: ";
    fflush(stdin);
    SetColor(0,7);
    getline(i,e.HoTen);
    SetColor(0,3);
    CanLe();
    cout << "Nhap Ngay Sinh: ";
    fflush(stdin);
    SetColor(0,7);
    getline(i,e.NgaySinh);
    SetColor(0,3);
    CanLe();
    cout << "Nhap Que Quan: ";
    fflush(stdin);
    SetColor(0,7);
    getline(i,e.QueQuan);
    SetColor(0,3);
    CanLe();
    cout << "Nhap SDT: ";
    fflush(stdin);
    SetColor(0,7);
    getline(i,e.SoDienThoai);
    SetColor(0,3);
    CanLe();
    cout << "Nhap CMND :";
    fflush(stdin);
    SetColor(0,7);
    getline(i,e.SoCMT);
    SetColor(0,3);
    CanLe();
    cout << "Nhap Chuc Vu :";
    fflush(stdin);
    SetColor(0,7);
    getline(i,e.ChucVu);
    SetColor(0,3);
    CanLe();
    cout << "Nhap Phan Quyen: ";
    fflush(stdin);
    SetColor(0,7);
    getline(i,e.PhanQuyen);
    SetColor(0,3);
    CanLe();
    cout << "Nhap Tai Khoan :";
    fflush(stdin);
    SetColor(0,7);
    getline(i,e.TaiKhoan);
    SetColor(0,3);
    CanLe();
    cout << "Nhap Mat Khau ";
    fflush(stdin);
    SetColor(0,7);
    getline(i,e.MatKhau);
    return i;
}

