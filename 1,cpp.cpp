// You are using GCC
#include<iostream>
using namespace std;
int mt=0,mtr;
class stu{
    int rn;
    int m1,m2,m3;
    public:
        void input(int n,int *s)
        {
            for(int i=0;i<n;i++)
                cin>>(s+i).rn>>(s+i).m1>>(s+i).m2>>(s+i).m3;
                
        }
        void max(int n,int *s)
            {
            	int m[3];
            	m[0]=m1;
            	m[1]=m2;
            	m[2]=m3;
                int mx=0,mr,j=0,i;
                for(j=0;j<3;j++)
                {
                    for(i=0;i<n;i++)
                    {
                        if(s[i].m[j]>mx)
                        {
                            mx=s[i].m[j];
                            mr=s[i].rn;
                        }
                        
                    }
                    cout<<mr<<sep=" "<<mx<<endl;
                }
            }
            void tot(int n,int *s){
                for(i=0;i<n;i++)
                {
                    int m;
                    m=s[i].m[0]+s[i].m[1]+s[i].m[2]
                    if(m>mt)
                    {
                        mt=m;
                        mtr=s[i].rn;
                    }
                    cout<<m<<endl;
                    
                }
                
            }
            };
int main()
{
    int n;
    cin>>n;
    stu s[n];
    input(n,&s[0]);
    tot(n,&s);
    max(n,&s);
    cout<<mtr<<sep=" "<<mt;
}
            
