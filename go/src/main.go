package main

import (
	"app/arithmatic"
	"fmt"
)

func main() {
	fmt.Printf("This is returning the actual code %d", arithmatic.Add(12, 14)+arithmatic.Sub(14, 12))
}
