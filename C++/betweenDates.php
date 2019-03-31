<?php	
/*
 * Get all users registered after $start and before $end (dates in yyyy-mm-dd format)
 *
 * Based on my answer to this question: http://wordpress.stackexchange.com/questions/51485/how-can-i-query-all-users-who-registered-today/51492#51492
 *
 * @param (string) $start - start date in yyyy-mm-dd format
 * @param (string) $end - end date in yyyy-mm-dd format
 */
 
function wpse51485_get_users_registered($start='', $end='' ){
     global $wpdb;
 
     if( empty($start) )
          $date = date('Y-m-d');
 
     if ( empty($end) )
          $end = $start;
 
     //Should probably validate input and throw up error. In any case, the following ensures the query is safe.
 
     $start_dt = new DateTime($start. ' 00:00:00');
     $s = $start_dt->format('Y-m-d H:i:s');
 
     $end_dt = new DateTime($end.' 23:59:59');
     $e = $end_dt->format('Y-m-d H:i:s');
 
     $sql = $wpdb->prepare("SELECT wp_users.* FROM wp_users WHERE 1=1 AND CAST(user_registered AS DATE) BETWEEN %s AND %s ORDER BY user_login ASC",$s,$e);
 
     $users = $wpdb->get_results($sql);
 
     return $users;
}
?>
