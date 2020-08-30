#include <stdio.h>
#include <math.h>
#include<string.h>
int binarydec(int n)
{
    long int decimal=0, i=0, remainder;
    while(n!=0)
    {
        remainder = n%10;
        n = n/10;
        decimal += remainder*pow(2,i++);
    }
    printf("\t\tDecimal value = %d\n",decimal);

}

int binaryhex(int n)
{
    long int hexad=0, i=1,rem;
    while (n!=0)
    {
        rem=n%10;
        hexad= hexad+rem*i;
        i=i*2;
        n=n/10;
    }
    printf("\t\thexadecimal value = %lx \n",hexad);
}

int binaryoctal(int n)
{
    long int oct=0,k=1, remain;
    while(n!=0)
    {
        remain =n%10;
        oct=oct+remain*k;
        k=k*2;
        n=n/10;
    }
    printf("\t\tOctal value = %lo", oct);
}

int decimalbin(int n)
{
    int i=1,j,binary=0;
    for ( j=n;j>0;j=j/2)
    {
        binary=binary+(n%2)*i;
        i=i*10;
        n=n/2;
    }
    printf("\t\tBinary number = %d\n",binary);
}
int decimalhexa(int n)
{
 char decimalhexa[10];
 int i=0,j,rem;
 while(n!=0)
 {
     rem=n%16;
     if (rem<10)
     {
         decimalhexa[i]=rem+48;
         i++;
     }
     else
     {
        decimalhexa[i]= rem+55;
        i++;
     }
    n=n/16;
 }
 printf("\t\tHexadecimal value = ");
for (j=i-1;j>=0;j--)
    printf("%c",decimalhexa[j]);
}
int decimaloct(int n)
{
    printf("\n\t\tOctal value = %o\n", n);
}

void hexa_decimal(char hexdec[20])
{
    int long decimal=0,x=1;
    int i, value;
    int len = strlen(hexdec);
    len--;
    for( i=0; hexdec[i]!='\0';i++)
    {
       if(hexdec[i]>='0' && hexdec[i]<='9')
        {
            value = hexdec[i] - 48;
        }
        else if(hexdec[i]>='a' && hexdec[i]<='f')
        {
            value = hexdec[i] - 97 + 10;
        }
        else if(hexdec[i]>='A' && hexdec[i]<='F')
        {
            value = hexdec[i] - 65 + 10;
        }
       decimal +=value*pow(16,len);
       len--;
    }
    printf("\t\tDecimal value = %d\n", decimal);
}

void hexa_binary(char hexdec[20])
{
    int i;
    printf("\t\tHexadecimal value = ");
     while (hexdec[i])
    {
        switch (hexdec[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
            printf("1010"); break;
        case 'B':
            printf("1011"); break;
        case 'C':
            printf("1100"); break;
        case 'D':
            printf("1101"); break;
        case 'E':
            printf("1110"); break;
        case 'F':
            printf("1111"); break;
        default:
            printf("\n Invalid hexadecimal %c ", hexdec[i]);
        }
        i++;
    }
}

void hexa_octal(char hexdec[20])
{

    int i,len, hedec=0, oct=0;
	for(len=0; hexdec[len]!='\0'; len++);
	for(i=0; hexdec[i]!='\0'; i++,len--)
	{
		if(hexdec[i]>='0' && hexdec[i]<='9')
		{
			hedec= hedec + (hexdec[i]-'0')*pow(16,len-1);
		}
		if(hexdec[i]>='A' && hexdec[i]<='F')
		{
			hedec = hedec + (hexdec[i]-55)*pow(16,len-1);
		}
		if(hexdec[i]>='a' && hexdec[i]<='f')
		{
			hedec = hedec + (hexdec[i]-87)*pow(16,len-1);
		}
	}
	i=1;
	while(hedec!=0)
	{
		oct = oct + (hedec%8)*i;
		hedec = hedec/8;
		i = i*10;
	}
	printf("\n\t\tOctal Value = %d\n",oct);
}

int octal_dec(int n)
{
    int dec=0,i=0, rem;
    while(n!=0)
    {
        rem = n%10;
        dec=dec+(rem*(pow(8,i)));
        i++;
        n=n/10;
    }
    printf("\t\tDecimal value = %d\n",dec);
}

int octal_bhe(int n)
{
    int deci=0,i=0,bina=0,rem=0, len=0,k;
    char hexadecimal[10];
    char hex[10];
    while(n!=0)
    {
        deci +=(n%10)*pow(8,i);
        ++i;
        n=n/10;
    }
    i=1;
    while (deci!= 0)
    {
        bina += (deci % 2) * i;
        deci /= 2;
        i=i*10;
    }
    printf("\t\tBinary value = %d\n",bina);
}

int octal_he(int n)
{
    printf("\t\tHexadecimal value = %X\n",n);
}
 int main()
 {
       printf("\t\t************************************\n");
       printf("\t\t\tNumber Converter System\n");
       printf("\t\t************************************\n");
       int ch,n;
       char ans,hexdec[20];
       printf("\t\tPress 1 if input is Binary\n\n");
       printf("\t\tPress 2 if input is Decimal\n\n");
       printf("\t\tPress 3 if input is Hexadecimal\n\n");
       printf("\t\tPress 4 if input is Octal\n\n");
       printf("\t\tEnter your choice of number\n\n");
       scanf("\t\t%d\n",&ch);
       printf("\t\tChoice is %d\n",ch);
       printf("\t\t************************************\n");
       switch (ch)
       {
       case 1:
        {
            scanf("%d",&n);
            printf("\t\tBinary number is %d\n",n);
            binarydec(n);
            binaryhex(n);
            binaryoctal(n);
            break;
        }
        case 2:
            {
            scanf("%d",&n);
            printf("\t\tDecimal number is %d\n",n);
            decimalbin(n);
            decimalhexa(n);
            decimaloct(n);
            break;
            }
       case 3:
            {
            scanf("%s",hexdec);
            printf("\t\tHexadecimal value is %s\n",hexdec);
            hexa_decimal(hexdec);
            hexa_binary(hexdec);
            hexa_octal(hexdec);
            break;
            }
       case 4:
            {
            scanf("%d",&n);
            printf("\t\tOctal number is %d\n",n);
            octal_dec(n);
            octal_bhe(n);
            octal_he(n);
            break;
            }
    }
 }
