import math

print("INITIAL TIME")

# prefix i indicates "initial"
iHour = int(input("hour (24 hour time): "))
iMinute = int(input("minute: "))
iSecond = float(input("second (can include decimal): "))

seconds = float(input("How many seconds do you want to add? "))

days = math.floor(seconds / 86400)
seconds %= 86400

hours = math.floor(seconds / 3600)
seconds %= 3600

minutes = math.floor(seconds / 60)
seconds %= 60

print('')
print("Seconds converted to DD:HH:MM:SS format:")
print(str(days) + ":" + str(hours) + ":" + str(minutes) + ":" + str(seconds))

# prefix a indicates "added"
aSecond = iSecond + seconds
aMinute = (iMinute + minutes + math.floor((iSecond + seconds) / 60))
aHour = (iHour + hours + math.floor((iMinute + minutes) / 60))

if aHour > 24:
    days += math.floor(aHour / 24)

aMinute %= 60
aSecond %= 60
aHour %= 24

print('')
print("Added to initial time:")
print(str(aHour) + ":" + str(aMinute) + ":" + str(aSecond) + ", " + str(days) + " days later.")