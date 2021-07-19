<!doctype html>
<head>
<b><u><h1><center>Deletion Confirmation Page</center></h1></u></b><br><br>
</head>
<body background = "white4.jpg"><h2>
<?php
$link=mysqli_connect("localhost","root","","project");
if($link==false)
 {die("connection can't be established.".mysqli_connect_error());}
$sql="delete from gamers where mobile = '$_POST[phno]'";
 if($result=mysqli_query($link,$sql))
         #{if(mysqli_num_rows($result)>0)
   {echo "Your registration was cancelled successfully";}
  else
   {echo "no entries were registered using this phone number";}
  #}
mysqli_close($link);
?></h2>
</body>
</html>
