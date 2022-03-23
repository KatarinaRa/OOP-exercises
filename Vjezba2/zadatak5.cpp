#include<iostream>

int* duplo(int& n)
{
	int i = 0,a = 1;
	int* niz = new int[10];

	while (a != 0)
	{
		std::cout << "Unesite broj";
		std::cin >> a;
		niz[i] = a;
		i++;
		if (i == n)
		{
            int* niz1 = new int[2 * n];
            for (int j = 0; j < n; j++)
            {
                niz1[j] = niz[j];
            }
            delete [] niz;
            niz =  niz1;

			n = n * 2;

		}

	}
	return niz;
}

int main()
{
	int n = 10;
	int* novi_niz = duplo(n);

	for (int i = 0; i < n; i++)
	{
		std::cout << novi_niz[i] << " ";
	}
	delete[] novi_niz;
	novi_niz=0;

}
