# BUG LOG

###inBounds
- Uses || instead of && operator, meaning that any number greater than zero OR less than the dimensions will pass

###isSafe
- Does not throw exception, returns True/False is there is mine at coordinate
