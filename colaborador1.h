//COLABORADOR1 - GARCIA WILA MELANIE
void ingresar(flolat (*m1)[5], float (*m2)[5])
{
  int f,c,;
  cout<<"Ingrese el numero de filas:"<<endl;
  cin>>f;
  cout<<"Ingrese el numero de columnas:"<<endl;
  cin>>c;
  in matriz1[f][c], matriz2[f][c];
  cout<<endl;
  cout<<"Ingrese los valores de la matriz 1"<<endl;
  for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
      cout<<"Ingrese un numero: ";
      cin>>m1[i][j];
    }
  }
  cout<<"\n";
  cout<<endl;
  cout<<"Ingrese los valores de la matriz 2"<<endl;
  for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
      cout<<"Ingrese un numero: ";
      cin>>m2[i][j];
    }
  }
  cout<<"\n";
  cout<<"La matriz 1 es:"<<endl;
  for(int i=0:i<f;i++){
    for(int j=0;j<c;j++){
      cout<<m1[i][j];
    }
    cout<<endl;
  }
  cout<<"\n";
  cout<<"La matriz 2 es:"<<endl;
  for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
      cout<<m2[i][j];
    }
    cout<<endl;
  }
}
  
