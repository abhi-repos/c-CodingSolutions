<?php
//product of two set is maximum.
function find_answer($A,$N)
{
    $sum = 0; 
    for ($i = 0; $i < $N; $i++)
        $sum += $A[$i];
    $dp = array();
    for ($i = 0; $i <= $N; $i++)
        $dp[$i][0] = true;
    for ($i = 1; $i <= $sum; $i++)
        $dp[0][$i] = false;
    for ($i=1; $i<=$N; $i++)
    {
        for ($j=1; $j<=$sum; $j++)
        {
            $dp[$i][$j] = $dp[$i-1][$j];
            if ($A[$i-1] <= $j)
                $dp[$i][$j] |= $dp[$i-1][$j-$A[$i-1]];
        }
    }
    if($sum%2==0)
	$v=$sum/2;
    else
	$v=($sum-1)/2;
    for ($j=$v; $j>=0; $j--)
    {
        if ($dp[$N][$j] == true)
        {
            $res = ($sum-$j)*$j;
            break;
        }
    }
    return $res;
}

$N = readline();
$A = readline();
$A = explode(" ", $A);

$out_ = find_answer($A,$N);
echo $out_;
?>
