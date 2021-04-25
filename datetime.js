function fixHeight(element, size) {
	document.getElementById(element).style.fontSize = size;
}
// put together the text to be displayed - common function for all
function paintBodyText() {
	// get current window height
	var timeHeight = Math.round(wHeight / 2.5) + "px";
	var dateHeight = Math.round(wHeight / 5) + "px";

	// time
	var currentTime = new Date()
	var hours = currentTime.getHours()
	var minutes = currentTime.getMinutes()

	if (minutes < 10)
		minutes = "0" + minutes

	//if (hours < 10)
	//	hours = "0" + hours

	document.write(hours + ":" + minutes)

	fixHeight("time", timeHeight);

	// date
	var currentDate = new Date()
	var day = currentDate.getDate()
	var month = currentDate.getMonth() + 1
	var year = currentDate.getFullYear()
	document.write(day + "/" + month + "/" + year)
	fixHeight("date", dateHeight);
}