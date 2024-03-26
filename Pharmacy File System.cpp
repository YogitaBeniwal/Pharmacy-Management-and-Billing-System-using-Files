#ifndef COLORS
#define COLORS

/* FOREGROUND */
#define RST "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"
#define FRED(x) KRED x RST
#define FGRN(x) KGRN x RST
#define FYEL(x) KYEL x RST
#define FBLU(x) KBLU x RST
#define FMAG(x) KMAG x RST
#define FCYN(x) KCYN x RST
#define FWHT(x) KWHT x RST
#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST
#endif /* COLORS */ 

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class pharmacy
{
    private:
    char line1[20],line2[20],line3[20],line4[20],line5[20],line6[20],line7[20],line8[20];
    float cost,cost1,capcost=0,tabcost=0,liquidcost=0,ayucost=0;
    
    public:
    void getc();
    void gett();
    void getl();
    void geta();
    
    void sellc();
    void sellt();
    void selll();
    void sella();
    
    void dispt();
    void dispc();
    void displ();
    void dispa();
    
    void dispt2();
    void dispc2();
    void displ2();
    void dispa2();
    
    void calc();
    
    inline char* get_c()
    {
        return line1;
    }
    inline char* get_t()
    {
        return line2;
    }
    inline char* get_l()
    {
        return line3;
    }
    inline char* get_a()
    {
        return line4;
    }
};

void pharmacy::getc()
{
    cout<<"\nEnter name of capsule\n";
    cin>>line1;
    cout<<"\nEnter cost\n";
    cin>> cost;
}

void pharmacy::gett()
{
    cout<<"\nEnter name of tablet : \n";
    cin>>line2;
    cout<<"\nEnter cost : \n";
    cin>>cost;
}

void pharmacy::getl()
{
    cout<<"\nEnter name of liquid : \n";
    cin>>line3;
    cout<<"\n Enter cost : \n";
    cin>>cost;
}

void pharmacy::geta()
{
    cout<<"\nEnter name of ayurvedic medicine : \n";
    cin>>line4;
    cout<<"\n Enter cost : \n";
    cin>>cost;
}

void pharmacy::sellc()
{
    cout<<"\nEnter name of Capsule customer wants : \n ";
    cin>>line5;
    cout<<"\n Enter cost : \n";
    cin>>cost1;
    capcost=capcost+cost1;
}

void pharmacy::sellt()
{
    cout<<"\nEnter name of Tablet customer wants : \n ";
    cin>>line6;
    cout<<"\n Enter cost : \n";
    cin>>cost1;
    tabcost=tabcost+cost1;
}

void pharmacy::selll()
{
    cout<<"\nEnter name of Liquid customer wants : \n ";
    cin>>line7;
    cout<<"\n Enter cost : \n";
    cin>>cost1;
    liquidcost=liquidcost+cost1;
}

void pharmacy::sella()
{
    cout<<"\nEnter name of Aryuveda medicine customer wants : \n ";
    cin>>line8;
    cout<<"\n Enter cost : \n";
    cin>>cost1;
    ayucost=ayucost+cost1;
}

void pharmacy::dispc()
{
    cout<<"\n"<<line1<<"\t\tCost:\t"<<cost;
}

void pharmacy::dispt()
{
    cout<<"\n"<<line2<<"\t\tcost:\t"<<cost;
}

void pharmacy::displ()
{
    cout<<"\n"<<line3<<"\t\tcost:\t"<<cost;
}

void pharmacy::dispa()
{
    cout<<"\n"<<line4<<"\t\tcost:\t"<<cost;
}

void pharmacy::dispc2()
{
    cout<<"\n"<<line5<<"\t\tCost:\t"<<cost1;
}

void pharmacy::dispt2()
{
    cout<<"\n"<<line6<<"\t\tcost:\t"<<cost1;
}

void pharmacy::displ2()
{
    cout<<"\n"<<line7<<"\t\tcost:\t"<<cost1;
}

void pharmacy::dispa2()
{
    cout<<"\n"<<line8<<"\t\tcost:\t"<<cost1;
}

void pharmacy::calc()
{
    float total;
    total=capcost+tabcost+liquidcost+ayucost;
	cout<<total;
}

int main()
{
    int s2;
    char ch2;
    int count1=0,count2=0,count3=0,count4=0;
    pharmacy p;
    cout<<"\n--------------------------------------------------------------------------------";
    cout<<FYEL("\n PHARMACY STORE");
    cout<<"\n--------------------------------------------------------------------------------";
    do
    {
        cout<<"\n1.Get data";
        cout<<"\n2.Display data";
        cout<<"\n3.Search medicines";
        cout<<"\n4.Customer sell";
        cout<<"\n\nEnter your choice :\t";
        cin>>s2;
        switch(s2)
        {
            case 1:
            int s1, repeat;
            char ch1;
            do
            {
                cout<<"\nEnter Type of medicine : ";
                cout<<"\n1.Capsule\n2.Tablets\n3.Liquids\n4.ayurveda";
                cout<<"\nEnter your choice\t:\t";
                cin>>s1;
                switch(s1)
                {
                    case 1:
                    {
                        ofstream fout("capsule.txt",ios::out);
                        do
                        {
                            p.getc();
                            fout.write((char*) &p,sizeof(p));
                            count1++;
                            cout<<"\n Press 1 to continue ";
                            cin>>repeat;
                        }while(repeat==1);
                        fout.close();
                    }
                    break;
           
                    case 2: 
                    {
                        ofstream fout("tablets.txt",ios::out);
                        do
                        {
                            p.gett();
                            fout.write((char*) &p,sizeof(p));
                            count2++;
                            cout<<"\n Press 1 to continue ";
                            cin>>repeat;
                        }while(repeat==1);
                        fout.close();
                    }
                    break;
            
                    case 3:
                    {
                           ofstream fout("liquids.txt",ios::out);
                           do
                           {
                                p.getl();
                                fout.write((char*) &p,sizeof(p));
                                count3++;
                                cout<<"\n Press 1 to continue ";
                                cin>>repeat;
                            }while(repeat==1);
                            fout.close();
                    }
                    break;
            
                    case 4:
                    {
                            ofstream fout("ayurveda.txt",ios::out);
                            do
                            {
                                p.geta();
                                fout.write((char*) &p,sizeof(p));
                                count4++;
                                cout<<"\n Press 1 to continue ";
                                cin>>repeat;
                            }while(repeat==1);
                            fout.close();
                    }
                    break;
                }
            cout<<"\nDo you want to add more medicines?(y/n)";
            cin>>ch1;
            }while(ch1=='y'||ch1=='Y');
            break;
        
            case 2:
            {
                int s3;
                char ch;
                do
                {
                    cout<<FGRN("\nDisplay:List of medicine");
                    cout<<"\n1.Capsule\n2.Tablets\n3.Liquids\n4.ayurveda\n";
                    cout<<"\nEnter list you want to display\t:\t";
                    cin>>s3;
                    switch(s3)
                    {
                        case 1: 
                        {
                            cout<<FRED("\nMedicine : Capsule");
                            ifstream fin("capsule.txt",ios::in);
                            for(int i=0; i<count1; i++)
                            {
                                fin.read((char*)&p,sizeof(p));
                                p.dispc();
                            }
                            fin.close();
                        }
                        break;
                    
                        case 2: 
                        {
                            cout<<FRED("\nMedicine : Tablets");
                            ifstream fin("tablets.txt",ios::in);
                            for(int i=0; i<count2; i++)
                            {
                                fin.read((char*)&p,sizeof(p));
                                p.dispt();
                            }
                            fin.close();
                        }
                        break;
                        
                        case 3: 
                        {
                            cout<<FRED("\nMedicine : Liquids");
                            ifstream fin("liquids.txt",ios::in);
                            for(int i=0;i<count3;i++)
                            {
                                fin.read((char*)&p,sizeof(p));
                                p.displ();
                            }
                            fin.close();
                        }
                        break;
                        
                        case 4: 
                        {
                            cout<<FRED("\nMedicine : ayurveda");
                            ifstream fin("ayurveda.txt",ios::in);
                            for(int i=0;i<count4;i++)
                            {
                                fin.read((char*)&p,sizeof(p));
                                p.dispa();
                            }
                            fin.close();
                        }
                        break;
                    }
                cout<<"\nDo you want to display more lists?(y/n)";
                cin>>ch;
                }while(ch=='y'||ch=='Y');
                break;
            }
            
            case 3:
            {
                int s4,flag;
                char h;
                do
                {
                    cout<<FGRN("\nSearch:List of medicine");
                    cout<<"\n1.Capsule\n2.Tablets\n3.Liquids\n";
                    cout<<"\nEnter type of medicine you want to search\t:\t";
                    cin>>s4;
                    switch(s4)
                    {
                        case 1:
                        {
                            flag=0;
                            char s[20];
                            cout<<FRED("\nMedicine : Capsule");
                            ifstream fin("capsule.txt",ios::in|ios::binary);
                            cout<<"\n Enter name of medicine to be searched :\t";
                            cin>>s;
                            for(int i=0;i<count1;i++)
                            {
                                fin.read((char*)&p,sizeof(p));
                                if(strcmp(s,p.get_c())==0)
                                {
                                    flag=1;
                                    break;
                                }
                            }
                            if(flag==1)
                            {
                               p.dispc();
                            }
                            else
                            {
                                cout<<"\n Record not found";
                            }
                            fin.close();
                        }
                        break;
                        
                        case 2:
                        {
                            flag=0;
                            char n[20];
                            cout<<FRED("\nMedicine : Tablets");
                            ifstream fin("tablets.txt",ios::in|ios ::binary);
                            cout<<"\n Enter name of medicine to be searched :\t";
                            cin>>n;
                            for(int i=0;i<count2;i++)
                            {
                                fin.read((char*)&p,sizeof(p));
                                if(strcmp(n,p.get_t())==0)
                                {
                                    flag=1;
                                    break;
                                }
                            }
                            if(flag==1)
                            {
                                p.dispt();
                            }
                            else
                            {
                                cout<<"\n Record not found";
                            }
                            fin.close();
                        }
                        break;
                            
                        case 3:
                        {
                            flag=0;
                            char m[20];
                            cout<<FRED("\nMedicine : Liquids");
                            ifstream fin("liquids.txt",ios::in|ios ::binary);
                            cout<<"\n Enter name of medicine to be searched :\t";
                            cin>>m;
                            for(int i=0; i<count3; i++)
                            {
                                fin.read((char*)&p,sizeof(p));
                                if(strcmp(m,p.get_l())==0)
                                {
                                    flag=1;
                                    break;
                                }
                            }
                            if(flag==1)
                            {
                                p.displ();
                            }
                            else
                            {
                                cout<<"\n Record not found";
                            }
                            fin.close();
                        }
                        break;
          
            }   
            cout<<"\nDo you want to search in more lists?(y/n)";
            cin>>h;
            }while(h=='y'||h=='Y');
            break;
            }
            
            case 4:
                int s5;
                char h;
                do
                {
                    cout<<FGRN("\nSell:List of medicine");
                    cout<<"\n1.Capsule\n2.Tablets\n3.Liquids\n4.Ayurveda Medicine\n5.Total cost";
                    cout<<"\nEnter type of medicine Customer wants to buy\t:\t";
                    cin>>s5;
                    switch(s5)
                    {
                    case 1:
                    {
                        ofstream fout("capsule2.txt",ios::out);
                        do
                        {
                            p.sellc();
                            fout.write((char*) &p,sizeof(p));
                            count1++;
                            cout<<"\n Press 1 to continue ";
                            cin>>repeat;
                        }while(repeat==1);
                        fout.close();
                    }
                    break;
           
                    case 2: 
                    {
                         ofstream fout("tablets2.txt",ios::out);
                         do
                        {
                            p.sellt();
                            fout.write((char*) &p,sizeof(p));
                            count2++;
                            cout<<"\n Press 1 to continue ";
                            cin>>repeat;
                        }while(repeat==1);
                        fout.close();
                    }
                    break;
            
                    case 3:
                    {
                           ofstream fout("liquids2.txt",ios::out);
                           do
                           {
                                p.selll();
                                fout.write((char*) &p,sizeof(p));
                                count3++;
                                cout<<"\n Press 1 to continue ";
                                cin>>repeat;
                            }while(repeat==1);
                            fout.close();
                    }
                    break;
            
                    case 4:
                    {
                            ofstream fout("ayurveda2.txt",ios::out);
                            do
                            {
                                p.sella();
                                fout.write((char*) &p,sizeof(p));
                                count4++;
                                cout<<"\n Press 1 to continue ";
                                cin>>repeat;
                            }while(repeat==1);
                            fout.close();
                    }
                    break;
                    
                    case 5:
                    {
                        cout<<"\n\tThe total bill is :";
                        {   
                            p.calc();
                        }
                    }
                }
                cout<<"\nDo customer wants to buy in more lists?(y/n)";
                cin>>h;
                }while(h=='y'||h=='Y');
                break;
        }
    cout<<"\nDo you want to continue?(y/n)";
    cin>>ch2;
    } while(ch2=='y'||ch2=='Y');
}
