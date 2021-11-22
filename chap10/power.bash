#!/bin/bash
# 사용법: power.bash 
# 2의 1승부터 10승까지 프린트
let i=2
let j=1
while (( $j <= 10 ))
do
   echo '2 ^' $j = $i
   let i*=2
   let j++
done
