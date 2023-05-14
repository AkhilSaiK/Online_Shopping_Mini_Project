#include <stdio.h>
#include <string.h>
int disopt();
int mainmenu();
int electronics();
int clothing();
int groceries();
int cart();
int quit();
int total();
//electronics
int mobiles();
int televisions();
int laptops();
int washingmachines();
int airconditioners();
//groceries
int foods();  int chips(); int biscuits(); int packedfoods();
int drinks(); int health_mixes(); int softdrinks();
int staples();
int oils();
int dairy();
//clothing
int mensclothing();int formalwear();int casualwear();int ethnicwear();int nightwear();
//nightwear
int nightsuit(); int shorts(); int tshirts(); int pyjamas();
int womensclothing();int sarees();int indianwear();int westernwear();int wnightwear();

char items[100][100]={"Iphone 13","Iphone 12","Samsung S21","Sony TV","Redmi TV","Samsung TV","MI Notebook","Acer Nitro 5",
"Lenovo Thinbook 15","Panasonic Washing Machine","Whirlpool Washing Machine","LG Washing Machine","Voltas AC","Hitachi AC","Samsung AC",
"Bingo Yumitos Chilli","Bingo Yumitos Salted","Lays India Magic Masala","Dark Fantasy Choco Fills","Sunfeast Dark Fantasy",
"Sunfeast Bounce","Kellogg's Original","Kellogg's Muesli","Kellogg's Chocos","Red Label Tea Pouch","Taj Mahal Tea Box","Lipton Honey",
"Coca Cola","Pepsi","7UP(2.5L)","AASHIRVAAD Organic Urad Dal","AASHIRVAAD Organic Toor Dal","My Kitchen Chana Dal","Fortune Rice Bran Oil",
"Gold Winner Refined Sunflower Oil","Fortune Refined Soyabean Oil","Amul Homogenised Toned Milk","Sofit Soya Milk Vanilla",
"BRITANNIA Cow Flavoured Chocolate Milk","Peter England shirts","Rare Rabbit shirts","Louis Philippe shirts","H&M","True Rug","Vastrr",
"Kurta Salwar","Sherwani","Pathani Suit","Dhoti Kurta","Jockey","Rare Rabbit","Puma","Harvard","Fila","U.S.Polo","Nike","Parda",
"Longies","Shaun","Cotton Saree","Silk Saree","Bandani","Salwar Kameez","Lehenga","Dhoti Kurta","Denim's","Top's and Tunic's",
"Dress","Night suits","Nighties","Shorts"};
int cost[100],c[100];
void main()
{
    printf("\t\t________________________________________");
    printf("\n\t\t\t\tBUY.COM");
    printf("\n\t\t\t_______________________");
    printf("\n \tshop anything you need from your home at your fingertips\n");

    mainmenu();



}
int mainmenu()
{
    int opt;
    printf("\n\t\t\t\tMain Menu\n");
    printf("\n\t\t\t\tCategories\n");
    printf("\n1) Electronics");
    printf("\n2) Clothing");
    printf("\n3) Groceries");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: electronics();
                break;
        case 2: clothing();
                break;
        case 3: groceries();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                mainmenu();
    }


}
int disopt()
{
    printf("\n enter the S.No of the items you would like to shop");
    printf("\n press 10 to view cart");
    printf("\n press 11 to go back to main menu");
    printf("\n press 0 to exit and print bill");
    printf("\n enter your choice:");
    return 0;
}
int electronics()
{
    int opt;
    printf("\n\t\t\t\tElectronics\n");
    printf("\n1) Mobiles");
    printf("\n2) Televisions");
    printf("\n3) Laptops");
    printf("\n4) Washing Machines");
    printf("\n5) Air Conditioners");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: mobiles();
                break;
        case 2: televisions();
                break;
        case 3: laptops();
                break;
        case 4: washingmachines();
                break;
        case 5: airconditioners();
                break;
        case 10: cart();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                electronics();
    }
    return 0;
}
int mobiles()
{
    int opt,a;
    printf("\n\t\t\t\tMobiles\n");
    printf("\n 1) iphone 13 256GB price:Rs89,900");
    printf("\n 2) iphone 12 Pro 256GB price:Rs79,900");
    printf("\n 3) Samsung S21 Ultra 5G 12GB RAM price:Rs64,900");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
            a=89900;
            cost[0]=89900;
            c[0]=1;
            total(a);
            mainmenu();
            break;
        case 2:
            a=79900;
            cost[1]=79900;
            c[1]=1;
            total(a);
            mainmenu();
            break;
        case 3:
            a=64900;
            cost[2]=64900;
            c[2]=1;
            total(a);
            mainmenu();
            break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                mobiles();
    }
}
int televisions()
{
    int opt,a;
    printf("\n\t\t\t\tTelevisions");
    printf("\n 1)Sony 4K UHD Google TV Price:Rs80,990");
    printf("\n 2)Redmi 4K UHD Android TV Price:Rs14,999");
    printf("\n 3)Samsung Crystal 4K Pro UHD TV Price:Rs37,990");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
            a=80900;
            cost[3]=80900;
            c[3]=1;
            total(a);
            mainmenu();
            break;
        case 2:
            a=14999;
            cost[4]=14999;
            c[4]=1;
            total(a);
            mainmenu();
            break;
        case 3:
            a=37990;
            cost[5]=37990;
            c[5]=1;
            total(a);
            mainmenu();
            break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                televisions();
    }
}
int laptops()
{
    int opt,a;
    printf("\n\t\t\t\tLaptops");
    printf("\n 1)MI Notebook Ultra 3K Resolution Price:Rs64,990");
    printf("\n 2)Acer Nitro 5 Gaming laptop Price:Rs69,990");
    printf("\n 3)Lenovo Thinbook 15 Price:Rs55,990");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
            a=64990;
            cost[6]=64990;
            c[6]=1;
            total(a);
            mainmenu();
            break;
        case 2:
            a=69990;
            cost[7]=69990;
            c[7]=1;
            total(a);
            mainmenu();
            break;
        case 3:
            a=55990;
            cost[8]=55990;
            c[8]=1;
            total(a);
            mainmenu();
            break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                televisions();
    }
}
int washingmachines()
{
    int opt,a;
    printf("\n\t\t\t\tWashing Machines");
    printf("\n 1)Panasonic 7 kg 5 Star Semi-Automatic Top Loading Washing Machine Price:Rs9,490");
    printf("\n 2)Whirlpool 7.5 Kg 5 Star Semi-Automatic Top Loading Washing Machine Price:Rs10,490");
    printf("\n 3)LG 6.5 Kg 5 Star Smart Inverter Fully-Automatic Top Loading Washing Machine  Price:Rs15,990");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
            a=9490;
            cost[9]=9490;
            c[9]=1;
            total(a);
            mainmenu();
            break;
        case 2:
            a=10490;
            cost[10]=10490;
            c[10]=1;
            total(a);
            mainmenu();
            break;
        case 3:
            a=15990;
            cost[11]=15990;
            c[11]=1;
            total(a);
            mainmenu();
            break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                washingmachines();
    }
}
int airconditioners()
{
    int opt,a;
    printf("\n\t\t\t\tAir Conditioners");
    printf("\n 1)Voltas 1.4 Ton 5 Star Inverter Adjustable Split AC Price:Rs37,487");
    printf("\n 2)Hitachi 1.5 Ton 5 Star Inverter Split AC  Price:Rs39,490");
    printf("\n 3)Samsung 1 Ton 4 Star Inverter Split AC  Price:Rs40,990");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
            a=37487;
            cost[12]=37487;
            c[12]=1;
            total(a);
            mainmenu();
            break;
        case 2:
            a=39490;
            cost[13]=39490;
            c[13]=1;
            total(a);
            mainmenu();
            break;
        case 3:
            a=40990;
            cost[14]=40990;
            c[14]=1;
            total(a);
            mainmenu();
            break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                airconditioners();
    }
}
int groceries()
{
    int opt;
    printf("\n\t\t\t\tGroceries\n");
    printf("\n1)foods");
    printf("\n2)drinks");
    printf("\n3)staples");
    printf("\n4)Oils");
    printf("\n5)dairy");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: foods();
                break;
        case 2: drinks();
                break;
        case 3: staples();
                break;
        case 4: oils();
                break;
        case 5: dairy();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                groceries();
    }
}
int foods()
{
    int opt;
    printf("\n\t\t\t\tFoods\n");
    printf("\n1)chips");
    printf("\n2)biscuits");
    printf("\n3)packed foods");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: chips();
                break;
        case 2: biscuits();
                break;
        case 3: packedfoods();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                foods();

    }
}
int chips()
{
    int opt,a;
    printf("\n\t\t\t\tChips\n");
    printf("\n1)Bingo Yumitos Chilli Sprinkled Chips(52grams):Rs10");
    printf("\n2)Bingo Yumitos salted Chips(52grams):Rs10");
    printf("\n3)Lays india's magic masala(52grams):Rs20");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=10;
                total(a);
                cost[15]=10;
                c[15]=1;
                mainmenu();
                break;
        case 2: a=10;
                total(a);
                cost[16]=10;
                c[16]=1;
                mainmenu();
                break;
        case 3: a=20;
                total(a);
                cost[17]=20;
                c[17]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                chips();
    }
}
int biscuits()
{
    int opt,a;
    printf("\n\t\t\t\tBiscuits\n");
    printf("\n1)Dark Fantasy Choco Fills Festive Pack (600 g, Pack of 2): Rs 210");
    printf("\n2)Sunfeast Dark Fantasy (300 g): Rs 90");
    printf("\n3)Sunfeast Bounce Tangy Orange Biscuit (78 g): Rs 9");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=210;
                total(a);
                cost[18]=210;
                c[18]=1;
                mainmenu();
                break;
        case 2: a=90;
                total(a);
                cost[19]=90;
                c[19]=1;
                mainmenu();
                break;
        case 3: a=9;
                total(a);
                cost[20]=9;
                c[20]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                biscuits();
    }
}
int packedfoods()
{
    int opt,a;
    printf("\n\t\t\t\tPacked Foods\n");
    printf("\n1)Kellogg's Original Corn Flakes (1.2 kg, Pouch): Rs 299");
    printf("\n2)Kellogg's Muesli (500 g, Pouch): Rs 288");
    printf("\n3)Kellogg's Chocos (250 g, Pouch): Rs 105");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=299;
                total(a);
                cost[21]=299;
                c[21]=1;
                mainmenu();
                break;
        case 2: a=288;
                total(a);
                cost[22]=288;
                c[22]=1;
                mainmenu();
                break;
        case 3: a=105;
                total(a);
                cost[23]=105;
                c[23]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                packedfoods();
    }
}
int drinks()
{
    int opt,a;
    printf("\n\t\t\t\tDrinks\n");
    printf("\n1)Health Mixes");
    printf("\n2)Soft Drinks");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: health_mixes();
                break;
        case 2: softdrinks();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                drinks();
    }
}
int health_mixes()
{
    int opt,a;
    printf("\n\t\t\t\tDrinks\n");
    printf("\n1)Red Label Tea Pouch (1kg): Rs 513");
    printf("\n2)Taj Mahal Tea Box (250g): Rs 200");
    printf("\n3)Lipton Honey Lemon Green Tea bags (25Bags): Rs 148");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=513;
                total(a);
                cost[24]=513;
                c[24]=1;
                mainmenu();
                break;
        case 2: a=200;
                total(a);
                cost[25]=200;
                c[25]=1;
                mainmenu();
                break;
        case 3: a=148;
                total(a);
                cost[26]=148;
                c[26]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                health_mixes();
    }


}
int softdrinks()
{
    int opt,a;
    printf("\n\t\t\t\tSoft Drinks\n");
    printf("\n1)Coca Cola PET bottle (2.25L): Rs 88");
    printf("\n2)Pepsi (750ml): Rs 38");
    printf("\n3)7UP (2.25L): Rs 84");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=88;
                total(a);
                cost[27]=88;
                c[27]=1;
                mainmenu();
                break;
        case 2: a=38;
                total(a);
                cost[28]=38;
                c[28]=1;
                mainmenu();
                break;
        case 3: a=84;
                total(a);
                cost[29]=84;
                c[29]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                softdrinks();
    }
}
int staples()
{
    int a,opt;
    printf("\n\t\t\t\tStaples\n");
    printf("\n1)AASHIRVAAD Organic Urad Dal (500g): Rs 108");
    printf("\n2)AASHIRVAAD Organic Toor Dal (500g): Rs 93");
    printf("\n3)My Kitchen Chana Dal (1KG): Rs 94");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=108;
                total(a);
                cost[30]=108;
                c[30]=1;
                mainmenu();
                break;
        case 2: a=93;
                total(a);
                cost[31]=93;
                c[31]=1;
                mainmenu();
                break;
        case 3: a=94;
                total(a);
                cost[32]=94;
                c[32]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                staples();
    }
}
int oils()
{
    int opt,a;
    printf("\n\t\t\t\tOils\n");
    printf("\n1)Fortune Rice Bran Oil Pouch (1L): Rs 174");
    printf("\n2)Gold Winner Refined Sunflower Oil (1L): Rs 149");
    printf("\n3)Fortune Refined Soyabean Oil (1L): Rs 155");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=174;
                total(a);
                cost[33]=174;
                c[33]=1;
                mainmenu();
                break;
        case 2: a=149;
                total(a);
                cost[34]=149;
                c[34]=1;
                mainmenu();
                break;
        case 3: a=155;
                total(a);
                cost[35]=155;
                c[35]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                oils();
    }
}
int dairy()
{
    int opt,a;
    printf("\n\t\t\t\tDairy and Eggs\n");
    printf("\n1)Amul Homogenised Toned Milk (1L): Rs 66");
    printf("\n2)Sofit Soya Milk Vanilla (1L): Rs 109");
    printf("\n3)BRITANNIA Cow Flavoured Chocolate Milk(180ml): Rs 23");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=66;
                total(a);
                cost[36]=66;
                c[36]=1;
                mainmenu();
                break;
        case 2: a=109;
                total(a);
                cost[37]=109;
                c[37]=1;
                mainmenu();
                break;
        case 3: a=23;
                total(a);
                cost[38]=23;
                c[38]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                dairy();
    }
}
int clothing()
{
    int opt;
    printf("\n\t\t\t\tClothing\n");
    printf("\n1)Men clothing");
    printf("\n2)Women clothing");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
         case 1: mensclothing();
                 break;
         case 2: womensclothing();
                 break;
         case 10: cart();
                  mainmenu();
                  break;
         case 11: mainmenu();
                  break;
         case 0:  quit();
                  break;
         default:printf("\n please choose from any of the given options");
                 clothing();
      }
}
int mensclothing()
{
     int opt;
     printf("\n\t\t\t\tMen clothing\n");
     printf("\n1)formal wear");
     printf("\n2)casual wear");
     printf("\n3)ethnic wear");
     printf("\n4)night wear");
     disopt();
     scanf("%d",&opt);
     switch(opt)
    {
        case 1: formalwear();
                break;
        case 2: casualwear();
                break;
        case 3: ethnicwear();
                break;
        case 4: nightwear();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                mensclothing();
     }
}
int formalwear()
{
    int opt,a;
    printf("\n\t\t\t\tFormal Wear\n");
    printf("\n1)Peter England shirts(1number):Rs1000");
    printf("\n2)Rare Rabbit shirts(Pack of 2):Rs2500");
    printf("\n3)Louis Philippe shirts(1number):Rs1500");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=1000;
                total(a);
                cost[39]=1000;
                c[39]=1;
                mainmenu();
                break;
        case 2: a=2500;
                total(a);
                cost[40]=2500;
                c[40]=1;
                mainmenu();
                break;
        case 3: a=1500;
                total(a);
                cost[41]=1500;
                c[41]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                formalwear();
    }
}
int casualwear()
{
    int opt,a;
    printf("\n\t\t\t\tCasual Wear\n");
    printf("\n1)H&M (1number): Rs 1000");
    printf("\n2)True Rug(Pack of two): Rs 2000");
    printf("\n3)Vastrr (1number): Rs 1300");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {

        case 1: a=1000;
                total(a);
                cost[42]=1000;
                c[42]=1;
                mainmenu();
                break;
        case 2: a=2000;
                total(a);
                cost[43]=2000;
                c[43]=1;
                mainmenu();
                break;
        case 3: a=1300;
                total(a);
                cost[44]=1300;
                c[44]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                casualwear();
    }
}
int ethnicwear()
{
    int opt,a;
    printf("\n\t\t\t\tEthnic Wear\n");
    printf("\n1)Kurta Salwar(1 pair): Rs 1200");
    printf("\n2)Sherwani (1 pair): Rs 1300");
    printf("\n3)Pathani Suit (1 pair): Rs 1500");
    printf("\n4)Dhoti Kurta (1 pair): Rs 1200");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=1200;
                total(a);
                cost[45]=1200;
                c[45]=1;
                mainmenu();
                break;
        case 2: a=1300;
                total(a);
                cost[46]=1300;
                c[46]=1;
                mainmenu();
                break;
        case 3: a=1500;
                total(a);
                cost[47]=1500;
                c[47]=1;
                mainmenu();
                break;
        case 4: a=1200;
                total(a);
                cost[48]=1200;
                c[48]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                ethnicwear();
    }
}
int nightwear()
{
    int opt,a;
    printf("\n\t\t\t\tNight Wear\n");
    printf("\n1)Night suit");
    printf("\n2)Shorts");
    printf("\n3)T-shirts");
    printf("\n4)Pyjama's");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: nightsuit();
                break;
        case 2: shorts();
                break;
        case 3: tshirts();
                break;
        case 4: pyjamas();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                nightwear();
    }
}
int nightsuit()
{
    int opt,a;
    printf("\n\t\t\t\tNight Suit\n");
    printf("\n1)Jockey(1pair): Rs 999");
    printf("\n2)Rare Rabbit (1pair): Rs 1200");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=999;
                total(a);
                cost[49]=999;
                c[49]=1;
                mainmenu();
                break;
        case 2: a=1200;
                total(a);
                cost[50]=1200;
                c[50]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                nightsuit();
    }

}
int shorts()
{
    int opt,a;
    printf("\n\t\t\t\tShorts\n");
    printf("\n1)Puma (1number): Rs 699");
    printf("\n2)Harvard (1number): Rs 599");
    printf("\n3)Fila (Pck of two): Rs 1000");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=699;
                total(a);
                cost[51]=699;
                c[51]=1;
                mainmenu();
                break;
        case 2: a=599;
                total(a);
                cost[52]=599;
                c[52]=1;
                mainmenu();
                break;
        case 3: a=1000;
                total(a);
                cost[53]=1000;
                c[53]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                shorts();
    }
}
int tshirts()
{
    int a,opt;
    printf("\n\t\t\t\tT-Shirts\n");
    printf("\n1)U.S.Polo (1number): Rs 849");
    printf("\n2) Nike (1number): Rs 899");
    printf("\n3)Parda (Pack of Two): Rs 999");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=849;
                total(a);
                cost[54]=849;
                c[54]=1;
                mainmenu();
                break;
        case 2: a=899;
                total(a);
                cost[55]=899;
                c[55]=1;
                mainmenu();
                break;
        case 3: a=999;
                total(a);
                cost[56]=999;
                c[56]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                tshirts();
    }
}
int pyjamas()
{
    int a,opt;
    printf("\n\t\t\t\tPyjama's\n");
    printf("\n1)Longies (1number): Rs 550");
    printf("\n2)Shaun (1number): Rs 599");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=550;
                total(a);
                cost[57]=550;
                c[57]=1;
                mainmenu();
                break;
        case 2: a=599;
                total(a);
                cost[58]=599;
                c[58]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                pyjamas();
    }
}
int womensclothing()
{
     int opt;
     printf("\n\t\t\t\tWomen clothing\n");
     printf("\n1)Sarees");
     printf("\n2)Indian wear");
     printf("\n3)Western wear");
     printf("\n4)night wear");
     disopt();
     scanf("%d",&opt);
     switch(opt)
    {
        case 1: sarees();
                break;
        case 2: indianwear();
                break;
        case 3: westernwear();
                break;
        case 4: wnightwear();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                womensclothing();
     }
}
int sarees()
{
    int opt,a;
    printf("\n\t\t\t\tSarees\n");
    printf("\n1)Cotton Saree:Rs1000");
    printf("\n2)Silk Saree:Rs2500");
    printf("\n3)Bandani:Rs1500");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=1000;
                total(a);
                cost[59]=1000;
                c[59]=1;
                mainmenu();
                break;
        case 2: a=2500;
                total(a);
                cost[60]=2500;
                c[60]=1;
                mainmenu();
                break;
        case 3: a=1500;
                total(a);
                cost[61]=1500;
                c[61]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                sarees();
    }
}
int indianwear()
{
    int opt,a;
    printf("\n\t\t\t\tIndian Wear\n");
    printf("\n1)Salwar Kameez(1set): Rs 1000");
    printf("\n2)Lehenga(1set): Rs 2000");
    printf("\n3)Dhoti Kurta (1set): Rs 1300");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {

        case 1: a=1000;
                total(a);
                cost[62]=1000;
                c[62]=1;
                mainmenu();
                break;
        case 2: a=2000;
                total(a);
                cost[63]=2000;
                c[63]=1;
                mainmenu();
                break;
        case 3: a=1300;
                total(a);
                cost[64]=1300;
                c[64]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                indianwear();
    }
}
int westernwear()
{
    int opt,a;
    printf("\n\t\t\t\tWestern Wear\n");
    printf("\n1)Denim's : Rs 1800");
    printf("\n2)Top's and Tunic's: Rs 1300");
    printf("\n3)Dress : Rs 1500");

    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=1800;
                total(a);
                cost[65]=1800;
                c[65]=1;
                mainmenu();
                break;
        case 2: a=1300;
                total(a);
                cost[66]=1300;
                c[66]=1;
                mainmenu();
                break;
        case 3: a=1500;
                total(a);
                cost[67]=1500;
                c[67]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                westernwear();
    }
}
int wnightwear()
{
    int opt,a;
    printf("\n\t\t\t\tNight Wear\n");
    printf("\n1)Night suits(1pair):Rs999");
    printf("\n2)Nighties:Rs550");
    printf("\n3)Shorts:Rs600");
    disopt();
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: a=999;
                total(a);
                cost[68]=999;
                c[68]=1;
                mainmenu();
                break;
        case 2: a=550;
                total(a);
                cost[69]=550;
                c[69]=1;
                mainmenu();
                break;
        case 3: a=600;
                total(a);
                cost[70]=600;
                c[70]=1;
                mainmenu();
                break;
        case 10: cart();
                 mainmenu();
                 break;
        case 11: mainmenu();
                 break;
        case 0: quit();
                break;
        default:printf("\n please choose from any of the given options");
                wnightwear();
    }
}
int total(int x)
{
    static int sum=0;
    sum=sum+x;
    return sum;
}
int cart()
{
    printf("\n_________________________________________________________________________");
    printf("\n\t\t\t\tCART\n");
    printf("\t\tItems\t\t\t\tCost\n");
    for(int i=0;i<100;i++)
    {
        if(c[i]==1)
        {
            printf("\t\t%s",items[i]);
            for(int j=1;j<=30-strlen(items[i]);j++){
                printf(" ");
            }
            printf("Rs%d\n",cost[i]);
        }
    }
    int c=0;
    total(c);
    printf("\n \t\tTotal price of items in cart is:Rs%d ",total(c));
    printf("\n_________________________________________________________________________");
}
int quit()
{
    int e=0;
    total(e);
     printf("\n_________________________________________________________________________");
     printf("\n\t\t\t\tBILL\n");
    printf("\n\t \tYour total amount to be paid is RS:%d",total(e));
    printf("\n\t \tTHANK YOU FOR SHOPPING ON BUY.com");
    printf("\n\t \tPLEASE VISIT AGAIN");
     printf("\n_________________________________________________________________________");

}
