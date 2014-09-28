style"gtkiconview"
{
bg[SELECTED]=@hilight
text[SELECTED]=@hilighttext
GtkIconView::selection-box-alpha=20
GtkIconView::selection-box-color=@hilight
}
widget_class"*GtkIconView*"style"gtkiconview"

style "all"{
xthickness=0
ythickness=0
GtkWidget::focus_padding=4}
widget_class "*ExoIconView"style "all"
