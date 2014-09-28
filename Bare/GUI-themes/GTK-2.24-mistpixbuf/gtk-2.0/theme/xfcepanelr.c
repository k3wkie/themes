style "xfcepanelwindow"{
xthickness=2
ythickness=0
GtkButton::inner-border={2,2,0,0}
GtkButton::image-spacing=5
XfcePanelImage::force-gtk-icon-sizes=true
#XfceTasklist::minimized-icon-lucency=0
fg[NORMAL]="grey"
fg[SELECTED]="white"
fg[PRELIGHT]="white"
fg[ACTIVE]=shade (0.9,"white")
fg[INSENSITIVE]="grey"
bg[NORMAL]="black"
bg[PRELIGHT]="black"
bg[SELECTED]="black"
bg[ACTIVE]="black"
bg[INSENSITIVE]="black"
base[NORMAL]="black"
base[PRELIGHT]="black"
base[ACTIVE]="black"
base[SELECTED]="black"
base[INSENSITIVE]="black"
text[NORMAL]="white"
text[PRELIGHT]="white"
text[ACTIVE]="white"
text[SELECTED]="white"
text[INSENSITIVE]="grey"
engine"pixmap"{
image{
function=BOX
file="../images/transparent.png"
stretch=TRUE}
image{
function=SHADOW
shadow=IN
file="../images/transparent.png"
stretch=TRUE}
image{
function=SHADOW
shadow=ETCHED_IN
file="../images/transparent.png"
stretch=TRUE}
image{
function=SHADOW
shadow=OUT
file="../images/transparent.png"
stretch=TRUE}
image{
function=SHADOW
shadow=ETCHED_OUT
file="../images/transparent.png"
stretch=TRUE}
image{
function=SHADOW
shadow=NONE
file="../images/transparent.png"
stretch=TRUE}}}
widget_class "*XfcePanelWindow*" style "xfcepanelwindow"
widget "*XfcePanelWindow*" style "xfcepanelwindow"
widget_class "*XfcePanelWindow*Image*" style "gtkimagelabelbold"
widget_class "*XfcePanelWindow*Label*" style "gtkimagelabelbold"
widget_class "*XfcePanel*ClockPlugin*" style "gtkimagelabelbold"
widget_class "*XfcePanelWindow*Image*" style "gtkimagelabelbold"
widget_class "*Xfce*Plugin*Image*" style "gtkimagelabelbold"
widget_class "*Xfce*ActionsPlugin*Image*" style "gtkimagelabelbold"
widget_class "*Xfce*SystrayPlugin*Image*" style "gtkimagelabelbold"
class "XfcePanelImage" style "gtkimagelabelbold"
