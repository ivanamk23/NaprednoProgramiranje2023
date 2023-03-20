#include <iostream> 
using namespace std; 

// shell Sort- implementira algoritam za sortiranje na dadena niza znaci spored golemina 
int shellSort(char arr[], int N)  //prvo se definira  funkcijata ShellSort() koja ja zema nizata i N kako vlezovi
{ 
    for (int gap = N/2; gap > 0; gap /= 2) 
    { 
        for (int i = gap; i < N; i += 1) 
        { 
            
            char temp = arr[i]; 

            int j; 
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
            {
                arr[j] = arr[j - gap]; 
            }

            arr[j] = temp; 
        }  //funkcijata se povtoruva preku razlichni praznini i za sekoja gi podreduva listite so primena na praznina koristekji go algoritmot za sortiranje shell
    } 

    return 0; 
} 

int main() //funkcijata main() inicijalizira niza so niza od znaci i ja presmetuva goleminata na N. 
{ 
    char arr[] = {'I', 'v', 'a', 'n', 'a', 'M', 'i', 't', 'r', 'e', 'v', 's', 'k', 'a', 'I', 'N', 'K', 'I', '1', '0', '1', '2'}; 
    //prvo  ja pechati na konzola nizata pred sortirajeto 
    int N = sizeof(arr)/sizeof(arr[0]); 

    cout << "Array to be sorted: \n"; 
    for (int i=0; i<N; i++) 
    {
        cout << arr[i] << " "; 
    }

    shellSort(arr, N); 
   // a potoa ja povikuva  funkcijata  shellSort() za da ja podredi nizata i potoa ja pechati sortiranata niza na konzola
    cout << "\nArray after shell sort: \n"; 
    for (int i=0; i<N; i++) 
    {
        cout << arr[i] << " "; 
    } //vleznata niza sodrzhi i mali i golemi znaci a algoritmot kje gi podredi vrz osnova na nivnite ASCII vrednosti  

    return 0; 
} 

