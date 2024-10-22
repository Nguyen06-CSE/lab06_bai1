#define MAX 100
#define TAB '\t'

typedef double MaTran [MAX][MAX];


void nhapMaTran(MaTran a, unsigned int& n);
void xuatMaTran(MaTran a, unsigned int n);
double tinhS(MaTran a, unsigned int&n);
double tinhT(MaTran a, unsigned int&n);
double hieuST(MaTran a,unsigned int& n);




void nhapMaTran(MaTran a, unsigned int& n){
    for(int i = 0; i < n; i++){
        cout << "hanh thu " << i << endl;
        for(int j = 0; j < n; j++){
            cout << "a[" << i << "]" << "[" << j << "]=";
            cin >> a[i][j];
        }
    }
}


void xuatMaTran(MaTran a, unsigned int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << TAB;
        }
        cout << endl;
    }
}


double tinhS(MaTran a, unsigned int&n){
    double result = 0;
    for(int i = 0; i < n; i++){
    unsigned int min = a[i][0];
        for(int j = 0; j < n; j++){
            if(a[i][j] > min){
                min = a[i][j];
            }
        }
        result += min;
    }
    
    return result;

}

double tinhT(MaTran a, unsigned int&n){
    double result = 0;
    for(int i = 0; i < n; i++){
    double max = a[0][i];
        for(int j = 0; j < n; j++){
            if(a[j][i] < max){
                max = a[j][i];
            }
        }
        result += max;
    }
    return result;
}

double hieuST(MaTran a,unsigned int& n){
    double hieu;
    hieu = tinhS(a, n) - tinhT(a, n);
    return hieu;
}




