style"gtkmenu"{
xthickness=2
ythickness=2
fg[NORMAL]=@windowtext
fg[PRELIGHT]=@hilighttext
fg[SELECTED]=@hilighttext
fg[ACTIVE]=@hilighttext
fg[INSENSITIVE]=@inactivewindowtext
bg[NORMAL]=shade (1.2, @window)
bg[PRELIGHT]=@basebg
bg[SELECTED]=@hilight
bg[ACTIVE]=@basebg
bg[INSENSITIVE]=@basebg
text[NORMAL]=@windowtext
text[PRELIGHT]=@hilighttext
text[ACTIVE]=@hilighttext
text[SELECTED]=@hilighttext
text[INSENSITIVE]=@inactivewindowtext
engine"mist"{}}
class"GtkMenu"style"gtkmenu"

style"gtkmenuitem"{
xthickness=1
ythickness=6
fg[NORMAL]=@windowtext
fg[PRELIGHT]=@hilighttext
fg[SELECTED]=@hilighttext
fg[ACTIVE]=@hilighttext
fg[INSENSITIVE]=@inactivewindowtext
bg[NORMAL]=@basebg
bg[PRELIGHT]=@basebg
bg[SELECTED]=shade (1.1, @hilight)
bg[ACTIVE]=@basebg
bg[INSENSITIVE]=@basebg
text[NORMAL]=@windowtext
text[PRELIGHT]=@hilighttext
text[ACTIVE]=@hilighttext
text[SELECTED]=@hilighttext
text[INSENSITIVE]=@inactivewindowtext
GtkTearoffMenuItem::shadow-style=GTK_SHADOW_NONE
GtkMenuItem::shadow-style=GTK_SHADOW_NONE
GtkMenuItem::selected-shadow-type=GTK_SHADOW_OUT
GtkMenuItem::arrow-scaling=0.6
GtkMenuItem::horizontal-padding=5
engine"mist"{}}
widget_class"*GtkMenu*Item*"style"gtkmenuitem"
widget_class"*GtkRecentChooserMenu*"style"gtkmenuitem"
widget_class"*Gtk*Menu*Item*"style"gtkmenuitem"

style"gtkmenuseperatoritem"{
xthickness=0
ythickness=0
GtkWidget::wide-separators=1
GtkWidget::separator-height=0
GtkWidget::separator-width=0
engine"pixmap"{}}
widget_class"*GtkSeparatorMenuItem*"style"gtkmenuseperatoritem"
widget_class"*GtkMenu*GtkSeparator*"style"gtkmenuseperatoritem"

style"gtktearoffmenuitem"{
xthickness=0
ythickness=1
engine"pixmap"{}}
widget_class"*GtkTearoffMenuItem*"style"gtktearoffmenuitem"

