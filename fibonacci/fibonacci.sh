#!/bin/bash

function fibonacci(){
	rlt=1
	if [ $1 -lt 2 ]
	then
	let a=$1-1;	
	let b=$1-2;

	let ar=fibonacci $a
	let br=fibonacci $b

	let rlt="$ar+$br"
	return $rlt
	fi
}

n=3
let r=fibonacci $n
#r=$?
echo $r

exit 0
