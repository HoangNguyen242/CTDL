#ifndef sinhvien_h
#define sinhvien_h
class SinhVien
{
private:
	string HoVaTen;
	int Msv;
	int NgaySinh;
	int Thang;
	int Nam;
	string GioiTinh;
public:
	int getNgaySinh()
	{
		return NgaySinh;
	}

	int getThang()
	{
		return Thang;
	}

	int getNam()
	{
		return Nam;
	}
	string getHoVaTen()
	{
		return HoVaTen;
	}
	string getGioiTinh()
	{
		return GioiTinh;
	}
	int getMsv()
	{
		return Msv;
	}
	friend istream& operator >>(istream &in, SinhVien &b)
	{
		getline(in, b.HoVaTen);
		in.ignore();
		in>>b.Msv>>b.NgaySinh>>b.Thang>>b.Nam;
		in.ignore();
		getline(in, b.GioiTinh);
		return in;
	}
	friend ostream& operator <<(ostream &out, SinhVien &b)
	{
		out<<b.HoVaTen<<endl;
		out<<b.Msv<<"/"<<b.NgaySinh<<"/"<<b.Thang<<"/"<<b.Nam<<endl;
		out<<b.GioiTinh<<endl;
		return  out;
	}
};
#endif