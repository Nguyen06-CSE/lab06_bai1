//Khai bao nguyen mau
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int chon, MaTran a, unsigned int& n);
void ChayChuongTrinh();


//Dinh nghia ham
void XuatMenu()
{
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. nhap ma tran vuong cap n ";
	cout << "\n2. Xuat ma tran";
	cout << "\n3. in ra man hinh gia tri S";
	cout << "\n4. in ra man hinh gia tri T";
	cout << "\n5. in ra man hinh gia tri S - T";
	
}

int ChonMenu(int soMenu)
{
	int chon;
	do{
    
		XuatMenu();

		cout << "\nNhap chon[0..." << soMenu << "]=";
		cin >> chon;
        
		if (0 <= chon && chon <= soMenu)
			break;
    
	} while (true);
	return chon;
}



void XuLyMenu(int chon, MaTran a, unsigned int& n)
{
    
    

	switch (chon)
	{
	case 0:
        
		cout << "\n0. Thoat chuong trinh";

		break;
	case 1:
        

        cout << "nhap cap cua ma tran: ";
        cin >> n;
    
		cout << "nhap ma tran \n";
        
		nhapMaTran(a, n);


		break;
	case 2:

		cout << "\n2. Xuat ma tran\n";

		xuatMaTran(a, n);

        cout << endl;

		break;
    
    case 3:

		cout << "\n4. in ra gia tri T\n";

		cout << "gia tri cua S la: " << tinhS(a, n) << endl;

        cout << endl;

		break;
    case 4:

		cout << "\n4. in ra gia tri T\n";

		cout << "gia tri cua T la: " << tinhT(a, n) << endl;

        cout << endl;

		break;
    case 5:

		cout << "\n4. in ra gia tri T\n";

		cout << "gia tri cua S - T la: " << hieuST(a, n) << endl;

        cout << endl;

		break;
	
	default:
		break;
	}
	_getch();
}



void ChayChuongTrinh()
{
	int soMenu = 5, chon;
    unsigned int n;
    MaTran a;
    
	
	
    
	do
	{
		system("cls");
		chon = ChonMenu(soMenu);

		XuLyMenu(chon, a, n);

	} while (chon != 0);
}