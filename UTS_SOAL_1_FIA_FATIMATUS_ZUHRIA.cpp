#include <iostream>
#include <conio.h>
#include <string>

 using namespace std;

 int main ()

 {
    string nama, jurusan_siswa;
    float ipa, ips, mm, bin, bing, rata_rata, a, b, total;
    char answer;
    bool run = true;


    ulang:

    cout<<"            <=Data Hasil Ujian Nasional Siswa=>"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;

    cout<<"Masukkan nama siswa (gunakan tanda (_) untuk spasi) : ";
    cin>>nama;
    cout<<"Masukkan jurusan siswa (gunakan tanda (_) untuk spasi) : ";
    cin>>jurusan_siswa;

    cout<<"Masukkan nilai Ujian Nasional Matematika : ";
    cin>>mm;
    cout<<"Masukkan nilai Ujian Nasional Ilmu Pendidikan Alam : ";
    cin>>ipa;
    cout<<"Masukkan nilai Ujian Nasional Ilmu Pendidikan Sosial : ";
    cin>>ips;
    cout<<"Masukkan nilai Ujian Nasional Bahasa Indonesia : ";
    cin>>bin;
    cout<<"Masukkan nilai Ujian Nasional Bahasa Inggris : ";
    cin>>bing;

    total = mm + ipa + ips + bin + bing;
    cout<<"Total nilai Ujian Nasional : "<<total<<endl;

    rata_rata = total/5;
    cout<<"Nilai rata-rata Ujian Nasional : "<<rata_rata<<endl;

    cout<<"Kesimpulan :"<<endl;
    cout<<"Total hasil Ujian Nasional "<<nama<<" jurusan "<<jurusan_siswa<<" sebesar "<<total<<" dengan nilai rata-rata "<<rata_rata<<endl;

    cout<<"Dinyatakan : "<<endl;
    if (rata_rata = rata_rata < 5)
        cout<<"Tidak Lulus"<<endl;
    else cout<<"Lulus"<<endl;

    cout<<"Dan siswa atas nama "<<nama<<" : "<<endl;
    {
        float rata_rata;
        rata_rata = total/5;

        if (rata_rata >= 9.5 && rata_rata <= 10)
            cout<<"Berhak mendapat beasiswa Full Scholarship"<<endl;
        {
                if (rata_rata >= 9 && rata_rata < 9.5){
                        cout<<"Berhak mendapat uang pembinaan sebesar Rp. 1.000.000"<<endl;
        }
        else if(rata_rata <9) {
                cout<<"Tetap semangat belajar menggapai impian."<<endl;
        }
        cout<<endl;
        }
        cout<<endl;
    }
    cout<<endl;

{

    char answer;
    bool run = true;
    while(run)
     {

        cout<<"Apakah anda ingin menjalankan program lagi (y/n)?\n";
        cin>>answer;
        if(answer == 'Y' ||answer == 'y'){
            run = true;
        goto ulang;
        }
        cout<<endl;
        if(answer == 'N' || answer == 'n'){
            run = false;
            break;
        }
        cout<<endl;
    }
    cout<<endl;
}
cout<<endl;

return 0;
}


