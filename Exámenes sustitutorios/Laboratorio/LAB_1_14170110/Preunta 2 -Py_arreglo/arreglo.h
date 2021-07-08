#ifndef ARREGLO_H_INCLUDED
#define ARREGLO_H_INCLUDED

#define N 255
#define LEER_ARREGLO(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define PRINT_ARREGLO(a,n) for(int i=0;i<n;i++) cout<<a[i]<<" "
#define REPORTAR(a,b) bool ban=false; /*Bandera logica*/  \
                            cout<<"\nNO ENCONTRADOS\n\n";           \
                            for(int i=0;i<n;i++)                \
                            { for(int c=0;c<n;c++)              \
                               {if(a[i]==b[c])                  \
                                   ban=true;                    \
                               }                                \
                               if(ban==false)                    \
                               cout<<a[i]<<" ";           \
                            }

#endif // ARREGLO_H_INCLUDED
