<?php

function process_string ($S)
{
    	$result=0;
	$l=strlen($S);	
	$str=strrev($S);
	$d = array();
	for ($i=0; $i<=$l; $i++)
	    {
            for ($j=0; $j<=$l; $j++)
        	{
            	if ($i == 0 || $j == 0)
                	$d[$i][$j] = 0;
 
	         else if ($S[$i-1] == $str[$j-1])
            		{
                	$d[$i][$j] = $d[$i-1][$j-1] + 1;
                	$result = max($result, $d[$i][$j]);
            		}
            	else $d[$i][$j] = 0;
        	}
    	  }
	return $result;
}

$S = readline();
$out_ = process_string($S);
if($out_>=2)
	{
	echo "YES\n";
	echo $out_;
	echo "\n";
	}
else
	{
	echo "NO\n";
	}
?>
