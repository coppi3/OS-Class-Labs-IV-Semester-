import csv
import matplotlib.pyplot as plt

params = {'legend.fontsize': 'x-large',
          'figure.figsize': (15, 5),
         'axes.labelsize': 'x-large',
         'axes.titlesize':'x-large',
         'xtick.labelsize':'x-small',
         'ytick.labelsize':'x-large'}
plt.rcParams.update(params)

logs = []
with open('log.csv', 'r') as fd:
	reader = csv.reader(fd)
	for row in reader:
		logs.append(row[0])

count = 0
timestamps = []

for el in logs:
	if(el not in timestamps):
		timestamps.append(el)

procCounter = [0]*len(timestamps)
for i in range(len(timestamps)):
	for log in logs:
		if(log==timestamps[i]):
			count+=1
	procCounter[i] = count
print(procCounter)

newTimestamps = []
for timestamp in timestamps:
	print(timestamp[3:8])
	newTimestamps.append(timestamp[3:8])

x = []
y = []
for i in range(len(newTimestamps)):
	if(i%2==0):
		x.append(newTimestamps[i])

for i in range(len(procCounter)):
	if(i%2==0):
		y.append(procCounter[i])

plt.plot(x, y)
plt.xlabel("timestamp (min:sec)", fontsize=16)
plt.ylabel("Number of prcoesses")

plt.title("1st task OS")

plt.show()
