package main

import (
	"log"
	"math"
	"time"
)

func main() {
	log.Println("Pi")
	stime := time.Now()
	calcPi()
	duration := time.Since(stime)
	log.Printf("Duration: %f s", duration.Seconds())
}

func calcPi() float64 {
	realPi := 3.141592653589793
	epsilon := 0.00000001
	delta, k := 10.0, 1.0
	piValue := 0.0
	for delta > epsilon {
		piValue += math.Pow(-1.0, k+1.0) / (2*k - 1)
		delta = math.Abs(piValue*4 - realPi)
		k++
	}
	log.Printf("Returning after %f iterations\n", k)
	return piValue * 4.0
}
