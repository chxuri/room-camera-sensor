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
        //OLED should be turned on here
        //Print input message
        //start cam in 10 seconds
        


        while (numpadInput != "X" && passwordInput.length() <= 4 && keyPressed == false)
        {
            numpadInput = matrixFunction();
            if (passwordInput.length() < 4)
            {
                
                passwordInput += numpadInput;
                
                keyReleaseTester();
            }
            if (numpadInput == "X")
            {
                passwordInput.remove(passwordInput.length() - 1);
                keyReleaseTester();
            }
            if (numpadInput == "#")
            {
                if(passwordInput != correctPassword)
                {
                    //error message on oled screen
                    passwordInput = "";
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

    if (digitalRead(pinOn[0]) == HIGH && digitalRead(pinOn[1]) == HIGH)
    {
        pinOn = {0,0};
        numpadInput = "";
        keyPressed = false;
    }
}