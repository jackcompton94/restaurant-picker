# Purpose
Simple Command Line Tool that helps my girlfriend and I figure out what we're supposed to eat when cooking is the last thing we wanna do

![My Image](https://github.com/jackcompton94/restaurant-picker/blob/68843d649efa7553db675e22706aea2a9479220b/Screenshot%202023-01-09%20at%208.27.39%20PM.png)

# How to use
The UI is simple and follows 5 options. However, in order to leverage the functionality you must update the 4 pieces of code denoted for the local file pathing.

</br > 
</br > 

## Under the 'add' and 'pick' restaurant functions
```
foodOptions.open("/Users/jackcompton/Documents/cDev/restaurant-picker/restaurant.txt", ios::app);

ifstream fileReader("/Users/jackcompton/Documents/cDev/restaurant-picker/restaurant.txt");
```
### Mac:
Update `"/Users/jackcompton/Documents/cDev/restaurant-picker/restaurant.txt"` </br > 
to `"/Users/(your_mac_name)/Documents/restaurant.txt"` in both lines

### Windows:
Update `"/Users/jackcompton/Documents/cDev/restaurant-picker/restaurant.txt"` </br > 
to `"restaurant.txt"` in both lines

</br > 
</br > 

## Under the 'add' and 'order' carry-out functions
```
foodOptions.open("/Users/jackcompton/Documents/cDev/restaurant-picker/carryout.txt", ios::app);

ifstream fileReader("/Users/jackcompton/Documents/cDev/restaurant-picker/carryout.txt");
```
### Mac:
Update `"/Users/jackcompton/Documents/cDev/restaurant-picker/carryout.txt"` </br > 
to `"/Users/(your_mac_name)/Documents/carryout.txt"` in both lines

### Windows:
Update `"/Users/jackcompton/Documents/cDev/restaurant-picker/carryout.txt"` </br > 
to `"carryout.txt"` in both lines
