/* #include <iostream>
using namespace std;
void felt(double falt[], int antal);
int main()
{
	double falt[] = {-4,-4.6, 9.9, 0};
	
	for (int i = 0; i < 4; i++)
	{
		cout << falt[i] << endl;
	}
	felt (falt,4);
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << falt[i] << endl;
	}
	
	
return 0;
}

void felt(double falt[], int antal) 
{
 
 for (int  i = 0; i < antal; i++)
{
		if (falt [i] !=0)
	falt [i]  = falt [i] * -1;

}

} */

#include <iostream>
using namespace std;
int main() {
	
    int antaltal;
    int talfalt[10];
	cout << "Hur många heltal vill du mata in? (10 max)" << endl;
    cin >> antaltal;
    
    for (int i=0; i<antaltal; i++)
    {
    	cout << "Mata in tal " << (i+1) << endl;
    	cin >> talfalt[i];
    	
    }
    int tmp = talfalt[0];
    
    for (int i=1; i<antaltal; i++)
    {
       if (talfalt[i] > tmp)
           tmp = talfalt[i];
    }
    
    cout << "Det största av de inmatade heltalen är " << tmp << endl;
     
	return 0;
}

