## April 21

# Use excel to make a result

#### 1. Data Entry

|SN   |Names   | Sub1  |Sub2   |Sub2   |
|---|---|---|---|---|
|1   | Ram  | *placeholder*   | *placeholder*  |  *placeholder* |
| 2  |  Shyam | *placeholder*  | *placeholder*  | *placeholder*  |
|  3 |  Hari | *placeholder*  | *placeholder*  |  *placeholder* |

#### 2. Find total using SUM formula 

``` md
> both method works

    =SUM(cell1,cell2,cell3,cell4.....) 
    =SUM=(cell1:cell4)
```

#### 3. Find Maximum, Minimum, Average using formula

```  md

> Average formula
    =AVERAGE(cell1:cell5)

> Maximum Formula 
    =MAX(cell1:cell4)

> Minimum Formula
    =MIN(cell1:cell4)

```

#### 4. Show if the student has passed or failed the exam using If and AND conditional Statement

``` md 
> use of conditional statement for single cell
    =IF(cell1>=40, "pass", "fail")

> use of conditional statement for multiple cell
    =IF((AND(cell1>=40, cell2>=40, .....)), "Pass", "Fail")

** the AND operator gives boolen value (true or false) which is accepted by IF Statement!  **

```

#### 5. Display Red - failed and Green - passed

``` md 
_ Use  conditional formatting on > Home > Styles _

> Select the Result Column with Pass or Fail output
> Home > Styles > Conditional Formatting > Create New Rule 
> Select Format only the cell that contains
> Formatting cell with (Specific Text) > (Containing) > (Pass)
> Change the color to Green using the format button
> Repeat same for Fail with color red
```


