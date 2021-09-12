currentTime = () => {
  const date = new Date();
  let hour = date.getHours();
  let min = date.getMinutes();
  let sec = date.getSeconds();

  hour = updateTime(hour);
  min = updateTime(min);
  sec = updateTime(sec);

  var clock = document.getElementById('clock');
  clock.innerText = hour + " : " + min + " : " + sec;

  var a = setTimeout(() => currentTime(), 1000);
}

updateTime = (b) => {
  if (b < 10) {
    return '0' + b;
  } else {
    return b;
  }
}

currentTime();
