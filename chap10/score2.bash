#!/bin/bash
# 사용법: score2.bash 
# 점수에 따라 학점을 결정하여 프린트한다.
echo -n '점수 입력: '
read score
let grade=$score/10
case $grade in
   "10" | "9") echo A;;
   "8") echo B;;
   "7") echo C;;
   *) echo 노력 요함;;
esac
