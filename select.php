<!doctype html>
<head>
<b><u><h1><center>List of registered gamers for the upcoming event</center></h1></u></b><br><br>
</head>
<body background = "white.jpg"><center><h4>
<?php
$link=mysqli_connect("localhost","root","","project");
if($link==false)
 {die("connection can't be established.".mysqli_connect_error());}
$sql="select * from gamers order by age";
if($result=mysqli_query($link,$sql))
 {if(mysqli_num_rows($result)>0)
  {echo "<table border=1>";
  echo "<tr>";
  echo "<th>Gamer ID</th>";
  echo "<th>Name</th>";
  echo "<th>Age</th>";
  echo "<th>Game</th>";
  echo "<th>Platform</th>";
  echo "</tr>";
  while($row = mysqli_fetch_array($result))
  {echo "<tr>";
  echo "<td>" . $row['id'] . "</td>";
  echo "<td>" . $row['name'] . "</td>"; 
  echo "<td>" . $row['age'] . "</td>";
  echo "<td>" . $row['game'] . "</td>";
  echo "<td>" . $row['platform'] . "</td>";
  echo "</tr>";}
  echo "</table>";
  mysqli_free_result($result);}
 else
  {echo "no entries were found";}
 }
else
 {echo "could not execute $sql".mysqli_error($link);}
mysqli_close($link);
?></h4></center>
</body>
</html>
