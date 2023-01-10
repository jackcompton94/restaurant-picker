## Purpose
Simple Command Line Tool that helps my girlfriend and I figure out what we're supposed to eat when cooking is the last thing we wanna do

![My Image](https://github.com/jackcompton94/restaurant-picker/blob/68843d649efa7553db675e22706aea2a9479220b/Screenshot%202023-01-09%20at%208.27.39%20PM.png)

## How to use

The UI is simple and follows 5 options. However, in order to leverage the functionality you must update the 4 pieces of code denoted for the local file pathing.

### Under the add/pick restaurant functions - include the same file path
```
foodOptions.open("/Users/jackcompton/Documents/cDev/restaurant-picker/restaurant.txt", ios::app);

ifstream fileReader("/Users/jackcompton/Documents/cDev/restaurant-picker/restaurant.txt");
```

### Under the add/order carry-out functions - include the same file path
```
foodOptions.open("/Users/jackcompton/Documents/cDev/restaurant-picker/carryout.txt", ios::app);

ifstream fileReader("/Users/jackcompton/Documents/cDev/restaurant-picker/carryout.txt");
```
