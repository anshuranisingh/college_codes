#include<iostream>

using namespace std;

int main()
{
    int n,r,q,x;
    string s="";
    cout<<"Enter any number\n";
    cin>>n;
    if(n>999)
    {
        s+="M";
        n=n-1000;
    }

    //Checking for 100s position
    q=n/100;
    if(q<9)
    {
        if(q==4)
            s+="CD";
        else
        {
            if(q>=5)
            {
            s+="D";
            x=q-5;
            for(int i=1;i<=x;i++)
                s+="C";
            }
            else
            {
              for(int i=1;i<=q;i++)
                s+="C";
            }
        }
    }
    else
    {
        s+="CM";
    }

 // checking for 10s position
    r=n%100;
    q=r/10;
    if(q<9)
    {
        if(q==4)
            s+="XL";
        else
        {
            if(q>=5)
            {
            s+="L";
            x=q-5;
            for(int i=1;i<=x;i++)
                s+="X";
            }
            else
            {
              for(int i=1;i<=q;i++)
                s+="X";
            }
        }
    }
    else
    {
        s+="XC";
    }

//Checking for units place

    r=r%10;
    if(r<9)
    {
        if(r==4)
            s+="IV";
        else
        {
            if(r>=5)
            {
            s+="V";
            x=r-5;
            for(int i=1;i<=x;i++)
                s+="I";
            }
            else
            {
              for(int i=1;i<=r;i++)
                s+="I";
            }
        }
    }
    else
    {
        s+="IX";
    }


    cout<<endl<<s;
    return 0;
}
