style"gtknotebook"
{
xthickness=2
ythickness=2
GtkNotebook::tab-curvature=3
GtkNotebook::tab-overlap=1
engine"pixmap"
{
image
{
function=BOX_GAP
file="../images/notebooktop.svg"
detail="notebook"
border={1,1,0,1}
stretch=TRUE
gap_file="../images/notebookhorizontalgap.svg"
gap_border={1,1,0,0}
gap_start_file="../images/hv-line.svg"
gap_start_border={0,0,0,0}
gap_end_file="../images/hv-line.svg"
gap_end_border={0,0,0,0}
gap_side=TOP
}
image
{
function=EXTENSION
state=ACTIVE
file="../images/notebooktoptab.svg"
border={1,1,1,0}
stretch=TRUE
gap_side=BOTTOM
}
image
{
function=EXTENSION
file="../images/notebookbottom.svg"
border={1,1,3,0}
stretch=TRUE
gap_side=BOTTOM
}
image
{
function=BOX_GAP
file="../images/notebooktopactivetab.svg"
detail="notebook"
border={1,1,1,0}
stretch=TRUE
gap_file="../images/notebookhorizontalgap.svg"
gap_border={1,1,0,0}
gap_start_file="../images/hv-line.svg"
gap_start_border={0,0,0,0}
gap_end_file="../images/hv-line.svg"
gap_end_border={0,0,0,0}
gap_side=BOTTOM
}
image
{
function=EXTENSION
state=ACTIVE
file="../images/notebookbottome.svg"
border={1,1,0,1}
stretch=TRUE
gap_side=TOP
}
image
{
function=EXTENSION
file="../images/notebooktop.svg"
border={1,1,0,3}
stretch=TRUE
gap_side=TOP
}
image
{
function=BOX_GAP
file="../images/notebookleft.gif"
detail="notebook"
border={0,1,1,1}
stretch=TRUE
gap_file="../images/notebookverticalgap.gif"
gap_border={0,0,1,1}
gap_start_file="../images/hv-line.svg"
gap_start_border={0,0,0,0}
gap_end_file="../images/hv-line.svg"
gap_end_border={0,0,0,0}
gap_side=LEFT
}
image
{
function=EXTENSION
state=ACTIVE
file="../images/notebookleftactive.gif"
border={1,0,1,1}
stretch=TRUE
gap_side=RIGHT
}
image
{
function=EXTENSION
file="../images/notebookleftnormal.gif"
border={3,0,1,1}
stretch=TRUE
gap_side=RIGHT
}
image
{
function=BOX_GAP
file="../images/notebookright.gif"
detail="notebook"
border={1,0,1,1}
stretch=TRUE
gap_file="../images/notebookverticalgap.gif"
gap_border={0,0,1,1}
gap_start_file="../images/hv-line.svg"
gap_start_border={0,0,0,0}
gap_end_file="../images/hv-line.svg"
gap_end_border={0,0,0,0}
gap_side=RIGHT
}
image
{
function=EXTENSION
state=ACTIVE
file="../images/notebookrightactive.gif"
border={0,1,1,1}
stretch=TRUE
gap_side=LEFT
}
image
{
function=EXTENSION
file="../images/notebookrightnormal.gif"
border={0,3,1,1}
stretch=TRUE
gap_side=LEFT
}
image
{
function=ARROW
state=INSENSITIVE
overlay_file="../images/arrow-up-insensitive.png"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=INSENSITIVE
overlay_file="../images/arrow-down-insensitive.png"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=INSENSITIVE
overlay_file="../images/arrow-left-insensitive.png"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=INSENSITIVE
overlay_file="../images/arrow-right-insensitive.png"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=NORMAL
overlay_file="../images/arrow-up.png"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=NORMAL
overlay_file="../images/arrow-down.png"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=NORMAL
overlay_file="../images/arrow-left.png"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=NORMAL
overlay_file="../images/arrow-right.png"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=ACTIVE
overlay_file="../images/arrow-up.png"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=ACTIVE
overlay_file="../images/arrow-down.png"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=ACTIVE
overlay_file="../images/arrow-left.png"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=ACTIVE
overlay_file="../images/arrow-right.png"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=PRELIGHT
overlay_file="../images/arrow-up.png"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=PRELIGHT
overlay_file="../images/arrow-down.png"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=PRELIGHT
overlay_file="../images/arrow-left.png"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=PRELIGHT
overlay_file="../images/arrow-right.png"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
}
}
class"GtkNotebook"style"gtknotebook"


style"gtknotebookbgwhite"
{
bg[NORMAL]=shade (1.02, @window)
bg[PRELIGHT]=shade (1.02, @window)
bg[SELECTED]=shade (1.02, @window)
bg[ACTIVE]=shade (1.02, @window)
bg[INSENSITIVE]=shade (1.02, @window)
}
widget_class"*GtkNotebook*"style"gtknotebookbgwhite"
