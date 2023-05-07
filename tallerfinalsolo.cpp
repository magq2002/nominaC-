#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>


using namespace std;

	const int fila=43;
	const int columna=12;
	int matriz [fila][columna];
	const int filac=43;
	const int columnac=2;
	char matrizc [filac][columnac][50];
	const int filab=43;
	const int columnab=1;
	int matrizb [filab][columnab];
	int i=0;
	int j=0;
	int sb [10];
	int nhe[10];
	int vthe[10];
	int vb[10];
	int subtotal1[10];
	int varl[10];
	int veps[10];
	int vp[10];
	int r[10];
	int fc[10];
	int td[10];
	int totalapagar[10];
	string nombre[10];
    string apellido[10];
    int cedula[11];
    int vthee;
    int subtotal11;
    int varll;
    int vepss;
    int vpp;
    int rr;
    int fcc;
    int tdd;
    int totalapagarr;
    int Totalpagos=0;
    int Totaldeducciones=0;
    int Totalpagoempresa=0;

//ESPACIO DE FUNCIONES

bool contr(string a, string b){
	
	string c="Trabajo";
	string d="final";
	
	if(a==c && b==d){
		
		return true;        
	}else{
	
		return false;
		
	}
	
}


void minprograma1(){

	cout<<" DIGITE SU CEDULA --> ";
	cin>>matrizb[i][0];
	cout<<" DIGITE SU APELLIDO --> ";
	cin>>matrizc[i][0];
	cout<<" INGRESE SU NOMBRE --> ";
	cin>>matrizc[i][1];
	cout<<" INGRESE SU SALARIO BASICO -->";
	cin>>matriz[i][0];
	cout<<" INGRESE HORAS EXTRAS TRABAJADAS --> ";
	cin>>matriz[i][1];
	cout<<" INGRESE ALGUN TIPO DE BONIFICACION GANADA --> ";
	cin>>matriz[i][3];
	i=i+1;
	system("pause");
	
}//minprograma1
void minprograma2(){
	      

        cedula[0]=1056793728;
        cedula[1]=1940582019;
        cedula[2]=1495820184;
        cedula[3]=1950204819;
        cedula[4]=1894028384;
        cedula[5]=1472402840;
        cedula[6]=1482047203;
        
        nombre[0]="Nicolas";
        nombre[1]="Felipe ";
        nombre[2]="Manuel ";
        nombre[3]="Yaneth ";
        nombre[4]="Mateo  ";
        nombre[5]="Alejo  ";
        nombre[6]="John   ";
        
        apellido[0]="Galvez ";
        apellido[1]="Marles ";
        apellido[2]="Bolaños";
        apellido[3]="Ramirez";
        apellido[4]="Rojas  ";
        apellido[5]="Duque  ";
        apellido[6]="Herrera";
        
        sb[0]=200000;
        sb[1]=500000;
        sb[2]=300000;
        sb[3]=400000;
        sb[4]=500000;
        sb[5]=600000;
        sb[6]=700000;
        
        nhe[0]=3;
        nhe[1]=3;
        nhe[2]=2;
        nhe[3]=1;
        nhe[4]=5;
        nhe[5]=7;
        nhe[6]=8;
        
        vb[0]=2000;
        vb[1]=3000;
        vb[2]=1250;
        vb[3]=4500;
        vb[4]=8000;
        vb[5]=7000;
        vb[6]=5000;
        
        for (int i=0; i<7; i++){
        vthe[i]=nhe[i]*15000;	
		}
        
        for (int i=0; i<7; i++){
        subtotal1[i]=sb[i]+vthe[i]+vb[i];
    }
        for (int i=0; i<7; i++){
        varl[i]=(0.025)*sb[i];	
		}

        for (int i=0; i<7; i++){
        veps[i]=sb[i]*(0.04);	
		}
        
        for (int i=0; i<7; i++){
        vp[i]=(0.04)*sb[i];
		}
		
		for (int i=0; i<7; i++){
		r[i]=(0.02)*subtotal1[i];	
		}
        
        for (int i=0; i<7; i++){
        fc[i]=((0.08)*subtotal1[i]);
		}

        for (int i=0; i<7; i++){
        td[i]=varl[i]+veps[i]+vp[i]+r[i]+fc[i];
		}
		
		for (int i=0; i<7; i++){
		totalapagar[i]=subtotal1[i]-td[i];
		}
        	
        
        for(int i=0; i<7; i++){
        	cout<<cedula[i]<<" | "<<nombre[i]<<" | "<<apellido[i]<<" | "<<sb[i]<<" | "<<nhe[i]<<" | "<<vb[i]<<" | "<<subtotal1[i]<<" | "<<varl[i]<<" | "<<veps[i]<<" | "<<vp[i]<<" | "<<r[i]<<" | "<<fc[i]<<" | "<<td[i]<<" | "<<totalapagar[i]<<" | "<<endl;
        	
		}
	
	
	for (int i=0; i<43; i++){
	for(int j=0; j<12; j++){
		if(j==2){
		vthee=matriz[i][1]*15000;
	matriz[i][2]=vthee;
		}
		if(j==4){
		subtotal11=matriz[i][0]+matriz[i][2]+matriz[i][3];
	matriz[i][4]=subtotal11;
		}
		if(j==5){
		varll=(0.025)*matriz[i][0];
	matriz[i][5]=varll;
		}
		if(j==6){
		vepss=matriz[i][0]*(0.04);
	matriz[i][6]=vepss;
		}
		if(j==7){
		vpp=(0.04)*matriz[i][0];
	matriz[i][7]=vpp;
		}
		if(j==8){
		rr=(0.02)*matriz[i][4];
	matriz[i][8]=rr;
		}
		if(j==9){
		fcc=((0.08)*matriz[i][4]);
	matriz[i][9]=fcc;
		}
		if(j==10){
		tdd=matriz[i][5]+matriz[i][6]+matriz[i][7]+matriz[i][8]+matriz[i][9];
	matriz[i][10]=tdd;
		}
		if(j==11){
		totalapagarr=matriz[i][4]-matriz[i][10];
	matriz[i][11]=totalapagarr;
		}
		if(j>=1){
			cout<<" | "<<matriz[i][j];
		}
		if(j==0){
		cout<<" | "<<matrizb[i][j]<<" | "<<matrizc[i][j]<<" | "<< matrizc[i][j+1]<<" | "<<matriz[i][j]<<" | ";
	}
	}//columna
	cout<<endl;
}//fila
system ("pause");
}//minprograma2
void minprograma3(){
	for(int i=0; i<43; i++){
		Totalpagos=Totalpagos+subtotal1[i]+matriz[i][4];
		Totaldeducciones=Totaldeducciones+td[i]+matriz[i][10];
		Totalpagoempresa=Totalpagoempresa+totalapagar[i]+matriz[i][11];
		
	}
	cout<<"Total pagos --> "<<Totalpagos<<endl;
	cout<<"Total deducciones --> "<<Totaldeducciones<<endl;
	cout<<"Total pago empresa --> "<<Totalpagoempresa<<endl;
	system("pause");
	
}


int main(){
	bool c=false;
int cont=0;

do{
	system("cls");
	system("color 70");
	
	string nom1="";
	string contr1="";
	
	fflush(stdin);
	
	cout<<"------------------------";
	cout<<endl;
	cout<<"DIGITE SU USUARIO "<<endl;
	cout<<"------------------------";
	cout<<endl;
	getline(cin,nom1);
	
	
	char clave[5];
	fflush(stdin);	
	cout<<"------------------------";
	cout<<endl;
	cout<<"INGRESE LA CLAVE "<<endl;
	cout<<"------------------------";
	cout<<endl;
	for(int i=0; i<5; i++){
		
		clave[i]=getch();
		cout<<"*";
	}
	cout<<endl;
	contr1=clave;
	
	c=contr(nom1,contr1);
	
	if(!c){
		
		cont++;
		if(cont<3){
			cout<<"El nombre de usuario o/u clave es invalido."<<endl;
			cout<<endl;
			cout<<"-------------------------------------------"<<endl;
			cout<<endl;
			system("pause");
		}
		if(cont==3){
			
			cout<<"Has fallado demasiado se cerrara el programa"<<endl;
			system("pause");
			return 0;
		}
		
	}

}while(!c);
	int opc=0;
	do{
		system("cls");
		cout<<"------------------------"<<endl;
		cout<<"PROYECTO FINAL "<<endl;
		cout<<endl;
		cout<<"1. AGREGAR EMPLEADO "<<endl;
		cout<<endl;
		cout<<"2. GENERAR NOMINA "<<endl;
		cout<<endl;
		cout<<"3. GENERAR REPORTE "<<endl;
		cout<<endl;
		cout<<"4. SALIR DEL PROGRAMA "<<endl;
		cout<<endl;
		cout<<"-------------------------"<<endl;
		cout<<endl;
		cout<<"DIGITE SU OPCION ---->";
		cin>>opc;
		switch(opc){
			case 1:{
					system("cls");
				cout<<"----------------";
				cout<<endl;
				cout<<" NUEVO EMPLEADO ";
				cout<<endl;
				cout<<"----------------";
				cout<<endl;
				minprograma1();
				break;
			}//case 1
			
			case 2:{
					system("cls");
				cout<<"----------------";
				cout<<endl;
				cout<<" NOMINA ";
				cout<<endl;
				cout<<"----------------";
				cout<<endl;
				minprograma2();
				break;
			}//case 2
			
			case 3:{
					system("cls");
					cout<<"----------------";
					cout<<endl;
					cout<<" REPORTE ";
					cout<<endl;
					cout<<"----------------";
					cout<<endl;
					minprograma3();
					
				break;
			}//case 3
			
			case 4:{
			system("cls");
			cout<<"----------------";
			cout<<"DECIDIO SALIR DEL PROGRAMA"<<endl;
			cout<<"----------------";
			cout<<"VUELVA PROXIMAMENTE"<<endl;
			exit(0);
				break;
			}//case 4
			
		}//switch
	} //do 
	while(opc>0 && opc<=3);
	return 0;
}//funcion principal
