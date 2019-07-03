import datetime as dt
def calcPi():
  sdate = dt.datetime.now()
  determinePi()
  edate = dt.datetime.now()
  print(edate - sdate)

def determinePi():
  realPi = 3.141592653589793
  epsilon = 0.00000001
  delta = 10.0
  k = 1.0
  piValue = 0.0

  while delta > epsilon:
    powerValue = ((-1.0) ** (k+1.0))
    piValue = piValue + (powerValue / (2.0*k-1.0))
    delta = abs((piValue*4.0) - realPi)
    k += 1
  print(str(k)+' iteratons')
  return piValue * 4
calcPi()
