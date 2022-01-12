#include <vector>
#include <iostream>
using namespace std;

void ucapan()
{
  cout << "\n\n===============================\n";
  cout << "Tebak Kata: Bahasa Indonesia\n";
  cout << "===============================\n\n";
  cout << "Intruksi: Selamatkan Temanmu sebelum dia di gantung dengan menebak huruf..\n\n";
}

void jika_gagal(int gagal)
{
  if(gagal==0)
  {
    cout<<"   +---+ \n";
    cout<<"   |   | \n";
    cout<<"   |     \n";
    cout<<"   |     \n";
    cout<<"   |     \n";
    cout<<"   |     \n";
    cout<<" ========= \n\n";
  }
  else if(gagal==1)
  {
    cout<<"   +---+ \n";
    cout<<"   |   | \n";
    cout<<"   |   O \n";
    cout<<"   |     \n";
    cout<<"   |     \n";
    cout<<"   |     \n";
    cout<<" ========= \n\n";
  }
  else if(gagal==2)
  {
    cout<<"   +---+ \n";
    cout<<"   |   | \n";
    cout<<"   |   O \n";
    cout<<"   |   | \n";
    cout<<"   |     \n";
    cout<<"   |     \n";
    cout<<" ========= \n\n";
  }
  else if(gagal==3)
  {
    cout<<"   +---+ \n";
    cout<<"   |   | \n";
    cout<<"   |   O \n";
    cout<<"   |  /| \n";
    cout<<"   |     \n";
    cout<<"   |     \n";
    cout<<" ========= \n\n";
  }
  else if(gagal==4)
  {
    cout<<"   +---+ \n";
    cout<<"   |   | \n";
    cout<<"   |   O \n";
    cout<<"   |  /|\\ \n";
    cout<<"   |     \n";
    cout<<"   |     \n";
    cout<<" ========= \n\n";
  }
  else if(gagal==5)
  {
    cout<<"   +---+ \n";
    cout<<"   |   | \n";
    cout<<"   |   O \n";
    cout<<"   |  /|\\ \n";
    cout<<"   |  /  \n";
    cout<<"   |     \n";
    cout<<" ========= \n\n";
  }
  else if(gagal==6)
  {
    cout<<"   +---+ \n";
    cout<<"   |   | \n";
    cout<<"   |   O \n";
    cout<<"   |  /|\\ \n";
    cout<<"   |  / \\ \n";
    cout<<"   |     \n";
    cout<<" ========= \n\n";
  }

}


void status_jawaban(vector<char> jawabanSalah, string jawaban)
{
  cout<<"Jawaban Terakhir Kamu Yang Salah : \n";

  for(int i = 0; i<jawabanSalah.size(); i++)
  {
    cout<<jawabanSalah[i]<<" ";
  }

  cout<<"\n\nTebak Kata:\n";

  for(int i = 0; i<jawaban.length(); i++)
  {
    cout<<jawaban[i]<<" ";
  }
}


void akhirGame(string jawaban, string soalKata)
{
  if(jawaban==soalKata)
  {
    cout<<"Hore!! Kamu Telah Berhasil Menyelamatkan Temanmu, Kamu Telah Menjadi Pahlawan!\n";
    cout<<"Selamat ya!\n";
  }
  else
  {
    system("clear");
    cout<<":( Temanmu Sudah Digantung\n";
  }
}

int main()
{
  system("clear");
  ucapan();

  string soalKata = "asdfgh";
  string jawaban = "______";
  int gagal = 0;
  vector<char> jawabanSalah;
  bool guess = false;
  char jawabanUser;


  while(jawaban!=soalKata && gagal < 7)
  {
    jika_gagal(gagal);
    status_jawaban(jawabanSalah, jawaban);

    cout<<"\n\nPlease enter your guess: ";
    cin>>jawabanUser;

    for(int i = 0; i<soalKata.length(); i++)
    {
      if(jawabanUser==soalKata[i])
      {
        jawaban[i] = jawabanUser;
        guess = true;
      }
    }
    if(guess)
    {
      system("clear");
      cout<<"\nBenar!\n";
    }
    else
    {
      system("clear");
      cout<<"\nJawaban Kamu Salah!.\n";
      jawabanSalah.push_back(jawabanUser);
      gagal++;
    }
    guess = false;
  }

  akhirGame(jawaban, soalKata);
  return 0;
}