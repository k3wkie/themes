style"gtkentry"{
xthickness=1
ythickness=1
fg[NORMAL]=@windowtext
fg[PRELIGHT]=@windowtext
fg[SELECTED]=@windowtext
fg[ACTIVE]=@windowtext
fg[INSENSITIVE]=@inactivewindowtext
bg[NORMAL]=@button
bg[PRELIGHT]=@button
bg[SELECTED]=@activebutton
bg[ACTIVE]=@activebutton
bg[INSENSITIVE]=@button
text[NORMAL]=@buttontext
text[PRELIGHT]=@buttontext
text[SELECTED]=@buttontext
text[ACTIVE]=@buttontext
text[INSENSITIVE]=@inactivewindowtext
GtkEntry::inner-border={2,2,1,1}
engine"pixmap"{
image{
function=SHADOW
shadow=OUT
file="../images/entry-normal.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=SHADOW
shadow=IN
file="../images/entry-normal.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=SHADOW
shadow=ETCHED_OUT
file="../images/entry-normal.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=SHADOW
shadow=ETCHED_IN
file="../images/entry-normal.svg"
border={1,1,1,1}
stretch=TRUE}}}
widget"*GtkEntry*"style"gtkentry"
class"*GtkEntry*"style"gtkentry"
