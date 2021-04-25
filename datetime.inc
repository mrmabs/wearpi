<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html>
<head>
<link rel="stylesheet" type="text/css" href="main.css" />
<script type="text/javascript">
<!--
	// get current window height
	var wHeight = window.innerHeight;
	var timeHeight = Math.round(wHeight / 2.5) + "px";
	var dateHeight = Math.round(wHeight / 5) + "px";
	
	function fixHeight(element, size) {
		document.getElementById(element).style.fontSize = size;
	}
//-->
</script>
</head>
<body>
<div id="time" style="text-align:center">
<script type="text/javascript">
<!--
        var currentTime = new Date()
        var hours = currentTime.getHours()
        var minutes = currentTime.getMinutes()

        if (minutes < 10)
        minutes = "0" + minutes

        if (hours < 10)
        hours = "0" + hours

        document.write(hours + ":" + minutes)
		
		fixHeight("time", timeHeight);
//-->
</script>
</div>
<div id="date" style="text-align:center">
<script type="text/javascript">
<!--
        var currentDate = new Date()
        var day = currentDate.getDate()
        var month = currentDate.getMonth() + 1
        var year = currentDate.getFullYear()
        document.write(day + "/" + month + "/" + year)
		fixHeight("date", dateHeight);
//-->
</script>
</div>
</body>
</html>
