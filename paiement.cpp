
//#include "pch.h"
#include "paiement.h"
namespace NS_Composants {

    Paiement::Paiement(void) {
        this->id_paiement = -1;
        this->datePaiement = "";
        // this->dateReglementSolde = "";
        this->moyenPayement = "RIEN";
        this->id_commande = -1;
        this->id_client = -1;
    }
    void Paiement::setmontant(int montant) {
        if (montant > 0) this->montant = montant;

    }
    int Paiement::getmontant() {
        return this->montant;
    }

    void Paiement::setIdPaiement(int Id_paiement) {
        if (Id_paiement > 0) this->id_paiement = Id_paiement;
    }

    int Paiement::getIdPaiement() {
        return this->id_paiement;
    }

    void Paiement::setDatePaiement(String^ DatePaiement) {
        if (DatePaiement != "")
        {
            this->datePaiement = DatePaiement;
        }
    }

    String^ Paiement::getDatePaiement() {
        return this->datePaiement;
    }

    void Paiement::setDateRSolde(String^ DateRSolde) {

    }

    DateTime^ Paiement::getDateRSolde() {
        return this->dateReglementSolde;
    }

    void Paiement::setMoyenPayement(String^ MoyenPayement) {
        if (MoyenPayement != "")this->moyenPayement = MoyenPayement;
    }

    String^ Paiement::getMoyenPayement() {
        return this->moyenPayement;
    }

    void Paiement::setIdCommande(int idCommande) {
        if (idCommande > 0) this->id_commande = idCommande;
    }

    int Paiement::getIdCommande() {
        return this->id_commande;
    }

    void Paiement::setIdClient(int idClient) {
        if (idClient > 0) this->id_client = idClient;
    }

    int Paiement::getIdClient() {
        return this->id_client;
    }

    String^ Paiement::SELECT() {
        return "SELECT id_paiement, date_paiement, date_reglement_solde, moyen_paiement, "
            "id_commande, id_cl "
            "FROM paiement "
            "WHERE(id_paiement = " + this->id_paiement + ");";
    }

    String^ Paiement::INSERT() {
        return "INSERT INTO paiement(date_paiement, date_reglement_solde, moyen_paiement, "
            "id_commande, id_cl) "
            "VALUES('" + this->datePaiement + "', '" + this->dateReglementSolde + "', '"
            + this->moyenPayement + "', '" + this->id_commande + "' , '" + this->id_client + ");";
    }

    String^ Paiement::UPDATE() {
        return "UPDATE TB_PAIEMENT "
            "SET datePaiement ='" + this->datePaiement + "', date_reglementSolde ='" + this->dateReglementSolde + "', "
            "moyen_paiement ='" + this->moyenPayement + "', '"
            ", id_commande =" + this->id_commande + ", id_cl ="
            + this->id_client + " "
            "WHERE(id_paiement = " + this->id_paiement + ");";
    }

    String^ Paiement::DELETE() {
        return "DELETE FROM paiement "
            "WHERE(id_paiement = " + this->id_paiement + ");";
    }
}