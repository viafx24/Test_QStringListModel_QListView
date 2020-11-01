#include "FenPrincipale.h"

#include "FenPrincipale.h"

FenPrincipale::FenPrincipale()
{
    QVBoxLayout *layout = new QVBoxLayout;


    // on crée déja la liste de string: l'operateur << est surchargé: on peut s'en servir pour ajouter des QString.
    QStringList listePays;
    listePays << "France" << "Espagne" << "Italie" << "Portugal" << "Suisse";

    // puis on crée le modèle.
    QStringListModel *modele = new QStringListModel(listePays);

    // puis on crée la vue
    QListView *vue = new QListView;

    // on associe la vue avec le modèle.
    vue->setModel(modele);

    layout->addWidget(vue);

    setLayout(layout);
}
