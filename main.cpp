#include<iostream>
#include<ctime>

using namespace std;

int main()
{
    char start;
    float shop(void);
    char choice;

    startL:
       cout<<"please press H to start shopping for home appliances"<<endl;
       start:
       cin>>start;

       if(start == 'h' || start == 'H')
       {
        float total = shop();
        time_t t= time(NULL);
        tm* tptr = localtime(&t);

        cout<<"Bill date : ";
        cout<<tptr->tm_mday<<"/";
        cout<<1+ tptr->tm_mon<<"/";
        cout<<1900 + tptr->tm_year<<endl;
        cout<<"Bill time : "<<(tptr->tm_hour)<<":"<<(tptr->tm_min)<<":"<<(tptr->tm_sec)<<endl;
        cout<<"Total Bill Amount : "<<total<<endl;

        if(total>50000 && total<100000)
        {
            total = total-(0.05*total);
            cout<<"Total discount : 5%"<<endl;
        }

        else if(total>100000 && total<125000)
        {
            total = total-(0.1*total);
            cout<<"Total discount : 10%"<<endl;
        }

        else if(total>125000 && total<150000)
        {
            total = total-(0.25*total);
            cout<<"Total discount : 25%"<<endl;
        }

        else if(total>150000)
        {
            total = total-(0.5*total);
            cout<<"Total discount : 50%"<<endl;
        }

        cout<<"Total bill amount is : "<<total<<endl;
        Again:
            cout<<"Do you want shopping again y or n"<<endl;
            cin>>choice;
            if(choice == 'y' || choice == 'Y')
            {
                goto startL;
            }

            else if(choice == 'n' || choice == 'N')
            {
                cout<<"Thanks for shopping"<<endl;
            }
            else
            {
                cout<<"You have entered the wrong option, please press H"<<endl;
                goto Again;
            }
       }

       else
       {
        cout<<"You have entered wrong option, please press H to start again"<<endl;
        goto start;
       }

}

       float shop()
       {
        shop:
            char choice;
            char product;
            int quantity;
            float bill=0;
            itemLevel:
                 cout<<"**********WELCOME**********"<<endl;
                 cout<<"___Please follow the instructions___"<<endl;
                 cout<<"| 1) Please enter r to order Refrigerator"<<endl;
                 cout<<"| 2) Please enter w to order Washing machine"<<endl;
                 cout<<"| 3) Please enter t to order Television"<<endl;
                 cout<<"| 4) Please enter m to order Microwave"<<endl;
                 cout<<"| 5) Please enter a to order Air conditioner"<<endl;

                 cin>>choice;

                 if(choice == 'r' || choice == 'R' || choice == 'w' || choice == 'W' || choice == 't' || choice == 'T' || choice == 'm' || choice == 'M' || choice == 'a' || choice == 'A')
                 {
                    if(choice == 'r' || choice == 'R')
                    {
                        Refrigerator:
                        cout<<"____Refrigerator Details____"<<endl;

                        cout<<"| 1) Whirlpool  => Price : 40000 |"<<endl;
                        cout<<"| 2) LG         => Price : 35000 |"<<endl;
                        cout<<"| 3) Samsung    => Price : 30000 |"<<endl;
                        cout<<"| 4) Godrej     => Price : 30000 |"<<endl;
                        cout<<"| 5) Bosch      => Price : 25000 |"<<endl;

                        cout<<"Please enter your choice"<<endl;
                        cin>>product;

                        if(product == '1')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*40000;
                        }

                        else if(product == '2')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*35000;
                        }

                        else if(product == '3')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*30000;
                        }

                        else if(product == '4')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*30000;
                        }

                        else if(product == '5')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*25000;
                        }

                        else
                        {
                            cout<<"You have entered the wrong option, please try again"<<endl;
                            goto Refrigerator;
                        }
                    }

                    if(choice == 'w' || choice == 'W')
                    {
                        Washing_machine:
                        cout<<"____Washing Machine Details____"<<endl;

                        cout<<"| 1) IFB        => Price : 40000 |"<<endl;
                        cout<<"| 2) LG         => Price : 35000 |"<<endl;
                        cout<<"| 3) Lloyd      => Price : 30000 |"<<endl;
                        cout<<"| 4) Maytag     => Price : 30000 |"<<endl;
                        cout<<"| 5) Bosch      => Price : 25000 |"<<endl;

                        cout<<"Please enter your choice"<<endl;
                        cin>>product;

                        if(product == '1')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*40000;
                        }

                        else if(product == '2')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*35000;
                        }

                        else if(product == '3')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*30000;
                        }

                        else if(product == '4')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*30000;
                        }

                        else if(product == '5')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*25000;
                        }

                        else
                        {
                            cout<<"You have entered the wrong option, please try again"<<endl;
                            goto Washing_machine;
                        }
                 }

                  if(choice == 't' || choice == 'T')
                    {
                        Television:
                        cout<<"____Television Details____"<<endl;

                        cout<<"| 1) Panasonic  => Price : 40000 |"<<endl;
                        cout<<"| 2) Sony       => Price : 35000 |"<<endl;
                        cout<<"| 3) Samsung    => Price : 30000 |"<<endl;
                        cout<<"| 4) VU         => Price : 30000 |"<<endl;
                        cout<<"| 5) Toshibha   => Price : 25000 |"<<endl;

                        cout<<"Please enter your choice"<<endl;
                        cin>>product;

                        if(product == '1')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*40000;
                        }

                        else if(product == '2')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*35000;
                        }

                        else if(product == '3')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*30000;
                        }

                        else if(product == '4')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*30000;
                        }

                        else if(product == '5')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*25000;
                        }

                        else
                        {
                            cout<<"You have entered the wrong option, please try again"<<endl;
                            goto Television;
                        }
                 }

                  if(choice == 'm' || choice == 'M')
                    {
                        Microwave:
                        cout<<"____Microwave Details____"<<endl;

                        cout<<"| 1) IFB        => Price : 40000 |"<<endl;
                        cout<<"| 2) LG         => Price : 35000 |"<<endl;
                        cout<<"| 3) Samsung    => Price : 30000 |"<<endl;
                        cout<<"| 4) Maytag     => Price : 30000 |"<<endl;
                        cout<<"| 5) Bosch      => Price : 25000 |"<<endl;

                        cout<<"Please enter your choice"<<endl;
                        cin>>product;

                        if(product == '1')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*40000;
                        }

                        else if(product == '2')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*35000;
                        }

                        else if(product == '3')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*30000;
                        }

                        else if(product == '4')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*30000;
                        }

                        else if(product == '5')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*25000;
                        }

                        else
                        {
                            cout<<"You have entered the wrong option, please try again"<<endl;
                            goto Microwave;
                        }
                 }

                  if(choice == 'a' || choice == 'A')
                    {
                        Air_conditioner:
                        cout<<"____Air Conditioner Details ____"<<endl;

                        cout<<"| 1) Voltas     => Price : 40000 |"<<endl;
                        cout<<"| 2) LG         => Price : 35000 |"<<endl;
                        cout<<"| 3) Panasonic  => Price : 30000 |"<<endl;
                        cout<<"| 4) Daikin     => Price : 30000 |"<<endl;
                        cout<<"| 5) Hitachi    => Price : 25000 |"<<endl;

                        cout<<"Please enter your choice"<<endl;
                        cin>>product;

                        if(product == '1')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*40000;
                        }

                        else if(product == '2')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*35000;
                        }

                        else if(product == '3')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*30000;
                        }

                        else if(product == '4')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*30000;
                        }

                        else if(product == '5')
                        {
                            cout<<"Please enter the quantity of the product"<<endl;
                            cin>>quantity;
                            bill = bill+quantity*25000;
                        }

                        else
                        {
                            cout<<"You have entered the wrong option, please try again"<<endl;
                            goto Air_conditioner;
                        }
                    }
            }
       else 
       {
        cout<<"you have entered the wrong option, please try again"<<endl;
        goto shop;
       }
       return bill;
       }