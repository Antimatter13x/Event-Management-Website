<!doctype html>
<head>
<b><u><h1><center>Registration Confirmation Page</h1></u></b><br><br>
</head>
<body background = "white2.jpg">
<h2><?php
$link=mysqli_connect("localhost","root","","project");
if($link==false)
 {die("connection can't be established.".mysqli_connect_error());}
$sql="insert into gamers values ('$_POST[id]','$_POST[name]','$_POST[age]','$_POST[game]','$_POST[platform]','$_POST[phno]')";
 if($result=mysqli_query($link,$sql))
   echo "Your entry was registered successfully";
mysqli_close($link);
?>
</body></h2></centre>
</html>
