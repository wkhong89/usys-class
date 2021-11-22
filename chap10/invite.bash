#!/bin/bash
# 사용법: invite.bash 
# 저녁 초대 메일을 보낸다.
invitee=(lee kim choi)
for person in ${invitee[*]}
do
  echo "초대의 글 : 오늘 저녁 식사 모임에 초대합니다." | \
  mail "${person}@gmail.com"
done
