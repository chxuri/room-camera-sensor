//these are the libraries im using for my OLED and to connect my esp32 to wifi!
//since i don't currently have any of the components i'm planning to program, this code WILL contain errors.
//i tried my best to create a basic outline of how the code will look when i do run it on the actual parts 

#include <WiFi.h>
#include <PubSubClient.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define WIDTH 128 
#define HEIGHT 32
#define RESET -1
#define ADDRESS 0x3C

Adafruit_SSD1306 display(WIDTH, HEIGHT, &Wire, RESET);

int column0 = 2;
int column1 = 3;
int column2 = 4;
int row0 = 20;
int row1 = 8;
int row2 = 9;
int row3 = 10;
int motionSensor = 21;

int rows = {20, 8, 9, 10};
int columns = {2, 3, 4};

bool keyPressed = false;
array pinOn = {0,0};

string turnOnCam = "no";

array matrix = {
    {"1", "2", "3"},
    {"4", "5", "6"},
    {"7", "8", "9"},
    {"#", "0", "X"}
}

string correctPassword = "6394";
string passwordInput = "";
string numpadInput = "";

void setup()
{
    Serial.begin(115200);
    WiFi.begin(//ssid, //password);
    pinMode(column0, INPUT_PULLDOWN);
    pinMode(column1, INPUT_PULLDOWN);
    pinMode(column2, INPUT_PULLDOWN);
    pinMode(row0, INPUT_PULLDOWN);
    pinMode(row1, INPUT_PULLDOWN);
    pinMode(row2, INPUT_PULLDOWN);
    pinMode(row3, INPUT_PULLDOWN);
    pinMode(motionSensor, INPUT_PULLDOWN);
}

void loop()
{

    if(digitalRead(motionSensor == HIGH))
    {
        display.clearDisplay();
        display.setTextSize(1);
        display.setTextColor(WHITE);
        display.setCursor(0, 10);
        display.println("Please enter the password:");
        display.display();
    
        //OLED should be turned on here
        //Print input message
        //start cam in 10 seconds
        


        while (passwordInput.length() <= 4 && keyPressed == false)
        {
            numpadInput = matrixFunction();
            if (passwordInput.length() < 4)
            {
                
                passwordInput += numpadInput;
                display.clearDisplay();
                display.setTextSize(1);
                display.setTextColor(WHITE);
                display.setCursor(0, 25);
                display.println(passwordInput);
                display.display();

                keyReleaseTester();
            }
            if (numpadInput == "X")
            {
                passwordInput.remove(passwordInput.length() - 1);
                passwordInput += numpadInput;
                
                display.clearDisplay();
                display.setTextSize(1);
                display.setTextColor(WHITE);
                display.setCursor(0, 25);
                display.println(passwordInput);
                display.display();

                keyReleaseTester();
            }
            if (numpadInput == "#")
            {
                if(passwordInput != correctPassword)
                {
                    display.clearDisplay();
                    display.setTextSize(3);
                    display.setTextColor(WHITE);
                    display.setCursor(0, 10);
                    display.println("Incorrect password! Please try again: ");
                    display.display();

                    passwordInput = "";
                    turnOnCam = "yes";
                    client.publish(emqx/esp32, turnOnCam);
                }
                else
                {
                    display.clearDisplay();
                    display.setTextSize(3);
                    display.setTextColor(WHITE);
                    display.setCursor(0, 10);
                    display.println("Success!");
                    display.display();

                    break;
                }
                keyReleaseTester();
            }
        }
        

    }
}

array matrixFunction()
{
    for (int r = 0; r < 4; r++)
    {
        digitalWrite(rows, HIGH);

        for (int c = 0; c < 3; c++)
        {
            if(digitalRead(columns[c] == HIGH))
            {
                pinOn = {r, c};
                return matrix[r, c];
            }
        }
    }
}

void keyReleaseTester()
{
    keyPressed = true;

    if (digitalRead(pinOn[0]) == LOW && digitalRead(pinOn[1]) == LOW)
    {
        pinOn = {0,0};
        numpadInput = "";
        keyPressed = false;
    }
}
