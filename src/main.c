/* CC0 */

#include <config.h>
#include <glib/gi18n-lib.h>
#include <gtk/gtk.h>
#include <locale.h>


static void
activate_cb (GApplication *app)
{
    GtkWidget *win = gtk_application_window_new (GTK_APPLICATION (app));
    GtkWidget *label = gtk_label_new (_("Hello, GTK+"));
    gtk_container_add (GTK_CONTAINER (win), label);
    gtk_widget_show_all (win);
}


int
main (int argc, char **argv)
{
    setlocale (LC_ALL, "");
    bindtextdomain (GETTEXT_PACKAGE, LOCALEDIR);
    textdomain (GETTEXT_PACKAGE);

    GtkApplication *app = gtk_application_new (NULL, G_APPLICATION_FLAGS_NONE);
    g_signal_connect (app, "activate", G_CALLBACK (activate_cb), NULL);
    int status = g_application_run (G_APPLICATION (app), argc, argv);
    g_object_unref (app);

    return status;
}
