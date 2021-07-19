<!doctype html>
<head>
<b><u><h1><center>Updation Confirmation Page</center></h1></u></b><br><br>
</head>
<body background = "white4.jpg"><h3>
<?php
$link=mysqli_connect("localhost","root","","project");
if($link==false)
 {die("connection can't be established.".mysqli_connect_error());}
$sql="update gamers set name = '$_POST[name]',age = '$_POST[age]',game = '$_POST[game]',platform = '$_POST[platform]' where mobile = '$_POST[phno]'";
 if($result=mysqli_query($link,$sql))
   echo "Your information was updated successfully";
mysqli_close($link);
?></h3>
</body>
</html>
