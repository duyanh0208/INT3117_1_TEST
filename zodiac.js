function zodiac(date, month) {
  let z = "";

  if (date > 31 || date < 0 || month > 12 || month < 0) {
    return "Date or Moth undentify";
  }

  let x = month * 100 + date;

  switch(x) {
  case 101 ... 119: 
    z = "Ma Ket"; 
    break;
  case 120 ... 218:  
    z = "Bao Binh";
    break;  
  case 219 ... 320:
    z = "Song Ngu";
    break;
  case 321 ... 420:
    z = "Bach Duong";
    break;
  case 421 ... 521: 
    z = "Kim Nguu";
    break;
  case 522 ... 621:  
    z = "Song Tu";
    break;
  case 622 ... 722:
    z = "Cu Giai";
    break;
  case 723 ... 823:
    z = "Su Tu";
    break;
  case 824 ... 922:
    z = "Xu Nu";
    break;
  case 923 ... 1023:
    z = "Thien Binh";
    break;
  case 1024 ... 1122:
    z = "Bo Cap";
    break;
  case 1123 ... 1221:  
    z = "Nhan ma";
    break;
  case 1222 ... 1231:   
    z = "Ma Ket";
    break;
  }

  return z;
}
