<?php 

function FirstFactorial($num) {  

    if ($num >= 1 && $num <= 18) {
      
        $total = $num;  
    
        for ($i = 1; $i < $num; $i++) {
            $total = $total * $i;
        }
        
        return $total;
    }
    
    return false;
         
}