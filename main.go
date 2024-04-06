package main

// #cgo CFLAGS: -I./box
// #cgo LDFLAGS: -L${SRCDIR}/box -lcgo_box
// #include "cgo_box.h"
import "C"
import "fmt"

func main() {
	fmt.Println("盒子体积：", C.Box_volume(C.double(2), C.double(3), C.double(4)))
}
