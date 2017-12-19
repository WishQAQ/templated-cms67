<?php
$z[0]=Array("global","",622,648);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",692,722);
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",759,786);
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("include","",1617,1652);
$z[3][4]['filename']="head.htm";
$z[4]=Array("sql"," \r\n        [field:content  function='cn_substr(html2text(@me),260)'/]...\r\n        ",3404,3557);
$z[4][4]['sql']="Select content from dede_arctype where id=1";
$z[5]=Array("arclist","\r\n      <div class=\"news_imc\">\r\n        <div class=\"news_imc_img\"><img src=\"[field:picname/]\" width=\"116\" height=\"85\" class=\"PicAuto\" alt=\"[field:title/]\" /></div>\r\n        <div class=\"news_imc_chaw\">\r\n          <h4><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h4>\r\n          <p>　[field:info/]...　</p>\r\n          <h6><a href=\"[field:arcurl/]\" title=\"查看更多\"><img src=\"/skin/images/ckgg.jpg\" width=\"76\" height=\"14\" alt=\"查看更多\" /></a></h6>\r\n        </div>\r\n      </div>\r\n      ",3867,4450);
$z[5][4]['limit']="0,1";
$z[5][4]['infolen']="100";
$z[5][4]['typeid']="12";
$z[6]=Array("arclist","\r\n          <li><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a> <span>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span> </li>\r\n          ",4505,4732);
$z[6][4]['limit']="1,4";
$z[6][4]['titlelen']="60";
$z[6][4]['typeid']="12";
$z[7]=Array("arclist","\r\n          <li>\r\n            <dd><a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:picname/]\" class=\"PicAuto\" width=\"224\" height=\"83\" alt=\"[field:title/]\" /></a></dd>\r\n          </li>\r\n          ",5678,5949);
$z[7][4]['row']="8";
$z[7][4]['titlelen']="32";
$z[7][4]['typeid']="15";
$z[8]=Array("arclist","\r\n          <li>\r\n            <dd><a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:picname/]\" class=\"PicAuto\" width=\"224\" height=\"83\" alt=\"[field:title/]\" /></a></dd>\r\n          </li>\r\n          ",6049,6334);
$z[8][4]['row']="8";
$z[8][4]['titlelen']="32";
$z[8][4]['typeid']="15";
$z[8][4]['orderby']="hot";
$z[9]=Array("include","",6934,6971);
$z[9][4]['filename']="footer.htm";

?>