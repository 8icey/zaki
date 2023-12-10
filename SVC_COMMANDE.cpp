//#include "pch.h"
#include "SVC_COMMANDE.h"
#include "paiement.h"
namespace NS_SVC {

    SVC_COMMANDE::SVC_COMMANDE(void)
    {
        this->cad = gcnew NS_Composants::CL_CAD();
        this->commande = gcnew NS_Composants::CL_mappcommande();
        this->Paiement = gcnew  NS_Composants::Paiement();
    }

    DataSet^ SVC_COMMANDE::ListeCommande(String^ Datatable)
    {
        this->DS = gcnew DataSet();
        this->DS = this->cad->getRows(this->commande->SELECT(), Datatable);
        return this->DS;
    }

    void SVC_COMMANDE::ajouter(String^ reference, int id_client, int id_adresse, String^ moyen, String^ date) {
        int IdCl;
        int i;

        this->commande->setReference(reference);
        this->commande->setIDClient(id_client);
        this->commande->setIDAdresse(id_adresse);
        this->Paiement->setMoyenPayement(moyen);
        this->Paiement->setDatePaiement(date);



        IdCl = this->cad->actionRowsID(this->commande->INSERT());
        for (i = 0; i < reference->Length - 1; i++)
        {
            this->commande->setReference(reference); i++;
            this->commande->setIDClient(id_client); i++;
            this->commande->setIDAdresse(id_adresse); i++;
            this->cad->actionRows(this->commande->INSERT());
            this->cad->actionRows(this->Paiement->INSERT());
        }
    }

    void SVC_COMMANDE::modifier(int idp, String^ dateDemission, int id_commande, String^ reference, int id_client, int id_adresse, String^ moyen, String^ date, int mon)
    {
        int i;

        this->commande->setIDCommande(id_commande);
        this->commande->setReference(reference);
        this->commande->setIDClient(id_client);
        this->commande->setDateDemission(dateDemission);
        this->Paiement->setIdPaiement(idp);
        this->Paiement->setMoyenPayement(moyen);

        this->Paiement->setDatePaiement(date);

        this->cad->actionRows(this->commande->UPDATE());

        for (i = 0; i < reference->Length - 1; i++) {
            this->commande->setIDCommande(Convert::ToInt32(id_commande)); i++;
            this->commande->setReference(reference); i++;
            this->commande->setIDClient(id_client); i++;
            this->commande->setDateDemission(dateDemission); i++;
            this->cad->actionRows(this->commande->UPDATE());
            this->cad->actionRows(this->Paiement->UPDATE());
        }
    }

    void SVC_COMMANDE::supprimer(int IdCl)
    {
        this->commande->setIDClient(IdCl);
        this->cad->actionRows(this->commande->DELETE());
    }
}