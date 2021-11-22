#!/bin/bash
# 사용법: count1.bash [디렉터리] 
# 대상 디렉터리 내의 파일과 서브디렉터리 개수를 프린트
if [ $# -eq 0 ]
then
   dir="."
else
   dir=$1
fi
echo -n $dir 내의 파일과 서브디렉터리 개수:  
ls $dir | wc -l
