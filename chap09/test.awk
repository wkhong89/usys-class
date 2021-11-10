BEGIN { FS="[^a-zA-Z]+" }
{
	for (i = 1; i <= NF; i++)
		printf "%s ", $i;
	printf "\n";
}
