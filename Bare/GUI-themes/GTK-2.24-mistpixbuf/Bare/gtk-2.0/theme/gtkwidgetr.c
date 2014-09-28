style"gtkwidget"{
xthickness=1
ythickness=1
fg[NORMAL]=@windowtext
fg[PRELIGHT]=@windowtext
fg[SELECTED]=@windowtext
fg[ACTIVE]=@windowtext
fg[INSENSITIVE]=@inactivewindowtext
bg[NORMAL]=@window
bg[PRELIGHT]=@window
bg[SELECTED]=@window
bg[ACTIVE]=@window
bg[INSENSITIVE]=@window
base[NORMAL]=@basebg
base[PRELIGHT]=@basebg
base[ACTIVE]=@hilight
base[SELECTED]=@hilight
base[INSENSITIVE]=@basebg
text[NORMAL]=@basetext
text[PRELIGHT]=@basetext
text[ACTIVE]=@hilighttext
text[SELECTED]=@hilighttext
text[INSENSITIVE]=@inactivewindowtext
XfcePanelWindow::autohide-size=1
XfcePanelWindow::popup-delay=450
XfcePanelWindow::popdown-delay=50
GtkArrow::arrow-scaling=1.0
GtkOptionMenu::indicator-size={5,5}
GtkWidget::focus-line-width=0
GtkWidget::focus-line-pattern="\5\3"
GtkWidget::focus-padding=0
GtkWidget::interior-focus=1
GtkWidget::link_color=@url
GtkHTML::link-color=@url
GtkIMHtml::hyperlink-color=@url
GnomeHRef::link-color=@url
GtkWidget::visited-link-color=@visitedurl
GtkHTML::visited-link-color=@visitedurl
GtkIMHtml::hyperlink-visited-color=@visitedurl
GtkHandleBox::shadow-type=GTK_SHADOW_NONE
GtkHandleBox::shadow=GTK_SHADOW_NONE
GtkTreeView::even-row-color=@basebg
GtkTreeView::odd-row-color=@aternatebase
GtkWidget::wide-separators=1
GtkWidget::separator-height=0
GtkWidget::separator-width=0
GtkWindow::resize-grip-height=11
GtkWindow::resize-grip-width=11
engine"pixmap"{
image{
function=SHADOW
shadow=OUT
file="../images/transparent.png"
border={1,1,1,1}
stretch=TRUE}
image{
function=SHADOW
shadow=ETCHED_OUT
file="../images/transparent.png"
border={1,1,1,1}
stretch=TRUE}
image{
function=SHADOW
shadow=IN
file="../images/shadow.svg"
border={1,1,1,1}
stretch	=TRUE}
image{
function=SHADOW
shadow=ETCHED_IN
file="../images/shadow.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=SHADOW
shadow=NONE
file="../images/transparent.png"
stretch=TRUE}
image{
function=BOX
detail="buttondefault"
file="../images/transparent.png"
stretch=TRUE}
image{
function=FOCUS
file="../images/transparent.png"
stretch=TRUE}
##qgtkstyle will fail here
#image{
#function=BOX
#detail="hseparator"
#file="../images/hv-line.svg"
#stretch=TRUE}
#image{
#function=BOX
#detail="vseparator"
#file="../images/hv-line.svg"
#stretch=TRUE}
#image{
#function=HLINE
#detail="hseparator"
#file="../images/hv-line.svg"
#stretch=TRUE}
#image{
#function=VLINE
#detail="vseparator"
#file="../images/hv-line.svg"
#stretch=TRUE}
image{
function=BOX
detail="hseparator"
file="../images/transparent.png"
stretch=TRUE}
image{
function=BOX
detail="vseparator"
file="../images/transparent.png"
stretch=TRUE}
image{
function=HLINE
detail="hseparator"
file="../images/transparent.png"
stretch=TRUE}
image{
function=VLINE
detail="vseparator"
file="../images/transparent.png"
stretch=TRUE}
image{
function=HANDLE
detail="handlebox"
overlay_file="../images/vhandle.svg"
overlay_stretch=FALSE
orientation=VERTICAL}
image{
function=HANDLE
detail="handlebox"
overlay_file="../images/hhandle.svg"
orientation=HORIZONTAL
overlay_stretch=FALSE}
image{
function=HANDLE
orientation=VERTICAL
detail="paned"
overlay_file="../images/transparent.png"
overlay_stretch=FALSE}
image{
function=HANDLE
orientation=HORIZONTAL
detail="paned"
overlay_file="../images/transparent.png"
overlay_stretch=FALSE}
image{
function=SHADOW_GAP
file="../images/shadow-gap.svg"
border={1,1,1,1}
stretch=TRUE
gap_start_file="../images/shadow-gap_gap.svg"
gap_start_border={0,0,0,0}
gap_end_file="../images/shadow-gap_gap.svg"
gap_end_border={0,0,0,0}
}}}
class"*GtkWidget*"style"gtkwidget"
widget_class"*GtkWidget*"style"gtkwidget"
widget"*GtkWidget*"style"gtkwidget"

style"gtkwidgetlabelimage"{
engine"mist"{}}
widget_class"*GtkLabel"style"gtkwidgetlabelimage"
widget_class"*GtkImage"style"gtkwidgetlabelimage"
style"gtkimagelabel"{
font_name="regular"
engine"mist"{}}
style"gtkimagelabelbold"{
font_name="bold"
engine"mist"{}}