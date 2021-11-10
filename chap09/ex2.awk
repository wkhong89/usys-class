BEGIN { print "파일 시작" }
{
	printf "line %d: %d\n", NR, NF;
	//line++;
	word += NF;
}
END { printf "줄 수 = %d, 단어 수 = %d\n", NR, word }
