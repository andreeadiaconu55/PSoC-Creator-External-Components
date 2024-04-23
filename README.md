# PSoC-Creator-External-Components

## Objectives
This project's purpose is the creation of a new component in PSoC Creator, a 3bit counter

## Implemetntation
- Starting with a new project, the Components tab will be selected and then Add Component Item
- After selecting Implementation-> Schematicand giving a name to the component, a Lookup Table will be added to the project, configuring it like in the picture:
  ![LookupTable](https://github.com/andreeadiaconu55/PSoC-Creator-External-Components/assets/132846833/e50c99d4-d2d3-47a3-8e56-6b6e7b77983c)
- The entries and exits will be added, connecting the schematic like so:
  ![schematic](https://github.com/andreeadiaconu55/PSoC-Creator-External-Components/assets/132846833/1b1329ab-51bf-448b-ac5b-d3b2403e5ce9)


## Creating a project with the new component

| Components | Name |
| ------ | ------ |
| Digital Input Pin | SWD2 |
| Digital Input Pin | SWD3 |
| Digital Output Pin | LED1 |
| Digital Output Pin | LED2 |
| Digital Output Pin | LED3 |
| D Flip Flop | |
| Signal | Clock |
| Counter(new component) | Counter3b_1 |

![counter](https://github.com/andreeadiaconu55/PSoC-Creator-External-Components/assets/132846833/87b95913-a6cd-4e37-a3fe-ded1d16e3fe1)

### Connecting the pins
![pins](https://github.com/andreeadiaconu55/PSoC-Creator-External-Components/assets/132846833/eb71aa88-0425-4a45-8035-345954e15325)

## Additional  component
There are also a counter on 4 bits and a component that has two enteries (Min, Max) and generates four exits, configurated as follows:

![MinMax](https://github.com/andreeadiaconu55/PSoC-Creator-External-Components/assets/132846833/546dbadc-4ed5-4a4d-9acf-f0ea9c693d97)
