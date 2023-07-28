#include <iostream>
#include <string>

using namespace std;

void encode(char c, int key){
    
    int save = int(c) + key;
    
    if(save <= 122){
        cout<<char(save);
    }
    else{
        
        cout<<char((save-122)+96);
    }

}

void decode(char c, int key){
    
    int save = int(c) - key;
    
    if(save >= 97){
        
        cout<<char(save);
    }
    else{
        cout<<char(122-(96-save));
    }
    
}

int main()
{
    
    cout<<"                                     /$$          "<<endl;
    cout<<"                                    | $$          "<<endl;
    cout<<"  /$$$$$$  /$$$$$$$   /$$$$$$$  /$$$$$$$  /$$$$$$ "<<endl;
    cout<<" /$$__  $$| $$__  $$ /$$_____/ /$$__  $$ /$$__  $$"<<endl;
    cout<<"| $$$$$$$$| $$  \\ $$| $$      | $$  | $$| $$$$$$$$"<<endl;
    cout<<"| $$_____/| $$  | $$| $$      | $$  | $$| $$_____/"<<endl;
    cout<<"|  $$$$$$$| $$  | $$|  $$$$$$$|  $$$$$$$|  $$$$$$$"<<endl;
    cout<<" \\_______/|__/  |__/ \\_______/ \\_______/ \\_______/"<<endl;
    cout<<"[twitter: @ibrahim15793496] || [instagram: ibrahim_1arabic]"<<endl;

    while(true){

        char q;
        int key;
        string word;

        cout<<"\n";
        cout<<"encode[e] decode[d]: ";
        cin>>q;
        cout<<"word: ";
        cin>>word;
        cout<<"key: ";
        cin>>key;
        
        if(q == 'e'){
            
            for(int i =0; i< word.length(); i++){
                
                encode(word[i], key);
            }
        }
        else if(q == 'd'){
            
            for(int i =0; i < word.length(); i++){
                
                decode(word[i], key);
                
            }
        }
        else{
            cout<<"..";
        }

    }
    return 0;
}
