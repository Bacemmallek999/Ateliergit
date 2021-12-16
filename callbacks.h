#include <gtk/gtk.h>
  GtkWidget *acceuil;
  GtkWidget *gestion;




struct Date1
{
int jour;
int mois;
int annee;
}Date1;




struct Date2
{
int jour;
int mois;
int annee;
}Date2;



typedef struct produit produit;
struct produit{
char id[30];
char nom[30];
char prix[30];
char date_entree[30];
char date_expiration[30];
char fournisseur[30]; 
char rangement[30];
char quantity[30];
struct Date1 date1;
struct Date2 date2;
};

int i,j,k;
void
on_AcceuilGestion_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);
void
on_GestionAcceuil_clicked              (GtkButton       *button,
                                        gpointer         user_data);


void
on_Ajouterproduit_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_Modifierproduit_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_Supprimerproduit_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_chercherproduit_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_checkbuttonetat_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobuttonrep_toggled              (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobuttonenstock_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
