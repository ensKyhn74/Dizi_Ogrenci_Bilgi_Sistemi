#include <stdio.h>
// n elemanlı dizide öğrencilerin ortalamaları depolansın.
// dersten kalan ve dersi geçen öğrencilerin ortalamaları farklı dizilerde tutulur
// kalan ve geçen öğrencilerin ortalamaları,dersten kaç kişinin kaldığı ve dersi kaç kişinin geçtiği ve sınıftaki başarılı-başarısız yüzdesi ekrana yazdırılır 

int main() 

{
    
 int i,n;
 
 printf("kac tane ogrencinin notunu gireceksiniz?: ");
 scanf("%d",&n); // 10
 printf("\n");
 
 float KalanOgrenciler[n];
 float GecenOgrenciler[n];
 int vize[n],final[n];
 float ortalama[n];
 int KalanSayac = 0,GecenSayac = 0;
 int adet1 = 0,adet2 = 0;
 
 for(i = 0 ; i < n ; i++)
 {
  printf("%d.ogrencinin vize notunu girin: ",i + 1);
  scanf("%d",&vize[i]);
  
  printf("%d.ogrencinin final notunu girin: ",i + 1);
  scanf("%d",&final[i]);
  
  ortalama[i] = vize[i] * 0.4 + final[i] * 0.6;
  printf("%d ogrencinin ortalamasi: %.2f\n",i + 1,ortalama[i]);
 }
 
 for(i = 0 ; i < n ; i++)
 {
  if(ortalama[i] >= 90 && ortalama[i] <= 100)
  {
   GecenOgrenciler[GecenSayac] = ortalama[i];
   GecenSayac++;
   adet2++;
  }
  
  else if(ortalama[i] >= 80 && ortalama[i] <= 89)
  {
   GecenOgrenciler[GecenSayac] = ortalama[i];
   GecenSayac++;
   adet2++;
  }
  
  else if(ortalama[i] >= 75 && ortalama[i] <= 79)
  {
   GecenOgrenciler[GecenSayac] = ortalama[i];
   GecenSayac++;
   adet2++;
  }
  
  else if(ortalama[i] >= 70 && ortalama[i] <= 74)
  {
   GecenOgrenciler[GecenSayac] = ortalama[i];
   GecenSayac++;
   adet2++;
  }
 
  else if(ortalama[i] >= 60 && ortalama[i] <= 69)
  {
   GecenOgrenciler[GecenSayac] = ortalama[i];
   GecenSayac++;
   adet2++;
  }
  
  else if(ortalama[i] >= 50 && ortalama[i] <= 59)
  {
   GecenOgrenciler[GecenSayac] = ortalama[i];
   GecenSayac++;
   adet2++;
  }
  
  else if(ortalama[i] >= 40 && ortalama[i] <= 49)
  {
   KalanOgrenciler[KalanSayac] = ortalama[i];
   KalanSayac++;
   adet1++;
  }
  
  else if(ortalama[i] >= 30 && ortalama[i] <= 39)
  {
   KalanOgrenciler[KalanSayac] = ortalama[i];
   KalanSayac++;
   adet1++;
  }
  
  else if(ortalama[i] >= 0 && ortalama[i] <= 29)
  {
   KalanOgrenciler[KalanSayac] = ortalama[i];
   KalanSayac++;
   adet1++;
  }
 }
 
 
 printf("\ndersten kalan ogrencilerin ortalamalari: ");
 for(i = 0 ; i < KalanSayac ; i++)
 {
  printf("%.2f ",KalanOgrenciler[i]);
 }
  printf("\n"); 
  
 printf("dersi gecen ogrencilerin ortalamalari: ");
 for(i = 0 ; i < GecenSayac ; i++)
 {
  printf("%.2f ",GecenOgrenciler[i]);
 }
 
 printf("\ndersten %d ogrenci kaldi,dersi %d ogrenci gecti\n",adet1,adet2);
 printf("dersten kalan ogrenci yuzdesi: %%%.f\n",((float)adet1/(adet1+adet2)) * 100);
 printf("dersten gecen ogrenci yuzdesi: %%%.f\n",((float)adet2/(adet1+adet2)) * 100);
  
 return 0;
  
}