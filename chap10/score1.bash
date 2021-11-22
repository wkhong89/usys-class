#!/bin/bash
# 사용법: score1.bash 
# 점수에 따라 학점을 결정하여 프린트
echo -n '점수 입력: '
read score
if (( $score >= 90 ))
then
   echo A
elif (( $score >= 80 ))
then
   echo B
elif (( $score >= 70 ))
then
   echo C
else
   echo 노력 요함
fi
