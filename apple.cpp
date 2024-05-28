#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Iphone
{
public:
    string model;
    string Gigabyte;
    int price;
};

int main()
{
    string Userchoice;
    string email;
    string color;
    string Storage;
    string size;
    string applecare;

    Iphone info1;
    info1.model = "Iphone15proMax";
    info1.Gigabyte = "256, 512, 1TB";
    info1.price = 1199;

    Iphone info2;
    info1.model = "Iphone15pro";
    info2.Gigabyte = "128,256,512,1TB";
    info2.price = 999;

    Iphone info3;
    info3.model = "Iphone15";
    info3.Gigabyte = "128,256,512";
    info3.price = 799;

    Iphone info4;
    info4.model = "Iphone15Plus";
    info4.Gigabyte = "128,256,512";
    info4.price = 899;

    Iphone info5;
    info5.model = "Iphone14";
    info5.Gigabyte = "128,256,512";
    info5.price = 699;

    Iphone info6;
    info6.model = "Iphone14Plus";
    info6.Gigabyte = "128,256,512";
    info6.price = 799;

    Iphone info7;
    info7.model = "Iphone13";
    info7.Gigabyte = "128,256,512";
    info7.price = 599;

    Iphone info8;
    info8.model = "Iphone12";
    info8.Gigabyte = "64,128,256";
    info8.price = 310;

    Iphone info9;
    info9.model = "Iphone11";
    info9.Gigabyte = "64,128,256";
    info9.price = 249;

    cout << "--------------------------------------------------------------------------------------------" << endl;
    cout << "Welcome to the Apple Web store We have the " << info1.model << " in " << info1.Gigabyte << "GB "
         << "starting at " << info1.price << " Dollars." << endl;
    cout << "We also have this size with a 6.1 inch screen the " << info2.model << " in " << info2.Gigabyte << "GB "
         << "starting at " << info2.price << " Dollars." << endl;
    cout << "Need a budget flagship we have the " << info3.model << " in " << info3.Gigabyte << "GB "
         << "starting at " << info3.price << " Dollars." << endl;
    cout << "Want a bigger budget flagship we have " << info4.model << " in " << info4.Gigabyte << "GB "
         << "starting at " << info4.price << " Dollars." << endl;
    cout << "Want the same phone as the 13 but in yellow We have the " << info5.model << " in " << info5.Gigabyte << "GB "
         << "starting at " << info5.price << " Dollars." << endl;
    cout << "Want A bigger size like the " << info6.model << " in " << info6.Gigabyte << "GB "
         << "starting at " << info6.price << " Dollars." << endl;
    cout << "Best budget friendly smartphone the " << info7.model << " in " << info7.Gigabyte << "GB "
         << "starting at " << info7.price << " Dollars." << endl;
    cout << "Extremely budget friendly but not sealed the " << info8.model << " in " << info8.Gigabyte << "GB "
         << "starting at " << info8.price << " Dollars." << endl;
    cout << "budget friendly but refurbished by apple the " << info9.model << " in " << info9.Gigabyte << "GB "
         << "starting at " << info9.price << " Dollars." << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;

    cout << "Choose an iphone:" << endl;
    cin >> Userchoice;

    if (Userchoice == "iphone15")
    {
        cout << "you choose the iphone15" << endl;
        cout << "Do you want to know more about the iphone15:" << endl;
        cin >> Userchoice;
        if (Userchoice == "yes")
        {
            cout << "What would you like to know about the chip or camera or both:" << endl;
            cin >> Userchoice;
            if (Userchoice == "chip")
            {
                cout << "The iphone 15 has last years A16." << endl;
            }
            else if (Userchoice == "camera")
            {
                cout << "48MP Main: 26 mm, ƒ/1.6 aperture, sensor‑shift optical image stabilization, 100% Focus Pixels, support for super-high-resolution photos (24MP and 48MP)  12MP Ultra Wide: 13 mm, ƒ/2.4 aperture and 120° field of view.." << endl;
            }
            else if (Userchoice == "both")
            {
                cout << "The iphone 15 has last years A16." << endl;
                cout << "48MP Main: 26 mm, ƒ/1.6 aperture, sensor‑shift optical image stabilization, 100% Focus Pixels, support for super-high-resolution photos (24MP and 48MP)  12MP Ultra Wide: 13 mm, ƒ/2.4 aperture and 120° field of view.." << endl;
            }
            else
            {
                cout << "Error wrong characters moving on..." << endl;
            }
        }
        else if (Userchoice == "no")
        {
            cout << "Ok moving on..." << endl;
        }

        cout << "which color would you like we have blue, pink, yellow, green, black:" << endl;
        cin >> color;
        cout << "you choose " << color << "." << endl;
        cout << "which size do you want the plus or regular:" << endl;
        cin >> size;
        if (size == "regular")
        {
            cout << "you choose the " << size << endl;
            cout << "How much GB do you want on your iphone we have 128,256,512:" << endl;
            cin >> Storage;
            cout << "you choose the " << Storage << " GB model" << endl;
            if (Storage == "128")
            {
                cout << "You choose 128GB." << endl;
                cout << "you choose 128GB." << endl;
                cout << "your initial price is 800$ but for you its 750$" << endl;
            }
            else if (Storage == "256")
            {
                cout << "You choose 256GB" << endl;
                cout << "The initial cost is 900$ but for you 850$." << endl;
            }
            else if (Storage == "512")
            {
                cout << "You choose 512GB" << endl;
                cout << "The initial cost is 1100$ but for you 1000$." << endl;
            }
        }
        if (size == "plus")
        {
            cout << "you choose the " << size << endl;
            cout << "How much GB do you want on your iphone we have 128,256,512:" << endl;
            cin >> Storage;
            cout << "you choose the " << Storage << " GB model" << endl;
            if (Storage == "128")
            {
                cout << "You choose 128GB." << endl;
                cout << "your initial price is 900$ but for you its 850$" << endl;
            }
            else if (Storage == "256")
            {
                cout << "You choose 256GB." << endl;
                cout << "The initial price is 1000$ but for you 950$" << endl;
            }
            else if (Storage == "512")
            {
                cout << "You choose 512GB." << endl;
                cout << "The initial price is 1200$ but for you 1100$." << endl;
            }
        }

        cout << "Would you like to add apple care it costs 70$ a year:" << endl;
        cin >> applecare;
        if (applecare == "yes")
        {
            cout << "apple care has been added for an additonal 70$ a year" << endl;
        }
        else if (applecare == "no")
        {
            cout << "Moving on..." << endl;
        }
        else
        {
            cout << "did not get a valid response moving please type yes or no" << endl;
            cin >> applecare;
            if (applecare == "yes")
            {
                cout << "apple care has been added for an additonal 70$ a year" << endl;
            }
            else if (applecare == "no")
            {
                cout << "Moving on..." << endl;
            }
            else
            {
                cout << "invalid response please input yes or no:" << endl;
                cin >> applecare;
                if (applecare == "yes")
                {
                    cout << "apple care has been added for an additonal 70$ a year" << endl;
                }
                else if (applecare == "no")
                {
                    cout << "Moving on..." << endl;
                }
                else
                {
                    cout << "invalid response moving on..." << endl;
                }
            }
        }
        cout << "Would you like to confirm purchase yes or no" << endl;
        cin >> Userchoice;
        if (Userchoice == "yes")
        {
            cout << "order confirmed thank you!" << endl;
            cout << "what is your email to send the reciept to:" << endl;
            cin >> email;
            if (email.find("@") != string::npos && email.find(".") != string::npos && email.find("com") != string::npos)
            {
                cout << "reciept sent to the email: " << email << " thank you!" << endl;
            }
            else
            {
                cout << "invalid email!" << endl;
            }
        }
        else if (Userchoice == "no")
        {
            cout << "order cancelled" << endl;
        }
        else
        {
            cout << "error invalid response please input yes or no." << endl;
            cin >> Userchoice;
            if (Userchoice == "yes")
            {
                cout << "order completed" << endl;
            }
            else if (Userchoice == "no")
            {
                cout << "order cancelled" << endl;
            }
            else
            {
                cout << "invalid response please contact apple support." << endl;
            }
        }
    }
    else if (Userchoice == "iphone15pro")
    {
        cout << "you have choosen the iphone15pro" << endl;
        cout << "Would you like to know more about the iphone15pro:" << endl;
        cin >> Userchoice;
        if (Userchoice == "yes")
        {
            cout << "What would you like to know about the camera or chip or both:" << endl;
            cin >> Userchoice;
            if (Userchoice == "camera")
            {
                cout << "The camera has 48MP Main: 24 mm, ƒ/1.78 aperture, second‑generation sensor‑shift optical image stabilization, 100% Focus Pixels, support for super‑high‑resolution photos (24MP and 48MP) 12MP Ultra Wide: 13 mm, ƒ/2.2 aperture and 120° field of view, 100% Focus Pixels." << endl;
                cout << "The only difference within the two sizes is the max has 50x zoom" << endl;
            }
            else if (Userchoice == "chip")
            {
                cout << "The pro 15 has the A17 pro chip and it can run high quality games mainly console level" << endl;
            }
            else if (Userchoice == "both")
            {
                cout << "The camera has 48MP Main: 24 mm, ƒ/1.78 aperture, second‑generation sensor‑shift optical image stabilization, 100% Focus Pixels, support for super‑high‑resolution photos (24MP and 48MP) 12MP Ultra Wide: 13 mm, ƒ/2.2 aperture and 120° field of view, 100% Focus Pixels." << endl;
                cout << "The only difference within the two sizes is the max has 50x zoom" << endl;
                cout << "The pro 15 has the A17 pro chip and it can run high quality games mainly console level" << endl;
            }
        }
        else if (Userchoice == "no")
        {
            cout << "Moving on..." << endl;
        }
        cout << "Which version of the pro will you choose the regular, max?" << endl;
        cin >> Userchoice;
        if (Userchoice == "regular")
        {
            cout << "you have choosen the reguler pro." << endl;
            cout << "the regular pro includes the same design as the max but with a smaller screen size" << endl;
            cout << "one thing to notice this model does not have the same camera feature the zooming feature in fact" << endl;

            cout << "Which color would you like blue,natural titanium,silver,black: " << endl;
            cin >> color;
            cout << "you choose " << color << "." << endl;
            cout << "How much storage would you like 128,256,512,1TB:" << endl;
            cin >> Userchoice;
            if (Userchoice == "128")
            {
                cout << "you choose 128 GB." << endl;
                cout << "The price on this is 1000$ but for you 950$" << endl;
            }
            else if (Userchoice == "256")
            {
                cout << "you choose 256 GB." << endl;
                cout << "The price on this is 1100$ but for you 1000$" << endl;
            }
            else if (Userchoice == "512")
            {
                cout << "you choose 512 GB." << endl;
                cout << "The price on this is 1300$ but for you 1150$" << endl;
            }
            else if (Userchoice == "1TB")
            {
                cout << "you choose 1TB." << endl;
                cout << "The price for this would be 1500$ but for you 1300$" << endl;
            }
            cout << "Would you like to add apple care for an additional 70$ a year" << endl;
            cin >> applecare;
            if (applecare == "yes")
            {
                cout << "apple care has been added!" << endl;
            }
            else if (applecare == "no")
            {
                cout << "Moving on..." << endl;
            }
            cout << "would you like to confirm purchase yes or no" << endl;
            cin >> Userchoice;
            if (Userchoice == "yes")
            {
                cout << "order confirmed thank you!" << endl;
                cout << "what email would you like the reciept to be sent to:" << endl;
                cin >> email;

                if (email.find("@") != string::npos && email.find(".") != string::npos && email.find("com") != string::npos)
                {
                    cout << "your reciept has been sent to " << email << endl;
                }
                else
                {
                    cout << "invalid email." << endl;
                }
            }
            else if (Userchoice == "no")
            {
                cout << "Order cancelled" << endl;
            }
            else
            {
                cout << "error." << endl;
            }
        }

        else if (Userchoice == "max")
        {
            cout << "you have choosen the max version of the pro." << endl;
            cout << "The max person of the pro has a big screen" << endl;
            cout << "the max contains more capanilities through the camera such as 50x zoom" << endl;
            cout << "Which color would you like we have the blue, natural titanium, silver and black." << endl;
            cin >> color;
            cout << "you choose " << color << "." << endl;
            cout << "what storage configuration would you like we have 256,512,1TB: " << endl;
            cin >> Storage;
            if (Storage == "256")
            {
                cout << "you choose 256 GB" << endl;
                cout << "The initial price is 1200$ but for you 1100$" << endl;
            }
            else if (Userchoice == "512")
            {
                cout << "you choose the 512 GB model" << endl;
                cout << "The initial price on this is 1400$ but for you 1200$" << endl;
            }
            else if (Storage == "1TB")
            {
                cout << "you choose " << Storage << "." << endl;
                cout << "The initial price on this is 1600$ but for you it is 1300$" << endl;
            }

            cout << "would you like to confirm purchase yes or no" << endl;
            cin >> Userchoice;
            if (Userchoice == "yes")
            {
                cout << "order confirmed thank you!" << endl;
                cout << "what is your email for reciept of your purchase:" << endl;
                cin >> email;

                if (email.find("@") != string::npos && email.find(".") != string::npos && email.find("com") != string::npos)
                {
                    cout << "your reciept has been sent to " << email << endl;
                }
                else
                {
                    cout << "invalid email." << endl;
                }
            }
            else if (Userchoice == "no")
            {
                cout << "order cancelled" << endl;
            }
            else
            {
                cout << "error." << endl;
            }
        }
    }
    if (Userchoice == "iphone14")
    {
        cout << "you have choosen the iphone 14" << endl;
        cout << "This phone introduced the plus size of the iphone" << endl;
        cout << "Which size would you like the plus or regular" << endl;
        cin >> Userchoice;
        if (Userchoice == "regular")
        {
            cout << "you have choosen the regular size." << endl;
            cout << "Something to know is that this iphone has last years A15 chip which makes this model a not so good choice" << endl;
            cout << "What storage varient would you like we have 128,256,512" << endl;
            cin >> Userchoice;
            if (Userchoice == "128")
            {
                cout << "You choose the 128 GB model." << endl;
                cout << "The price on this is 700$ but for you 650$" << endl;
            }
            else if (Userchoice == "256")
            {
                cout << "You choose the 256 GB model." << endl;
                cout << "The initial price is 800$ but for you 750$" << endl;
            }
            else if (Userchoice == "512")
            {
                cout << "You choose the 512 GB model." << endl;
                cout << "The initial price is 1000 but got you 900$." << endl;
            }
        }
        else if (Userchoice == "plus")
        {
            cout << "You have choosen the plus size." << endl;
            cout << "How much storage would you like 128,256,512." << endl;
            cin >> Userchoice;
            if (Userchoice == "128")
            {
                cout << "You have choosen the 128 GB model." << endl;
                cout << "The initial price is 800$ but for you 750$" << endl;
            }
            else if (Userchoice == "256")
            {
                cout << "You have choosen the 256 GB model." << endl;
                cout << "The initial price is 900$ but for you 850$." << endl;
            }
            else if (Userchoice == "512")
            {
                cout << "You have choosen the 512 GB model." << endl;
                cout << "The initial price is 1100$ but for you 1000$" << endl;
            }
        }
        cout << "Would you like to add apple care for 70$ a year:" << endl;
        cin >> applecare;
        if (applecare == "yes")
        {
            cout << "apple care has been added" << endl;
        }
        else if (applecare == "no")
        {
            cout << "Moving on..." << endl;
        }
        else
        {
            cout << "invalid response moving on..." << endl;
        }
        cout << "would you like to confirm purchase yes or no" << endl;
        cin >> Userchoice;
        if (Userchoice == "yes")
        {
            cout << "order confirmed thank you!" << endl;
            cout << "What email would you like for the reciept to be sent to:" << endl;
            cin >> email;
            if (email.find("@") != string::npos && email.find('.') != string::npos && email.find("com") != string::npos)
            {
                cout << "your reciept has been sent to " << email << endl;
            }
            else
            {
                cout << "invalid email." << endl;
            }
        }
        else if (Userchoice == "no")
        {
            cout << "order cancelled." << endl;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    else if (Userchoice == "iphone13")
    {
        cout << "you have choosen the iphone 13" << endl;
        cout << "The iphone 13 baught cinematic mode." << endl;

        cout << "Would you like to know about the iphones camera, chip or both:" << endl;
        cin >> Userchoice;
        if (Userchoice == "no")
        {
            cout << "Moving on..." << endl;
        }
        else if (Userchoice == "chip")
        {
            cout << "The iphone 13 comes with apples A15 bionic chip with a 6-core CPU, 4-core GPU, and a 16-core Neural Engine." << endl;
        }
        else if (Userchoice == "camera")
        {
            cout << "The iphone 13 has a 12 Megapixel main camera also a ultrawide lens." << endl;
        }
        else if (Userchoice == "both")
        {
            cout << "The iphone 13 comes with apples A15 bionic chip with a 6-core CPU, 4-core GPU, and a 16-core Neural Engine." << endl;
            cout << "The iphone 13 has a 12 Megapixel main camera also a ultrawide lens." << endl;
        }
        else
        {
            cout << "Invalid please select camera,chip or both or simply no:" << endl;
            cin >> Userchoice;
            if (Userchoice == "no")
            {
                cout << "moving on..." << endl;
            }
            else if (Userchoice == "chip")
            {
                cout << "The iphone 13 comes with apples A15 bionic chip with a 6-core CPU, 4-core GPU, and a 16-core Neural Engine." << endl;
            }
            else if (Userchoice == "camera")
            {
                cout << "The iphone 13 has a 12 Megapixel main camera also a ultrawide lens." << endl;
            }
            else if (Userchoice == "both")
            {
                cout << "The iphone 13 comes with apples A15 bionic chip with a 6-core CPU, 4-core GPU, and a 16-core Neural Engine." << endl;
                cout << "The iphone 13 has a 12 Megapixel main camera also a ultrawide lens." << endl;
            }
            else
            {
                cout << "moving on..." << endl;
            }
        }

        cout << "Which color would you like we have blue,green,red,pink,white,black:" << endl;
        cin >> color;
        cout << "The color you choose is " << color << endl;

        cout << "Which storage configuration would you like 128,256,512:" << endl;
        cin >> Storage;
        if (Storage == "128")
        {
            cout << "You choose 128GB." << endl;
            cout << "The initial price is 600$ but for you 550$" << endl;
        }
        else if (Storage == "256")
        {
            cout << "You choose 256GB." << endl;
            cout << "The price on this is 700$ but for you 650$" << endl;
        }
        else if (Storage == "512")
        {
            cout << "you choose 512GB." << endl;
            cout << "The price on this is 800$ but for you 750$" << endl;
        }
        cout << "Would you like to add apple care its 70$ yearly:" << endl;
        cin >> applecare;
        if (applecare == "yes")
        {
            cout << "Apple care was added." << endl;
        }
        else if (applecare == "no")
        {
            cout << "Moving on..." << endl;
        }

        else
        {
            cout << "Invalid response Moving on..." << endl;
        }

        cout << "Would you like to confirm purchase yes or no:" << endl;
        cin >> Userchoice;
        if (Userchoice == "yes")
        {
            cout << "order confirmed " << endl;
            cout << "what is your email to send the reciept to:" << endl;
            cin >> email;
            if (email.find("@") != string::npos && email.find("com") != string::npos && email.find(".") != string::npos)
            {
                cout << "your reciept has been sent to " << email << endl;
            }
            else
            {
                cout << "invalid email." << endl;
            }
        }
        else if (Userchoice == "no")
        {
            cout << "order cancelled" << endl;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    else if (Userchoice == "iphone12")
    {
        cout << "you have choosen the iphone12" << endl;
        cout << "the iphone 12 is the first phone with the new boxy design like its predessesor the iphone 5" << endl;
        cout << "this iphone design is still the recent design so you will not feel that much of a difference when upgrading " << endl;
        cout << "Would you like to know more about the iphones camera and chip:" << endl;
        cin >> Userchoice;
        if (Userchoice == "yes")
        {
            cout << "What would you like to know about the camera, chip, or both:" << endl;
            cin >> Userchoice;
            if (Userchoice == "camera")
            {
                cout << "The iphone 12 camera has a 12 megapixel main/Ultrawide lens. " << endl;
            }
            else if (Userchoice == "chip")
            {
                cout << "The iphone has the A14 chip wuth a 6 core CPU, 4 core GPU, and 16 core Neural engine" << endl;
            }
            else if (Userchoice == "both")
            {
                cout << "The iphone has the A14 chip wuth a 6 core CPU, 4 core GPU, and 16 core Neural engine" << endl;
                cout << "Camera on the iphone includes a 12 megapixel main/Ultrawide lens" << endl;
            }
            else
            {
                cout << "invalid choice please make a choice of yes no:" << endl;
                cin >> Userchoice;
                if (Userchoice == "no")
                {
                    cout << "Moving on..." << endl;
                }
                else if (Userchoice == "yes")
                {
                    cout << "What would you like to know about the camera, chip, or both:" << endl;
                    cin >> Userchoice;
                    if (Userchoice == "camera")
                    {
                        cout << "The iphone 12 camera has a 12 megapixel main/Ultrawide lens. " << endl;
                    }
                    else if (Userchoice == "chip")
                    {
                        cout << "The iphone has the A14 chip wuth a 6 core CPU, 4 core GPU, and 16 core Neural engine" << endl;
                    }
                    else if (Userchoice == "both")
                    {
                        cout << "The iphone has the A14 chip wuth a 6 core CPU, 4 core GPU, and 16 core Neural engine" << endl;
                        cout << "Camera on the iphone includes a 12 megapixel main/Ultrawide lens" << endl;
                    }
                    else
                    {
                        cout << "Moving on..." << endl;
                    }
                }
            }
        }
        else if (Userchoice == "no")
        {
            cout << "Moving on..." << endl;
        }
        else
        {
            cout << "Error not a valid response moving on..." << endl;
        }
        cout << "Which color would you like we have green,blue,black,white,purple,red:" << endl;
        cin >> color;
        if (color == "red")
        {
            cout << "You choose the color red" << endl;
        }
        else if (color == "blue")
        {
            cout << "you choose the color blue" << endl;
        }
        else if (Userchoice == "black")
        {
            cout << "you choose the color black" << endl;
        }
        else if (Userchoice == "white")
        {
            cout << "you choose the color white" << endl;
        }
        else if (Userchoice == "purple")
        {
            cout << "you choose the color purple" << endl;
        }
        else if (Userchoice == "green")
        {
            cout << "you choose the color green" << endl;
        }
        else
        {
            cout << "invalid response please choose a color:" << endl;
            cin >> color;
            if (color == "red")
            {
                cout << "you choose red moving on..." << endl;
            }
            else if (color == "blue")
            {
                cout << "you choose the color blue moving on..." << endl;
            }
            else if (color == "black")
            {
                cout << "you choose the color black moving on..." << endl;
            }
            else if (Userchoice == "white")
            {
                cout << "you choose the color white moving on..." << endl;
            }
            else if (Userchoice == "purple")
            {
                cout << "you choose the color purple moving on..." << endl;
            }

            else if (Userchoice == "green")
            {
                cout << "you choose the color green moving on..." << endl;
            }
        }

        cout << "Which storage varient would you like 64,128,256:" << endl;
        cin >> Storage;
        if (Storage == "64")
        {
            cout << "you choose 64 GB." << endl;
            cout << "The initial price is 310$ for you 250$" << endl;
        }
        else if (Storage == "128")
        {
            cout << "You choose 128GB." << endl;
            cout << "The initial price is 450$ but for you 350$" << endl;
        }
        else if (Storage == "256")
        {
            cout << "You choose the 256GB model" << endl;
            cout << "The initial price is 550$ but for you 450$" << endl;
        }
        cout << "Would you like to add apple care for an additional 70$ yearly:" << endl;
        cin >> Userchoice;
        if (Userchoice == "yes")
        {
            cout << "An additional 70$ has been added" << endl;
        }
        else if (Userchoice == "no")
        {
            cout << "moving on..." << endl;
        }
        else
        {
            cout << "sorry I did not get a valid response moving on..." << endl;
        }

        cout << "would you like to confirm purchase yes or no" << endl;
        cin >> Userchoice;
        if (Userchoice == "yes")
        {
            cout << "order confirmed thank you for your purchase" << endl;

            cout << "what is your email to send the reciept to:" << endl;
            cin >> email;
            if (email.find("@") != string::npos && email.find(".") != string::npos && email.find("com") != string::npos)
            {
                cout << "your reciept has been sent to " << email << endl;
            }
            else
            {
                cout << "invalid email." << endl;
            }
        }
        else if (Userchoice == "no")
        {
            cout << "order cancelled" << endl;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    else if (Userchoice == "iphone11")
    {
        cout << "You have chosen the iphone 11" << endl;
        while (Userchoice == "iphone11")
        {
            cout << "Which storage varient would you like 64,128,256" << endl;
            cin >> Storage;
            cout << "What color of choice would you like we have purple,yellow,red,white,black,green:" << endl;
            cin >> color;

            break;
        }
        cout << "you choose the " << Userchoice << " with a storage of " << Storage << " GB."
             << "And you choose your color as " << color << "." << endl;
        if (Storage == "64")
        {
            cout << "your price is 250$" << endl;
        }
        else if (Storage == "128")
        {
            cout << "your price is 280$" << endl;
        }
        else if (Storage == "256")
        {
            cout << "your price is 305$" << endl;
        }

        cout << "would you like to add apple care for an additional 70$ a year:" << endl;
        cin >> applecare;
        if (applecare == "yes")
        {
            cout << "apple care has been added!" << endl;
        }
        else if (applecare == "no")
        {
            cout << "moving on..." << endl;
        }
        else
        {
            cout << "error moving on.." << endl;
        }
        cout << "would you like to finalize your purchase:" << endl;
        cin >> Userchoice;

        if (Userchoice == "yes")
        {
            cout << "your order has been placed!" << endl;
            cout << "what is your email to send the reciept to:" << endl;
            cin >> email;
            if (email.find("@") != string::npos && email.find(".") != string::npos && email.find("com") != string::npos)
            {
                cout << "your reciept has been sent to " << email << endl;
            }
            else
            {
                cout << "invalid email!" << endl;
            }
        }
        else if (Userchoice == "no")
        {
            cout << "order cancelled." << endl;
        }
    }

    cout << "Thanks for trying out my apple store code!" << endl;
    cout << "if you would like to provide any sort of feedback you can reach me at EmadulEmad@wayne.edu" << endl;

    return 0;
}
