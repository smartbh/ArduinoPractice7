const int piezo = 7;
char code[] ={'C','D','E','F','G','A','B','T'};
unsigned int freq[] = {262,294,330,349,392,440,494,523};
char mData[] = "GGGGEEEEpGGEECCCCpDDDDEEDDpCCEEGGGGpTGTTGGpTTGGEEEEpGGGGDDFFpEEDDCCCC";
const byte mSize = sizeof(mData);

char  data[]="EEEECCCCEECCAAAA";

void setup() 
{
  pinMode(piezo, OUTPUT);
}

void loop() 
{
  for(int i=0;i<sizeof(data);i++){
    tone(7, freq[data[i]-'A'], 100);
    delay(100);
  }
  
  delay(2000);
}
