<?php

$T = readline();
for($tc = 0 ; $tc < $T ; $tc++)
    {
        $A = readline();
        $len=strlen($A);
        $Q = readline();
        
        for($i=0; $i < $Q; $i++)
        {$Queries = array();
        	$Queries=explode(" ", readline());
        	if($Queries[0]==0)
        		{
        		$sum=0;
        		$x=$Queries[2]-$Queries[1];
        		for($j=$Queries[1];$j<=$Queries[2];$j++)
        			{
        			$val=pow(2,$x);
           			$sum+=($A[$j]*$val);
                  		$x--;
        			}
        		$val=$sum%5;
        		echo "$val\n";
        		}
        	else
        		{
        		$A[$Queries[1]]=$Queries[2];	
        		}
        }
         
        
    }
?>



