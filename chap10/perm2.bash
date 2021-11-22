#!/bin/bash
# 사용법: perm2.bash 파일*
# 파일의 사용권한과 이름을 프린트 
if [ $# -eq 0 ]
then
   echo 사용법: $0 files
   exit 1
fi
echo " 허가권 파일"

while [ $# -gt 0 ]
do
   file=$1
   if [ -f $file ]
   then
     fileinfo=`ls -l $file`
     perm=`echo "$fileinfo" |
           cut -d' ' -f1`
     echo "$perm $file"
   fi
   shift
done
