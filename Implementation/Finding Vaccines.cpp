import java.util.*;


 

class Vaccine

{

public static void main (String args[])

{

Scanner sc=new Scanner(System.in);

 

//Virus data:


 

int lenOfVirRNA;

String virRNA;

int virC=0;

int virG=0;


 

//Vaccine data:


 

int noOfVac;

int[] lenOfVacRNA = new int[1000];

String[] vacRNA = new String[1000];

int[] vacC = new int[1000];

int[] vacG = new int[1000];


 

//Computation:

int k[]=new int[1000];

int maxIndex = 0;



 

//read data:


 

noOfVac = sc.nextInt();

lenOfVirRNA = sc.nextInt();

virRNA = sc.next();


 

for(int i =0; i< noOfVac;i++)

{

lenOfVacRNA[i] = sc.nextInt();

vacRNA[i] = sc.next();

}


 

//Count C & G of virus:


 

for(int i=0;i<lenOfVirRNA;i++)

{

if(virRNA.charAt(i)=='C')

virC++;

else if(virRNA.charAt(i)=='G')

virG++;

else

continue;

}


 

//Count C & G of each vaccine:


 

for(int i=0; i<noOfVac; i++)

{

for(int j=0; j<lenOfVacRNA[i];j++)

{

if(vacRNA[i].charAt(j)=='C')

vacC[i]++;

else if(vacRNA[i].charAt(j)=='G')

vacG[i]++;

else

continue;

}

}


 

//Compute k (max interaction) among all vaccines:



 

for(int i=0;i<noOfVac;i++)

{

k[i]=virC*vacG[i] + virG*vacC[i];

 

}


 

//Print index of max k value

 

for(int h=0;h<k.length;h++)

{


 

if(k[h]>k[maxIndex])

{

maxIndex=h;

}

}

 

 

System.out.println(maxIndex + 1);

 

 

}

}