/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: HotRod
 *
 * Created on February 17, 2019, 12:17 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {

    string light_color, oncoming_traffic, turn_signal_status;
  
    cout << "What color is the light? Please type 'Red', 'Yellow', or 'Green': ";
    getline(cin, light_color);
        
    if (light_color == "Red") {
        cout << "Is there oncoming traffic?  Please type 'Yes' or 'No': ";
        getline(cin, oncoming_traffic);
        
        if (oncoming_traffic == "Yes") {
            cout << "Wait.";
            
        } else if (oncoming_traffic == "No") {
            cout << "Which direction are you traveling?  Please type 'Left', 'Right', or 'Straight': ";
            getline(cin,turn_signal_status);
            
            if (turn_signal_status == "Right") {
                cout << "Turn right.";
            } else if (turn_signal_status == "Left") {
                cout << "Wait.";
            } else if (turn_signal_status == "Straight") {
                cout << "Wait.";
            }
        }
    } else if (light_color == "Yellow") {
            cout << "Wait.";
            
    } else if (light_color == "Green") {
        cout << "Is there oncoming traffic?  Please type 'Yes' or 'No': ";
        getline(cin, oncoming_traffic);
        
        if (oncoming_traffic == "Yes"){
            cout << "Which direction are you traveling?  Please type 'Left', 'Right', or 'Straight': ";
            getline(cin,turn_signal_status);
            
            if (turn_signal_status == "Right") {
                cout << "Turn right.";
            } else if (turn_signal_status == "Left") {
                cout << "Wait.";
            } else if (turn_signal_status == "Straight") {
                cout << "Continue straight.";
            }
        } else if (oncoming_traffic == "No") {
            cout << "Proceed.";
        }
    }
}

