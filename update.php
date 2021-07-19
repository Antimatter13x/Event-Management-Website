<!doctype html>
<head>
<script>
function myFunction() 
{document.getElementById("message").innerHTML = "OTP Sent, validity 60 seconds";}
</script>
<u><b><h1><center>Update Information Page</center></h1>
</b></u></head><br>
<body background = "white3.jpg"><center><h3><p style = "text-align:center;">
<form action="updateres.php" method="post">
Name :
<input type="text" name="name"><br><br>
Age:
<input type="number" name="age"><br><br>
Game:
<select name="game">
<option value="PUBG">PUBG</option>
<option value="CALL OF DUTY">CALL OF DUTY</option>
<option value="FORTNITE">FORTNITE</option>
<option value="GTA 5">GTA 5</option>
</select><br><br>
Platform:
<select name="platform">
<option value="ANDROID">ANDROID</option>
<option value="IOS">IOS</option>
<option value="PS4">PS4</option>
<option value="XBOX 1">XBOX 1</option>
</select><br><br>
Enter registered mobile number:
<input type="number" name="phno"><button type="button" onclick="send()">Send OTP</button>
<p id="message"></p>
Enter OTP:
<input type="number" name="password"><br><br>
<input type="submit" value="Update Information"><br>
</form></h3></center></p>
</body>
</html>
