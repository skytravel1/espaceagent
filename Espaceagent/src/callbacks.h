#include <gtk/gtk.h>


void
on_button_deconnecter_agent_clicked    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_profil_agent_clicked         (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_supprimer_clients_par_agent_clicked
                                        (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_button_modifier_clients_par_agent_clicked
                                        (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_button_ajouter_clients_par_agent_clicked
                                        (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_button_afficher_clients_par_agent_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_identifier_admin_clicked     (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_ajouuut_client_clicked        (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_button_retour_ajout_vers_admin_clicked
                                        (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_button_modiffff_client_clicked       (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_button_retour_modif_vers_admin_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview_liste_agents_par_admin_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_modifier_profil_admin_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_valider_modif_agent_clicked  (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_valider_modif_admin_clicked  (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_edit_profil_agent_clicked    (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_cam_agents_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_rechercher_client_par_agent_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);






void
on_treeview_liste_clients_par_agent_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);



