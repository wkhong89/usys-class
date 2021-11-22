#!/bin/bash
# 사용법: menu.bash 
# 메뉴에 따라 해당 명령어를 실행한다. 

echo 명령어 메뉴
cat << MENU
     d : 날짜 시간
     l : 현재 디렉터리 내용
     w : 사용자 보기
     q : 끝냄
MENU
stop=0

while (($stop == 0))
do
  echo -n '? '
  read reply
  case $reply in
    "d") date;;
    "l") ls;;
    "w") who;;
    "q") stop=1;;
    *) echo 잘못된 선택;;
  esac
done

