# Predicting Bike Sharing Patterns
=========================================
Files
=========================================

	- Readme.txt
	- hour.csv : bike sharing counts aggregated on hourly basis. Records: 17379 hours
	- day.csv : bike sharing counts aggregated on daily basis. Records: 731 days

=========================================
Dataset characteristics
=========================================	
Both hour.csv and day.csv have the following fields, except hr which is not available in day.csv
	
	- instant: record index
	- dteday : date
	- season : season (1:springer, 2:summer, 3:fall, 4:winter)
	- yr : year (0: 2011, 1:2012)
	- mnth : month ( 1 to 12)
	- hr : hour (0 to 23)
	- holiday : weather day is holiday or not (extracted from http://dchr.dc.gov/page/holiday-schedule)
	- weekday : day of the week
	- workingday : if day is neither weekend nor holiday is 1, otherwise is 0.
	+ weathersit : 
		- 1: Clear, Few clouds, Partly cloudy, Partly cloudy
		- 2: Mist + Cloudy, Mist + Broken clouds, Mist + Few clouds, Mist
		- 3: Light Snow, Light Rain + Thunderstorm + Scattered clouds, Light Rain + Scattered clouds
		- 4: Heavy Rain + Ice Pallets + Thunderstorm + Mist, Snow + Fog
	- temp : Normalized temperature in Celsius. The values are divided to 41 (max)
	- atemp: Normalized feeling temperature in Celsius. The values are divided to 50 (max)
	- hum: Normalized humidity. The values are divided to 100 (max)
	- windspeed: Normalized wind speed. The values are divided to 67 (max)
	- casual: count of casual users
	- registered: count of registered users
	- cnt: count of total rental bikes including both casual and registered

===========================================
Explanation
===========================================
The Neural network was built from "scratch", using only NumPy to assist. 
The goal of this project is to understand what happens behind the neural network before diving deeper into other tools like PyTorch.

===========================================
Results
===========================================
	- All the code in the notebook runs in Python 3 without failing, and all unit tests pass.
	- The sigmoid activation function is implemented correctly.
	- The forward pass is correctly implemented for the network's training.
	- The run method correctly produces the desired regression output for the neural network.
	- The network correctly implements the backward pass for each batch, correctly updating the weight change.
	- Updates to both the input-to-hidden and hidden-to-output weights are implemented correctly.
	- The number of epochs is chosen such the network is trained well enough to accurately make predictions but is not overfitting to the training data.
	- The number of hidden units is chosen such that the network is able to accurately predict the number of bike riders, is able to generalize, and is not overfitting.
	- The learning rate is chosen such that the network successfully converges, but is still time efficient.
	- The number of output nodes is properly selected to solve the desired problem.
	- The training loss is below 0.09 and the validation loss is below 0.18.
