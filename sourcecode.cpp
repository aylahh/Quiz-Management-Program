#include<iostream>
#include<string.h>
using namespace std;
struct participantInfo{
	 string name;
     int age;
     string qualification;
     string location; 
	
};
void quiz_clang(){
	    int result=0; 
	    int incorrectAns;
	    float percentage=0;
	    char ans1,ans2,ans3,ans4,ans5;
	    
	
        cout<<"\n\t                  QUESTION#1                    \t\n"<<endl;
        cout<<"The modulus operator uses ___ character"<<endl;
        cout<<"(A) +"<<endl;
        cout<<"(B) -"<<endl;
        cout<<"(C) /"<<endl;
        cout<<"(D) %"<<endl;
		cout<<"ENTER YOUR ANSWER: ";
		cin>>ans1;
		    if(ans1=='D'||ans1=='d')
			{
			cout<<"\n\t\tGOOD!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tOOPs!!INCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
			
        cout<<"\n                                                   \n"<<endl;
        cout<<"\t                  QUESTION#2                   \t"<<endl;
        cout<<"Which one of the following is a keyword?"<<endl;
        cout<<"(A)switch"<<endl;
        cout<<"(B)size"<<endl;
        cout<<"(C)key"<<endl;
        cout<<"(D)jump"<<endl;	
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans2;
            if(ans2=='A'||ans2=='a')
			{
		      cout<<"\n\t\tCONGRATULATIONS!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
		      result=result+1;
			
			}
		    else{
		    cout<<"\n\t\tNOPE!!INCORRECT ANSWER SELECTED!!\t\t\n"<<endl;}
		
        cout<<"\n                                                   \n"<<endl;
        cout<<"\t                  QUESTION#3                    \t"<<endl;
        cout<<"Logical AND (&&) and Logical OR (||) are ___ operators."<<endl;
        cout<<"(A)LOGICAL"<<endl;
		cout<<"(B)EQUALITY"<<endl;
        cout<<"(C)CLASS MEMBER"<<endl;
        cout<<"(D)COMMA"<<endl;	
		cout<<"ENTER YOUR ANSWER: ";
		cin>>ans3;
            if(ans3=='A'||ans3=='a')
			{
			  cout<<"\n\t\tNICE!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			  result=result+1;
			
			}
		    else
			{
		      cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
		
        cout<<"\n                                                   \n"<<endl;
        cout<<"\t                  QUESTION#4                   \t"<<endl;
        cout<<"Variable names must begin with ___ "<<endl;
        cout<<"(A)NUMBER"<<endl;
	    cout<<"(B)CHARACTERS"<<endl;
        cout<<"(C)LETTERS"<<endl;
        cout<<"(D)#"<<endl;	
        cout<<"ENTER YOUR ANSWER: ";
        cin>>ans4;
            if(ans4=='C'||ans4=='c')
			{
		    cout<<"\n\t\tWELL DONE!!CORRECT OPETION CHOOSED!!\t\t\n"<<endl;
		    result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
			
			
        cout<<"\n                                                   \n"<<endl;
        cout<<"\t                  QUESTION#5                    \t"<<endl;
        cout<<"Which of the following is used for comments in C++?"<<endl;
        cout<<"(A) /* comment */ "<<endl;
		cout<<"(B)// comment */"<<endl;
        cout<<"(C) // comment /"<<endl;
        cout<<"(D) both // comment or /* comment */"<<endl;	
        cout<<"ENTER YOUR ANSWER: ";
        cin>>ans5;
            if(ans5=='D'||ans5=='d')
			{
		      cout<<"\n\t\tEXCELLENT!!CORRECT OPETION CHOOSED!!\t\t\n"<<endl;
		      result=result+1;
			
			}
		    else
			{
		      cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
    	
			
			
        cout<<"\n                                                   \n"<<endl;
        cout<<"\t\tYOU GOT  "<<result<<" MARKS IN C++ QUIZ OUT OF 5!\t\t"<<endl;
        cout<<"\t\tRESULT= "<<result<<"/5 \t\t"<<endl;
        incorrectAns=5-result;
        cout<<"\t\tYOU ANSWERED "<<incorrectAns<<" INCORRECT QUESTIONS!!\t\t"<<endl;
        cout<<"\n                                                   \n"<<endl;
        
		percentage=(result/5)*100;
        cout<<"PERCENTAGE: "<<percentage<<endl;
           if(percentage==50||percentage>=50)
		     {
               cout<<"STATUS:PASS "<<endl;
		     }
           else
	     	{
        	   cout<<"STATUS:FAIL"<<endl;
		    }
        
    
        
    
}
void eng(){
	int result;
	int incorrectAns;
	char ans1,ans2,ans3,ans4,ans5;
	    cout<<"\n\t                  QUESTION#1                    \t\n"<<endl;
        cout<<"How many types of sentences are there according to structure?"<<endl;
		cout<<"A)3"<<endl;
		cout<<"B)4"<<endl;
		cout<<"C)5"<<endl;
		cout<<"D)6"<<endl;
		cout<<"ENTER YOUR ANSWER: ";
		cin>>ans1;
		    if(ans1=='B'||ans1=='b')
			{
			cout<<"\n\t\tGOOD!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}	
        cout<<"\n\t                  QUESTION#2                   \t\n"<<endl;
        cout<<"Second form of Go is: "<<endl;
		cout<<"A)Went"<<endl;
		cout<<"B)Gone"<<endl;
		cout<<"C)goed"<<endl;
		cout<<"D)none of these"<<endl;
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans2;
		    if(ans2=='A'||ans2=='a')
			{
			cout<<"\n\t\tKEEP GOING!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\t"<<endl;
			}
			
        cout<<"\n\t                  QUESTION#3                    \t\n"<<endl;
        cout<<"\nIf i had money ,I......... it tomorrow."<<endl;
		cout<<"A)would have purchased"<<endl;
		cout<<"B) would purchase"<<endl;
		cout<<"C) have purchase"<<endl; 
		cout<<"D) had purchase"<<endl;
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans3;
		    if(ans3=='A'||ans3=='a')
			{
			cout<<"\n\t\tWOHHOO CHAMP!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
			
    
        cout<<"\n\t                  QUESTION#4                   \t\n"<<endl;
        cout<<"Nuclear energy is ......... dangerous to be widely used widely "<<endl;
		cout<<"A)so"<<endl;
		cout<<"B)such"<<endl;
		 cout<<"C)too"<<endl;
		 cout<<"D)that"<<endl;
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans4;
		    if(ans4=='C'||ans4=='c')
			{
			cout<<"\n\t\t NICE WORK!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\t INCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
			
        cout<<"\n\t                  QUESTION#5                    \t\n"<<endl;
        cout<<"\n Anna and tania went shopping,but....couldn't find anything that....liked "<<endl;
		cout<<"A)they,those"<<endl;
		cout<<"B)they,they"<<endl;
		cout<<"C)those,they"<<endl;
		cout<<"D)they,them"<<endl;
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans5;
		    if(ans5=='B'||ans5=='b')
			{
			cout<<"\n\t\tTHIS IS IT!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
			
		cout<<"\n                                                   \n"<<endl;
        cout<<"\t\tYOU GOT  "<< result<<" MARKS IN ENGLISH QUIZ OUT OF 5!\t\t"<<endl;
        incorrectAns=5-result;
        cout<<"\t\tYOU ANSWERED "<<incorrectAns<<" INCORRECT QUESTIONS!!\t\t"<<endl;
        cout<<"\n                                                   \n"<<endl;
			
}
void computer(){
	     int result;
      	int incorrectAns;
	    char ans1,ans2,ans3,ans4,ans5;
	    cout<<"\t                  QUESTION#1                    \t"<<endl;
        cout<<"\n1 Computer is an....... machine.   "<<endl;
		cout<<"A)systematic "<<endl;
		cout<<"B)working"<<endl;
		cout<<"C)electronic"<<endl;
		cout<<"D)functioning"<<endl;
		cout<<"ENTER YOUR ANSWER: ";
		cin>>ans1;
		    if(ans1=='A'||ans1=='a')
			{
			cout<<"\n\t\tNICE!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{\
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
				
        cout<<"\n                                                   \n"<<endl;
        cout<<"\t                  QUESTION#2                   \t"<<endl;
        cout<<"\n Monitor is an......... device"<<endl;
		cout<<"A)input"<<endl;
		cout<<"B)output"<<endl;
		cout<<"C)both"<<endl;
		cout<<"D)none of these "<<endl;
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans2;
		    if(ans2=='B'||ans2=='b')
			{
			cout<<"\n\t\tEXCELLENT!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
	    cout<<"\n                                                   \n"<<endl;
        cout<<"\t                  QUESTION#3                    \t"<<endl;
        cout<<"\nPascal is a ...... language.  "<<endl;
		cout<<"A)general-purpose "<<endl;
		cout<<"B)scripting "<<endl;
		cout<<"C)procedural "<<endl;
		cout<<"D)none of these "<<endl;
        cout<<"\n                                                   \n"<<endl;
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans3;
		    if(ans3=='C'||ans3=='c')
			{
			cout<<"\n\t\tMAKE IT HAPPEN!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
			
        cout<<"\t                  QUESTION#4                   \t"<<endl;
        cout<<"\n NTFS stands for: "<<endl;
		cout<<"A)New Trend File Saving"<<endl;
		cout<<"B)NEW Technology File System "<<endl;
		cout<<"C)Both  "<<endl;
		cout<<"D) none of these"<<endl;
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans4;
		    if(ans4=='B'||ans4=='b')
			{
			cout<<"\n\t\tGOOD!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
			
        cout<<"\n                                                   \n"<<endl;
        cout<<"\t                  QUESTION#5                    \t"<<endl;
        cout<<"\n There are ...... basic components of Computer "<<endl;
		cout<<"A)5 "<<endl;
		cout<<"B)4 "<<endl;
		cout<<"C)3 "<<endl;
		cout<<"D)2"<<endl;
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans5;
		    if(ans5=='B'||ans5=='b')
			{
			cout<<"\n\t\tBRAVO!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
			
		cout<<"\n                                                   \n"<<endl;
        cout<<"\t\tYOU GOT  "<< result<<" MARKS IN COMPUTER QUIZ OUT OF 5!\t\t"<<endl;
        incorrectAns=5-result;
        cout<<"\t\tYOU ANSWERED "<<incorrectAns<<" INCORRECT QUESTIONS!!\t\t"<<endl;
        cout<<"\n                                                   \n"<<endl;
			
}
void generalKnowledge(){
	    int result;
	    int incorrectAns;
	    char ans1,ans2,ans3,ans4,ans5;
	    cout<<"\t                  QUESTION#1                    \t"<<endl;
        cout<<"\nThe planet Earth was formed about..... billions years ago  "<<endl;
		cout<<"A)3.6"<<endl;
		cout<<"B)4.6"<<endl;
		cout<<"C)5.6"<<endl;
		cout<<"D)6.6"<<endl;
		cout<<"ENTER YOUR ANSWER: ";
		cin>>ans1;
		    if(ans1=='b'||ans1=='B')
			{
			cout<<"\n\t\tGOOD!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
				
        cout<<"\n\t                  QUESTION#2                   \t\n"<<endl;
        cout<<"Cocora valley is located in: "<<endl;
		cout<<"A)Pakistan"<<endl;
		cout<<"B)China "<<endl;
		cout<<"C)Colombia"<<endl;
		cout<<"D)Africa"<<endl;
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans2;
		    if(ans2=='b'||ans2=='B')
			{
			cout<<"\n\t\tBRAVO!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
			
        
        cout<<"\t                  QUESTION#3                    \t"<<endl;
        cout<<"\nNational flag of Pakistan has ...... colours "<<endl;
		cout<<"A)2"<<endl;
		cout<<"B)4 "<<endl;
		cout<<"C)6"<<endl;
		cout<<"D)8"<<endl;
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans3;
		    if(ans3=='a'||ans3=='A')
			{
			cout<<"\n\t\tYOU'RE A CHAMPION'!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
        cout<<"\t                  QUESTION#4                   \t"<<endl;
        cout<<"\nWho was the first Governor General of Pakistan  "<<endl;
		cout<<"A)fatima jinnah"<<endl;
		cout<<"B)liaqat ali khan"<<endl;
		cout<<"C)Nawaz sharif "<<endl;
		cout<<"D)Quaid-e-azam "<<endl;
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans4;
		    if(ans4 =='D'||ans4=='d')
			{
			cout<<"\n\t\t KEEP IT UP!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
			
        cout<<"\n                                                   \n"<<endl;
        cout<<"\t                  QUESTION#5                    \t"<<endl;
        cout<<"\nThe layers of atmosphere based on: "<<endl;
		cout<<"A)Temperature "<<endl;
		cout<<"B)Pressure "<<endl;
		cout<<"C)Gases "<<endl;
		cout<<"D)None"<<endl;
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans5;
		    if(ans5=='b'||ans5=='B')
			{
			cout<<"\n\t\tGOOD WORK!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
			
		cout<<"\n                                                   \n"<<endl;
        cout<<"\t\tYOU GOT  "<< result<<" MARKS IN GENERAL KNOWLEDGE QUIZ OUT OF 5!\t\t"<<endl;
        incorrectAns=5-result;
        cout<<"\t\tYOU ANSWERED "<<incorrectAns<<" INCORRECT QUESTIONS!!\t\t"<<endl;
        cout<<"\n                                                   \n"<<endl;
        
}

void maths(){
	    int result;
	    int incorrectAns;
	    char ans1,ans2,ans3,ans4,ans5;
        cout<<"\n\n\t                  QUESTION#1                    \t"<<endl;
        cout<<"\n (3+3)/(3!)=   "<<endl;
		cout<<"A)6 "<<endl;
		cout<<"B)1 "<<endl;
		cout<<"C)5  "<<endl;
		cout<<"D)4 "<<endl;	
        cout<<"ENTER YOUR ANSWER: ";
        cin>>ans1;
         if(ans1=='B'||ans1=='b')
			{
			cout<<"\n\t\tMAKE IT HAPPEN!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
        cout<<"\t                  QUESTION#2                   \t"<<endl;
        cout<<"\n                                                   \n"<<endl;
        cout<<"\n(6*6*2)-2="<<endl;
		cout<<"A)98"<<endl;
		cout<<"B)70"<<endl;
		cout<<"C)72 "<<endl;
		cout<<"D)112"<<endl;
        cout<<"ENTER YOUR ANSWER: ";
        cin>>ans2;
         if(ans2=='B'||ans2=='b')
			{
			cout<<"\n\t\tMAKE IT HAPPEN!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
        cout<<"\n                                                   \n"<<endl;
        cout<<"\t                  QUESTION#3                    \t"<<endl;
        cout<<"\n 1000*(8/2)= "<<endl;
		cout<<"A)41234"<<endl;
		cout<<"B)63000"<<endl;
		cout<<"C)50002"<<endl;
		cout<<"D)none of these"<<endl;
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans3;
		    if(ans3=='D'||ans3=='d')
			{
			cout<<"\n\t\tMAKE IT HAPPEN!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
			
        cout<<"\n                                                   \n"<<endl;
        cout<<"\t                  QUESTION#4                   \t"<<endl;
        cout<<"(6*6*6+12-12)= "<<endl;
		cout<<"A)414"<<endl;
		cout<<"B)600"<<endl;
		cout<<"C)3600"<<endl;
		cout<<"D)216"<<endl;
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans4;
		    if(ans4=='D'||ans4=='d')
			{
			cout<<"\n\t\tCOOL!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
			
        
        cout<<"\n                                                   \n"<<endl;
        cout<<"\t                  QUESTION#5                    \t"<<endl;
        cout<<"4 factorial is:  "<<endl;
		cout<<"A)60 "<<endl;
		cout<<"B)24 "<<endl;
		cout<<"C)34 "<<endl;
		cout<<"D)27"<<endl;
        cout<<"ENTER YOUR ANSWER: ";
		cin>>ans5;
		    if(ans5=='b'||ans5=='B')
			{
			cout<<"\n\t\tGOOD WORK!!CORRECT OPTION CHOOSED!!\t\t\n"<<endl;
			result=result+1;
			
			}
		    else
			{
		    cout<<"\n\t\tINCORRECT ANSWER SELECTED!!\t\t\n"<<endl;
			}
			
		cout<<"\n                                                   \n"<<endl;
        cout<<"\t\tYOU GOT  "<< result<<" MARKS IN  MATHS QUIZ OUT OF 5!\t\t"<<endl;
        incorrectAns=5-result;
        cout<<"\t\tYOU ANSWERED "<<incorrectAns<<" INCORRECT QUESTIONS!!\t\t"<<endl;
        cout<<"\n                                                   \n"<<endl;
}
int main(){
	  char desire;
      cout<<"\n\n\t(:)(:)(:)(:)(:)(:)(:)(:)--------- ONLINE QUIZ SYSTEM FOR EVERYONE!! ---------(:)(:)(:)(:)(:)(:)(:)(:)(:)(:)\t"<<endl;
      cout<<"\t     ----------------THIS QUIZ WILL HELP YOU TO KNOW YOUR CAPABILITIES AND BROADEN YOUR VISION !!! -------------\t"<<endl;


         participantInfo p1;
		 cout<<"\n                          \n"<<endl;
	     cout<<"\t\tDETAILS OF THE "<<" PARTICIPANT ARE: \t\t"<<endl;
	     cout<<"ENTER YOUR  NAME: "<<endl;
	     cin>>p1.name;
	     getline(cin,p1.name);
         cout<<"ENTER AGE: "<<endl;
	     cin>>p1.age;
	     cout<<"ENTER YOUR EDUCATION LEVEL: "<<endl;
	     cin>>p1.qualification;
	     getline(cin,p1.qualification);
	     cout<<"ENTER YOUR COUNTRY AND CITY: "<<endl;
	     cin>>p1.location;
	     getline(cin,p1.location);
	   
  do{
  	
    char quiz_cases;
     cout<<"\n\t\tPRESS 1 TO PLAY C++ QUIZ!:))))\t\t"<<endl;
     cout<<"\t\tPRESS 2 TO PLAY ENGLISH QUIZ!:))))\t\t"<<endl;
     cout<<"\t\tPRESS 3 TO PLAY COMPUTER QUIZ!:))))\t\t"<<endl;
     cout<<"\t\tPRESS 4 TO PLAY GENERAL KNOWLEDGE QUIZ!:))))\t\t"<<endl;
     cout<<"\t\tPRESS 5 TO PLAY DISCRETE MATHEMATICS QUIZ!:))))\t\t"<<endl;
     cin>>quiz_cases;
     system("cls");
     

  switch(quiz_cases)
  {
  	case '1':
  		cout<<"\tWE ARE GLAD THAT YOU CHOOSED C++ QUIZ!!YOU WILL BE ASKED 5 QUESTIONS REGARDING THIS SUBJECT\t"<<endl;
  		cout<<"\tIMPORTANT NOTE: PLEASE CHOOSE ONLY ONE OPTION AND AT THE END YOUR RESULT WILL BE CALCULATED!!\t"<<endl;
  		quiz_clang();
  		break;
  		
  	case '2':	
  	    cout<<"\tWE ARE GLAD THAT YOU CHOOSED ENGLISH QUIZ!!YOU WILL BE ASKED 5 QUESTIONS REGARDING THIS SUBJECT\t"<<endl;
  		cout<<"\tIMPORTANT NOTE: PLEASE CHOOSE ONLY ONE OPTION AND AT THE END YOUR RESULT WILL BE CALCULATED!!\t"<<endl;
  		eng();
  		break;
  	
  	case '3':
  		cout<<"\tWE ARE GLAD THAT YOU CHOOSED COMPUTER QUIZ!!YOU WILL BE ASKED 5 QUESTIONS REGARDING THIS SUBJECT\t"<<endl;
  		cout<<"\tIMPORTANT NOTE: PLEASE CHOOSE ONLY ONE OPTION AND AT THE END YOUR RESULT WILL BE CALCULATED!!\t"<<endl;
  		computer();
  		break;
  		
  	case '4':
  		cout<<"\tWE ARE GLAD THAT YOU CHOOSED GENERAL KNOWLEDGE QUIZ!!YOU WILL BE ASKED 5 QUESTIONS REGARDING THIS SUBJECT\t"<<endl;
  		cout<<"\tIMPORTANT NOTE: PLEASE CHOOSE ONLY ONE OPTION AND AT THE END YOUR RESULT WILL BE CALCULATED!!\t"<<endl;
  		generalKnowledge();
  		break;	
  		
  	case '5':
  		cout<<"\tWE ARE GLAD THAT YOU CHOOSED MATHEMATICS QUIZ!!YOU WILL BE ASKED 5 QUESTIONS REGARDING THIS SUBJECT\t"<<endl;
  		cout<<"\tIMPORTANT NOTE: PLEASE CHOOSE ONLY ONE OPTION I.E.(A/B/C/D) AND AT THE END YOUR RESULT WILL BE CALCULATED!!\t"<<endl;
  		maths();
  		break;
  		
  	default:
	  cout<<"\tTHIS SUBJECT IS NOT IN OUR ONLNE QUIZ SYSTEM\t"<<endl;
	  break;	
  	
  }
  
  cout<<"DO YOU AGAIN WANT TO PLAY THE QUIZ??PRESS Y/y and N/n as per your liking!!"<<endl;
  cin>>desire;
  system("cls");
}while(desire=='Y'||desire=='y');
   
  cout<<"\n\n\t\tTHANKYOU FOR PARTICIPATING!!HOPE YOU ENJOYED!!COME BACK AGAIN:)))))\t\t"<<endl;



	
}
