#include <iostream>

using namespace std;
int sort(int aux[]);
int main()
{
	
    char nombres[3][6];
    int edad[3];
	int aux[3];
    int mayor,menor,i,j;

    for( i=0; i<3; i++)
    {
        cout<<"Ingrese nombre "<<endl;
        cin>>nombres[i];
        cout<<"Ingrese edad "<<endl;
        cin>>edad[i];
        aux[i]=edad[i];
    };
    
	sort(aux);
    
	for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(edad[j]==aux[i])
            {
                cout<<"[i-j]"<<" "<<nombres[j]<<" "<<edad[j]<<endl;
                if(i==0)
                {
                    menor=j;
                }
                else if(i==2)
                {
                    mayor=j;
                }
            }

        }
    }

    cout<<"el menor es:"<<" "<<nombres[menor]<<endl<<"\n";
    cout<<"el mayor es:"<<" "<<nombres[mayor]<<endl<<"\n";
    system("pause");
    return 0;
}

int sort(int aux[]){
	int mayor,i,j;
    /* Bubble sort
	Hace el ordenamiento de edades de menor a mayor*/
    for( i=1;  i<3; i++)
    {
        for( j=0; j<3-i; j++)
        {
            if(aux[j]>aux[j+1])
            {
                mayor=aux[j];
                aux[j]=aux[j+1];
                aux[j+1]=mayor;
            }

        }
    }
}

