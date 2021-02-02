#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>
#include <fstream>
#include <istream>
#include <string>
#include <clocale> 
using namespace std;
void SPT();
void SWPT();
void EDD();
void MST();
void Cikis();
void Menu();
int tusoku();//Basýlan tuþlarý okumaya yarar

void SPT()
{
	fstream dosya;
	  dosya.open("EIO.txt",ios::out|ios::in|ios::app);
system("CLS");
	cout<<"\n\t\t\t******************************";
 cout<<"\n\t\t\t**           SPT            **"<<"\n\t\t\t**         Yöntemi          **"<<"\n\t\t\t** ________________________ **";
 cout<<"\n\t\t\t******************************";
  cout<<"\n";
  	int j,pj,i,k,gecici,l,t=0,a=0,y;
  	cout<<"\n\n\n\n";
  cout<<"           => iþ sayýsýný giriniz";// iþ sayýlarý girilir
	cin>>j;
	system("cls");
     int islem_zamani[j][j];
     int ci [j];
     int is[j];
     
     cout<<"           => iþlem zamanlarýný giriniz\n";
  		for(i=0;i<j;i++){
  			 printf("     pj: ");
  cin>> islem_zamani[i][1];// iþlem zamanlarý girilir
         islem_zamani[i][2]=i+1;
}

system("CLS");

  cout<<"\n\n\n\n\n\n\n\n\n\n";
for(int i=0;i<=100;i+=1)
   {
    cout<<"               Parametreler Düzenleniyor ve Ýþlemler Yapýlýyor......."<<i<<"%\r";
    Sleep(10);
   }
   Sleep(1000);
   system("CLS");
   	cout<<"\n\t\t\t******************************";
   	dosya<<"\n\t\t\t******************************" ;
 cout<<"\n\t\t\t**           SPT            **"<<"\n\t\t\t**         Yöntemi          **"<<"\n\t\t\t** ________________________ **";
 dosya<<"\n\t\t\t**           SPT            **"<<"\n\t\t\t**         Yöntemi          **"<<"\n\t\t\t** ________________________ **";
 cout<<"\n\t\t\t******************************";
 dosya<<"\n\t\t\t******************************";
 cout<<"\n";
 	dosya<<"\n\n\n\n";
 dosya<<"is sayisi:  ";
     dosya<<j<<" ";
     dosya<<"\n";
 dosya<<"\n"<<"\n j:  ";
   printf("\n j:  ");
   for(k=0;k<j;k++){
   	printf("%5d ", islem_zamani[k][2]);
   	dosya<<islem_zamani[k][2]<<" ";
   }
  printf("\n pj: ");
  dosya<<"\n pj: ";
   for(k=0;k<j;k++){
      printf("%5d ",islem_zamani[k][1]);
      dosya<<islem_zamani[k][1]<<" ";
      
  }
  
  // sýralama
  int gecici2;
  for(k=0; k<j-1; k++){
  	 for(l=0; l<j-1; l++){
  	 	if( islem_zamani[l][1]>islem_zamani[l+1][1] ){
         gecici = islem_zamani[l][1];
         gecici2=islem_zamani[l][2];
		   islem_zamani[l][1] = islem_zamani[l+1][1];
		   islem_zamani[l][2] = islem_zamani[l+1][2];
         islem_zamani[l+1][1] = gecici;
         islem_zamani[l+1][2] = gecici2;
      }
      }
    } 
  	 cout<<"\n\n";
  	 dosya<<"\n\n";
  	 dosya<<" SPT:";
  	 printf("  SPT:");
   for(k=0; k<j; k++){

      printf("%5d",islem_zamani[k][2]);
      dosya<<islem_zamani[k][2]<<" ";
}
   cout<<"\n";
   
   dosya<<"\n"<<"\n j:  ";
  printf("\n j:  ");
   for(k=0; k<j; k++){
      printf("%5d",islem_zamani[k][2]);
      dosya<<islem_zamani[k][2]<<" ";
}
dosya<<"\n pj: ";
 printf("\n pj: ");
for(k=0; k<j; k++){
	printf("%5d",islem_zamani[k][1]);
	dosya<<islem_zamani[k][1]<<" ";
}

  // sýralam bitti
  
// spt yönteminin iþletilmesi
   for(k=0;k<j;k++){
   	t=t+islem_zamani[k][1];
   	ci[k]=t;
   }
   dosya<<"\n ci: ";
  printf("\n ci: ");
   for(k=0;k<j;k++){
      printf("%5d ",ci[k]);
      dosya<<ci[k]<<" ";
  }
  cout<<"\n\n";
  for(k=0;k<j;k++){
  	a=a+ci[k];
  }
  dosya<<"\n\n"<<"  Toplam ci:";
  printf("  Toplam ci:");
  printf("%3d",a);
  dosya<<a<<" ";
  //dosya.eof();
  dosya.close();
  char c;
  cout<<"\n\n\n  Ana Menüye dönmek istermisiniz(e/h)  ";
  cin>>c;
    if(c=='e') {return Menu();
    }
  else{
  	return Cikis();	
  } 
}
	void SWPT()
	{
		fstream dosya;
	  dosya.open("EIO.txt",ios::out|ios::in|ios::app);
	system("CLS");
 cout<<"\n\t\t\t******************************";
 cout<<"\n\t\t\t**           SWPT           **"<<"\n\t\t\t**         Yontemi          **"<<"\n\t\t\t** ________________________ **";
 cout<<"\n\t\t\t******************************";
 cout<<"\n";
  	int j,wj, pj,i,k,gecici,l,t=0,a=0,aa=0,tt=0;
  	cout<<"\n\n\n\n";
  cout<<"           => is sayisini giriniz";// iþ sayýlarý girilir
	cin>>j;
	int agirlik[j][j];
     int islem_zamani[j][j];
     int swpt[j][j];
     int ci [j];
     int wici[j];
     system("cls");
      cout<<"           => aðýrlýklarý giriniz\n";
	for(i=0;i<j;i++){
		 printf("     wj: ");
	 cin>> agirlik[i][1];// agýrlýklar girilir
	       agirlik[i][2]=i+1;
  	}
  	system("cls");
  	 cout<<"           => iþlem zamanlarýný giriniz\n";
  		for(i=0;i<j;i++){
  			 printf("     pj: ");
  cin>> islem_zamani[i][1];// iþlem zamanlarý girilir
         islem_zamani[i][2]=i+1;
}
system("CLS");
  cout<<"\n\n\n\n\n\n\n\n\n\n";
for(int i=0;i<=100;i+=1)
   {
    cout<<"              Parametreler Düzenleniyor ve Ýþlemler Yapýlýyor......."<<i<<"%\r";
    Sleep(10);
   }
   Sleep(1000);
   system("CLS");
    cout<<"\n\t\t\t******************************";
    dosya<<"\n\t\t\t******************************";
 cout<<"\n\t\t\t**           SWPT           **"<<"\n\t\t\t**         Yöntemi          **"<<"\n\t\t\t** ________________________ **";
 dosya<<"\n\t\t\t**           SWPT           **"<<"\n\t\t\t**         Yöntemi          **"<<"\n\t\t\t** ________________________ **";
 cout<<"\n\t\t\t******************************";
 dosya<<"\n\t\t\t******************************";
 cout<<"\n";
 	dosya<<"\n\n\n\n";
 dosya<<"iþ sayýsý:  ";
     dosya<<j<<" ";
     dosya<<"\n";
     dosya<<"\n"<<"\n\ j:  ";
   printf("\n j:   ");
   for(k=0;k<j;k++){
   	printf("%5d ", islem_zamani[k][2]);
   	dosya<<islem_zamani[k][2]<<" ";
   }
  	 printf("\n wj:  ");
  	 dosya<<"\n wj: ";
   for(k=0;k<j;k++){
      printf("%5d ",agirlik[k][1]);
      dosya<<agirlik[k][1]<<" ";
  }
  printf("\n pj:  ");
  dosya<<"\n pj: ";
   for(k=0;k<j;k++){
      printf("%5d ",islem_zamani[k][1]);
      dosya<<islem_zamani[k][1]<<" ";
  }
  for(k=0;k<j;k++){
  	a=islem_zamani[k][1]/agirlik[k][1];
  	swpt[k][1]=a;
    swpt[k][2]=k+1;
  }
  // sýralama
  int gecici2,gecici3,gecici4;
  for(k=0; k<j-1; k++){
  	 for(l=0; l<j-1; l++){
  	 	if( swpt[l][1]>swpt[l+1][1] ){
         gecici = swpt[l][1];
         gecici2=swpt[l][2];
         gecici3=islem_zamani[l][1];
         gecici4=agirlik[l][1];
		   swpt[l][1] = swpt[l+1][1];
		   swpt[l][2] = swpt[l+1][2];
		   islem_zamani[l][1]=islem_zamani[l+1][1];
		   agirlik[l][1]=agirlik[l+1][1];
         swpt[l+1][1] = gecici;
         swpt[l+1][2] = gecici2;
         islem_zamani[l+1][1]=gecici3;
         agirlik[l+1][1]=gecici4;
      }
      }
    } 
  	 cout<<"\n\n";
  	 dosya<<"\n\n";
  	 dosya<<" SWPT:";
printf("    SWPT: ");
for(k=0; k<j; k++){
	printf("%5d",swpt[k][2]);
	dosya<<swpt[k][2]<<" ";
}
  cout<<"\n\n";
  dosya<<"\n\n";
  dosya<<"\n j: ";
  printf("\n j:  ");
   for(k=0; k<j; k++){
      printf("%5d",swpt[k][2]);
     	dosya<<swpt[k][2]<<" "; 
}
dosya<<"\n wj: ";
printf("\n wj: ");
for(k=0; k<j; k++){
	printf("%5d",agirlik[k][1]);
	dosya<<agirlik[k][1]<<" ";
}
dosya<<"\n pj: ";
  printf("\n pj: ");
for(k=0; k<j; k++){
	printf("%5d",islem_zamani[k][1]);
dosya<<islem_zamani[k][1]<<" ";	
}
for(k=0;k<j;k++){
   	t=t+islem_zamani[k][1];
   	ci[k]=t;
   }
   dosya<<"\n ci: ";
  printf("\n ci: ");
   for(k=0;k<j;k++){
      printf("%5d ",ci[k]);
      dosya<<ci[k]<<" ";
  }
  for(k=0;k<j;k++){
  	tt=agirlik[k][1]*ci[k];
  	wici[k]=tt;
  }
  dosya<<"\n wj*ci:";
  printf("\n wj*ci:");
   for(k=0;k<j;k++){
      printf("%5d ",wici[k]);
      dosya<<wici[k]<<" ";
  }
  cout<<"\n\n";
  dosya<<"\n\n";
  for(k=0;k<j;k++){
  	aa=aa+wici[k];
  }
  dosya<<"      Toplam wj*ci:";
  printf("      Toplam wj*ci:");
  dosya<<aa;
  printf("%3d",aa);
  dosya.close();
  char c;
 
  cout<<"\n\n\n  Ana Menüye dönmek istermisiniz(e/h)  ";
  cin>>c;
    if(c=='e') {return Menu();
    }
  else{
  	return Cikis();	
  } 
	}
	void EDD()
	{
		fstream dosya;
	  dosya.open("EIO.txt",ios::out|ios::in|ios::app);
system("cls");
 cout<<"\n\t\t\t******************************";
 cout<<"\n\t\t\t**           EDD            **"<<"\n\t\t\t**         Yöntemi          **"<<"\n\t\t\t** ________________________ **";
 cout<<"\n\t\t\t******************************";
 cout<<"\n";
  	int j,wj, pj,i,k,gecici,l,t=0,a=0,aa=0,tt=0;
  	cout<<"\n\n\n\n";
  cout<<"           => iþ sayýsýný giriniz";// iþ sayýlarý girilir
	cin>>j;
	int teslim_zamani[j][j];
     int islem_zamani[j][j];
     int ci [j];
     int edd[j];
     system("cls");
	cout<<"           => iþlem zamanlarýný giriniz\n";
  		for(i=0;i<j;i++){
  			 printf("     pj: ");
  cin>> islem_zamani[i][1];// iþlem zamanlarý girilir
         islem_zamani[i][2]=i+1;
}
system("CLS");
cout<<"           => aðýrlýklarý giriniz\n";
for(i=0;i<j;i++){
		 printf("     dj: ");
	 cin>> teslim_zamani[i][1];// agýrlýklar girilir
	      teslim_zamani[i][2]=i+1;
  	}
system("CLS");
  cout<<"\n\n\n\n\n\n\n\n\n\n";
for(int i=0;i<=100;i+=1)
   {
    cout<<"              Parametreler Düzenleniyor ve Ýþlemler Yapýlýyor......."<<i<<"%\r";
    Sleep(10);
   }
   Sleep(1000);
   system("CLS");
   cout<<"\n\t\t\t******************************";
   dosya<<"\n\t\t\t******************************";
 cout<<"\n\t\t\t**           EDD            **"<<"\n\t\t\t**         Yöntemi          **"<<"\n\t\t\t** ________________________ **";
 dosya<<"\n\t\t\t**           EDD            **"<<"\n\t\t\t**         Yöntemi          **"<<"\n\t\t\t** ________________________ **";
 cout<<"\n\t\t\t******************************";
  dosya<<"\n\t\t\t******************************";
 cout<<"\n";
 dosya<<"\n\n\n\n";
 dosya<<"iþ sayýsý:  ";
     dosya<<j<<" ";
     dosya<<"\n";
 dosya<<"\n"<<"\n j:  ";
   printf("\n j:  ");
   for(k=0;k<j;k++){
   	printf("%5d ", islem_zamani[k][2]);
   	dosya<<islem_zamani[k][2]<<" ";
   }
   dosya<<"\n wj:";
  	 printf("\n wj: ");
   for(k=0;k<j;k++){
      printf("%5d ",teslim_zamani[k][1]);
      dosya<<teslim_zamani[k][1]<<" ";
  }
  
  printf("\n pj: ");
  dosya<<"\n pj: ";
   for(k=0;k<j;k++){
      printf("%5d ",islem_zamani[k][1]);
      dosya<<islem_zamani[k][1]<<" ";
  }
  // sýralama
  int gecici2,gecici3;
  for(k=0; k<j-1; k++){
  	 for(l=0; l<j-1; l++){
  	 	if( teslim_zamani[l][1]>teslim_zamani[l+1][1] ){
         gecici = teslim_zamani[l][1];
         gecici2=teslim_zamani[l][2];
         gecici3=islem_zamani[l][1];
		   teslim_zamani[l][1] = teslim_zamani[l+1][1];
		   teslim_zamani[l][2] = teslim_zamani[l+1][2];
		   islem_zamani[l][1]=islem_zamani[l+1][1];
         teslim_zamani[l+1][1] = gecici;
         teslim_zamani[l+1][2] = gecici2;
         islem_zamani[l+1][1]=gecici3;
         
      }
      }
    } 
  	 cout<<"\n\n";
  	  dosya<<"\n\n";
  	 dosya<<"    EDD: ";
printf("    EDD: ");
for(k=0; k<j; k++){
	printf("%5d",teslim_zamani[k][2]);
	dosya<<teslim_zamani[k][2]<<" ";
}
  cout<<"\n\n";
   dosya<<"\n\n"<<"\n j:  ";
  printf("\n j:  ");
   for(k=0; k<j; k++){
      printf("%5d",teslim_zamani[k][2]);
      dosya<<teslim_zamani[k][2]<<" ";
}
  printf("\n pj: ");
  dosya<<"\n pj: ";
for(k=0; k<j; k++){
	printf("%5d",islem_zamani[k][1]);
	dosya<<islem_zamani[k][1]<<" ";
}
dosya<<"\n dj: ";
printf("\n dj: ");
for(k=0; k<j; k++){
	printf("%5d",teslim_zamani[k][1]);
	dosya<<teslim_zamani[k][1]<<" ";
}
for(k=0;k<j;k++){
   	t=t+islem_zamani[k][1];
   	ci[k]=t;
   }
   dosya<<"\n cj: ";
  printf("\n ci:  ");
   for(k=0;k<j;k++){
      printf("%4d ",ci[k]);
      dosya<<ci[k]<<" ";
  }
  for(k=0;k<j;k++){
  	tt=ci[k]-teslim_zamani[k][1];
  	edd[k]=tt;
  }
  dosya<<"\n Lj:  ";
  printf("\n Lj:  ");
   for(k=0;k<j;k++){
      printf("%4d ",edd[k]);
      dosya<<edd[k]<<" ";
  }
  	int max;
  max=edd[0];
 for (i=1;i<j;i++){
 if (edd[i]>max){
 	max=edd[i];
 }    
}
dosya<<"\n\n";
cout<<"\n\n";
if(max>0){
	printf ("Lmax:");
	dosya<<"Lmax:";
printf("%4d ",max);
dosya<<max;
}
else{
	printf(" Gecikme yok");	
	dosya<<" Gecikme yok";
	}
	dosya.close();
  
    char c;
  cout<<"\n\n\n  Ana Menüye dönmek istermisiniz(e/h)  ";
  cin>>c;
    if(c=='e') {return Menu();
    }
  else{
  	return Cikis();	
  } 
}
		void MST()
		{
			fstream dosya;
	  dosya.open("EIO.txt",ios::out|ios::in|ios::app);
		system("CLS");	
	 cout<<"\n\t\t\t******************************";
 cout<<"\n\t\t\t**           MST            **"<<"\n\t\t\t**         Yöntemi          **"<<"\n\t\t\t** ________________________ **";
 cout<<"\n\t\t\t******************************";
 cout<<"\n";
  	int j,wj, pj,i,k,gecici,l,t=0,a=0,aa=0,tt=0;
  	cout<<"\n\n\n\n";
  cout<<"           => iþ sayýsýný giriniz";// iþ sayýlarý girilir
	cin>>j;
	system("CLS");
	int teslim_zamani[j][j];
     int islem_zamani[j][j];
     int ci [j];
     int mst[j][j];
     int E[j];
     int edd[j];
	 cout<<"           => iþlem zamanlarýný giriniz\n";
  		for(i=0;i<j;i++){
  			 printf("     pj: ");
  cin>> islem_zamani[i][1];// iþlem zamanlarý girilir
         islem_zamani[i][2]=i+1;
}
system("CLS");
cout<<"           => aðýrltklar giriniz\n";
for(i=0;i<j;i++){
		 printf("     dj: ");
	 cin>> teslim_zamani[i][1];// agýrlýklar girilir
	      teslim_zamani[i][2]=i+1;
  	}
system("CLS");
  cout<<"\n\n\n\n\n\n\n\n\n\n";
for(int i=0;i<=100;i+=1)
   {
    cout<<"              Parametreler Düzenleniyor ve Ýþlemler Yapýlýyor......."<<i<<"%\r";
    Sleep(10);
   }
   Sleep(1000);
   system("CLS");
   cout<<"\n\t\t\t******************************";
   dosya<<"\n\t\t\t******************************";
 cout<<"\n\t\t\t**           MST            **"<<"\n\t\t\t**         Yöntemi          **"<<"\n\t\t\t** ________________________ **";
 dosya<<"\n\t\t\t**           MST            **"<<"\n\t\t\t**         Yöntemi          **"<<"\n\t\t\t** ________________________ **";
 cout<<"\n\t\t\t******************************";
 dosya<<"\n\t\t\t******************************";
  cout<<"\n";
 dosya<<"\n\n\n\n";
 dosya<<"Ýþ sayýsý:  ";
     dosya<<j<<" ";
     dosya<<"\n";
 dosya<<"\n"<<"\n j:  ";
   printf("\n j:  ");
   for(k=0;k<j;k++){
   	printf("%5d ", islem_zamani[k][2]);
   	dosya<<islem_zamani[k][2]<<" ";
   }
  	 printf("\n wj: ");
  	 dosya<<"\n wj: ";
   for(k=0;k<j;k++){
      printf("%5d ",teslim_zamani[k][1]);
      dosya<<teslim_zamani[k][1]<<" ";
  }
  printf("\n pj: ");
  dosya<<"\n pj: ";
   for(k=0;k<j;k++){
      printf("%5d ",islem_zamani[k][1]);
      dosya<<islem_zamani[k][1]<<" ";
  }
  for(k=0;k<j;k++){
  	tt=teslim_zamani[k][1]-islem_zamani[k][1];
  	mst[k][1]=tt;
  	mst[k][2]=k+1;
  }
  // sýralama
  int gecici2,gecici3, gecici4;
  for(k=0; k<j-1; k++){
  	 for(l=0; l<j-1; l++){
  	 	if( mst[l][1]>mst[l+1][1] ){
         gecici = mst[l][1];
         gecici2=mst[l][2];
         gecici3=islem_zamani[l][1];
         gecici4=teslim_zamani[l][1];
		  mst[l][1] = mst[l+1][1];
		   mst[l][2] = mst[l+1][2];
		   islem_zamani[l][1]=islem_zamani[l+1][1];
		   teslim_zamani[l][1]=teslim_zamani[l+1][1];
         mst[l+1][1] = gecici;
         mst[l+1][2] = gecici2;
         islem_zamani[l+1][1]=gecici3;
         teslim_zamani[l+1][1]=gecici4; 
      }
      }
    } 
  	 cout<<"\n\n";
  	 dosya<<"\n\n";
  	 dosya<<" MST:";
printf("  MST: ");
for(k=0; k<j; k++){
	printf("%5d",mst[k][2]);
	dosya<<mst[k][2]<<" ";
}
  cout<<"\n";
  dosya<<"\n"<<"\n j:  ";
  printf("\n j:  ");
   for(k=0; k<j; k++){
      printf("%5d",mst[k][2]);
      dosya<<mst[k][2]<<" ";
}
dosya<<"\n pj: ";
  printf("\n pj: ");
for(k=0; k<j; k++){
	printf("%5d",islem_zamani[k][1]);
	dosya<<islem_zamani[k][1]<<" ";
}
dosya<<"\n dj: ";
printf("\n dj: ");
for(k=0; k<j; k++){
	printf("%5d",teslim_zamani[k][1]);
	dosya<<teslim_zamani[k][1]<<" ";
}
for(k=0;k<j;k++){
   	t=t+islem_zamani[k][1];
   	ci[k]=t;
   }
   dosya<<"\n ci:  ";
  printf("\n ci:  ");
   for(k=0;k<j;k++){
      printf("%4d ",ci[k]);
      dosya<<ci[k]<<" ";
  }
  for(k=0;k<j;k++){
  	tt=ci[k]-teslim_zamani[k][1];
  	edd[k]=tt;
  }
  dosya<<"\n Lj:  ";
  printf("\n Lj:  ");
   for(k=0;k<j;k++){
      printf("%4d ",edd[k]);
      dosya<<edd[k]<<" ";
  }

 for (i=0;i<j;i++){
 if (edd[i]<0){
 	E[i]=1;
 }
 else{
 	E[i]=0;
 }    
}
dosya<<"\n Ej:  ";
 printf("\n Ej:  ");
   for(k=0;k<j;k++){
      printf("%4d ",E[k]);
      dosya<<E[k]<<" ";
  }
  dosya<<"\n";
  cout<<"\n";
  int tl=0;
  for(k=0;k<j;k++){
   	tl=tl+E[k];
   }
   dosya<<"\n Emax:";
   printf ("\n Emax:");
   dosya<<tl;
printf("%4d ",tl);
dosya.close();
char c;    
  cout<<"\n\n\n  Ana Menüye dönmek istermisiniz(e/h)  ";
  cin>>c;
    if(c=='e') {return Menu();
    }
  else{
  	return Cikis();	
  } 
		}
	void Cikis()
{
	system("color 0A");
system("CLS");
cout<<"\n\n\n\n\n================================================================================";
 cout<<"                                           \n";
 cout<<"                                           \n";
cout<<"\t\t\t        ______ __  ______         \n";
cout<<"\t\t\t       // ___/|  |/ ____ \\        \n";
cout<<"\t\t\t       \\ \\ __ |  | /    \\ \\ \    \n";
cout<<"\t\t\t       ||  __ |  |                  \n";
cout<<"\t\t\t       / /____|  | \\____/ /          \n";
cout<<"\t\t\t       \\\\_____|__|\\______/        \n";
cout<<"\n\n\n================================================================================";

   cout<<"\n\t\t\t\t       Coder  \n\n\t\t\t\tB. ELÝTOK (Mr.EIO) ";
    
Sleep(2000);
    exit(0);
}
void Menu()
{
	system("CLS");
	int pos=1;
    int opt; 
    char c;
    system("color 17");
    system("cls");
    cout<<"\n\t\t\t******************************"<<"\n\t\t\t******************************";
 cout<<"\n\t\t\t**                          **"<<"\n\t\t\t**        Hoþgeldiniz       **"<<"\n\t\t\t**         Ana Menü         **"<<"\n\t\t\t** ________________________ **";
 cout<<"\n\t\t\t**                          **"<<"\n\t\t\t******************************"<<"\n\t\t\t******************************";
  cout<<"                                           \n";
    cout<<"-> Eþ deðer (SPT)\n";
    cout<<"   Tek makinada toplam aðýrlýklý tamamlanma zamaný(SWPT)\n";
    cout<<"   Tek makinada maksimum gecikme problemi(EDD) \n";
    cout<<"   Tek makinada maksimum erken bitme(MST) \n";
    cout<<"   Çýkýþ \n";
    while(true)
    {
    	int tus_=0;
        Sleep(50);//bunun sebebi, sen tuþtan elini çekene kadar, birden çok while döner. Ve ayný tuþa birden çok kez basmýþsýn gibi olur. Hassaslýk ayarý gibi. Artýrýrsan hassaslýk azalýr. Denemesi bedava
        tus_=tusoku();
        if(tus_ == 5) break; //Enter basýlmýþsa
        if(tus_ == 4 && pos<5) pos++; //aþaðý ok
        else if(tus_ == 3 && pos>1) pos--; // yukarý ok
        
        if(tus_ != 0){
        	system("color 17");
            system("cls");
            cout<<"\n\t\t\t******************************"<<"\n\t\t\t******************************";
 cout<<"\n\t\t\t**                          **"<<"\n\t\t\t**        Hosgeldiniz       **"<<"\n\t\t\t**         Ana Menu         **"<<"\n\t\t\t** ________________________ **";
 cout<<"\n\t\t\t**                          **"<<"\n\t\t\t******************************"<<"\n\t\t\t******************************";
  cout<<"                                           \n";
            if(pos == 1)
            {
            	
                cout<<"-> Eþ deðer (SPT)"<<endl;
            }else
            {
                cout<<"   Eþ deðer (SPT)"<<endl;
            }
           if(pos == 2)
            {
                cout<<"-> Tek makinada toplam agýrlýklý tamamlanma zamaný(SWPT)"<<endl;
            }else
            {
                cout<<"   Tek makinada toplam agýrlýklý tamamlanma zamaný(SWPT)"<<endl;
            }
            if(pos == 3)
            {
                cout<<"-> Tek makinada maksimum gecikme problemi(EDD)\n";
            }else
            {
                cout<<"   Tek makinada maksimum gecikme problemi(EDD)\n";
            }
            if(pos == 4)
            {
                cout<<"-> Tek makinada maksimum erken bitme(MST) \n";
            }else
            {
                cout<<"   Tek makinada maksimum erken bitme(MST) \n";
            }
			if(pos == 5)
            {
                cout<<"-> Çýkýþ \n";
            }else
            {
                cout<<"   Çýkýþ  \n";
            } 
    }
}
opt = pos;
    switch(opt)
    {
    case 1: SPT(); break;
    case 2: SWPT(); break;
    case 3: EDD(); break;
    case 4: MST(); break;
    case 5: Cikis(); break;
    //default: cout<<"wrong input\n"; 
    }
}	
	int main() 
{ 
system("CLS");
	setlocale(LC_ALL, "turkish");
	system("color 0A");
  // Giris yazýsý
 cout<<"\n\n\n\n\n================================================================================";
 cout<<"                                           \n";
 cout<<"                                           \n";
cout<<"\t\t\t        ______ __  ______         \n";
cout<<"\t\t\t       // ___/|  |/ ____ \\        \n";
cout<<"\t\t\t       \\ \\ __ |  | /    \\ \\ \    \n";
cout<<"\t\t\t       ||  __ |  |                  \n";
cout<<"\t\t\t       / /____|  | \\____/ /          \n";
cout<<"\t\t\t       \\\\_____|__|\\______/        \n";
cout<<"\n\n\n================================================================================";
 cout<<"\n\t\t\t Sýralama ve Çizelgeleme Programý    ";
   cout<<"                                           \n";
     for(int i=0;i<=100;i+=1)
   {
    cout<<"                              Yükleniyor......."<<i<<"%\r";
    Sleep(10);
   }
 Sleep(2000);
 Menu();   
}
/*
BÝRAZ GEREKSÝZ OLDU AMA TÜM OK TUÞLARINI KOYDUM.
BELKÝ YATAY MENÜ DE YAPARSIN
*/
int tusoku(void)
{
    if( GetAsyncKeyState(VK_LEFT)  ) // SOL OK
    {
        return 1;
    }else if( GetAsyncKeyState(VK_RIGHT) & 0x8000 ) // SAÐ OK
    {
        return 2;
    }else if( GetAsyncKeyState(VK_UP) & 0x8000 ) // YUKARI OK
    {
        return 3;
    }else if( GetAsyncKeyState(VK_DOWN) & 0x8000 ) // AÞAÐI OK
    {
        return 4;
    }else if( GetAsyncKeyState(VK_RETURN) & 0x8000 ) // ENTER
    {
        return 5;
    }
    return 0;
}
