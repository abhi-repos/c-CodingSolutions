<?php
//Recursive solution
function find($A,$N,$sumcalc,$sum)
	{
	if($N==0)
		return (($sum-$sumcalc)*$sumcalc);
	return max(find($A,$N-1,$sumcalc+$A[$N-1],$sum),find($A,$N-1,$sumcalc,$sum));
	}

function find_answer($A,$N)
{
	$sum=0;
	for($i=0;$i<$N;$i++)
		$sum+=$A[$i];
	$res=find($A,$N,0,$sum);
    	return $res;
}

$N = readline();
$A = readline();
$A = explode(" ", $A);

$out_ = find_answer($A,$N);
echo $out_;
?>
