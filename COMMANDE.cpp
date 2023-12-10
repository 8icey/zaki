//#include "pch.h"
#include "COMMANDE.h"
#include <iostream>

namespace NS_Composants
{
    CL_mappcommande::CL_mappcommande(void)
    {
        this->ID_commande = -1;
        this->dateDemission = "RIEN";
        this->reference = "String";
        this->dateLivraison = "RIEN";
        this->dateSolde = "RIEN";
        this->ID_adresse = -1;
        this->ID_client = -1;
    }

    String^ CL_mappcommande::SELECT(void)
    {
        return "SELECT * from Commande;";
    }

    String^ CL_mappcommande::INSERT(void)
    {
        return "INSERT INTO TB_COMMANDE " +
            "(dateDemission, reference, dateLivraison, dateSolde, id_adresse, id_client) " +
            "VALUES('" + this->getDateDemission() + "', '" + this->getReference() + "', '" + this->getDateLivraison() + "', '" +
            this->getDateSolde() + "', " + this->getIDAdresse() + ", " + this->getIDClient() + ");SELECT @@IDENTITY;";
    }

    String^ CL_mappcommande::UPDATE(void)
    {
        return "UPDATE TB_COMMANDE " +
            "SET dateDemission = '" + this->getDateDemission() + "', reference = '" + this->getReference() + "', " +
            "dateLivraison = '" + this->getDateLivraison() + "', dateSolde = '" + this->getDateSolde() + "', " +
            "id_adresse = " + this->getIDAdresse() + ", id_client = " + this->getIDClient() + " " +
            "WHERE(id_commande = " + this->getIDCommande() + ");";
    }

    String^ CL_mappcommande::DELETE(void)
    {
        return "DELETE FROM TB_COMMANDE " +
            "WHERE(id_commande = " + this->getIDCommande() + ");";
    }

    void CL_mappcommande::setIDCommande(int id)
    {
        if (id > 0)
        {
            this->ID_commande = id;
        }
    }

    void CL_mappcommande::setDateDemission(String^ date)
    {
        this->dateDemission = date;
    }

    void CL_mappcommande::setReference(String^ ref)
    {
        this->reference = ref;
    }

    void CL_mappcommande::setDateLivraison(String^ date)
    {
        this->dateLivraison = date;
    }

    void CL_mappcommande::setDateSolde(String^ date)
    {
        this->dateSolde = date;
    }

    void CL_mappcommande::setIDAdresse(int id)
    {
        if (id > 0)
        {
            this->ID_adresse = id;
        }
    }

    void CL_mappcommande::setIDClient(int id)
    {
        if (id > 0)
        {
            this->ID_client = id;
        }
    }

    int CL_mappcommande::getIDClient(void)
    {
        return this->ID_client;
    }

    int CL_mappcommande::getIDCommande(void)
    {
        return this->ID_commande;
    }

    int CL_mappcommande::getIDAdresse(void)
    {
        return this->ID_adresse;
    }

    String^ CL_mappcommande::getDateDemission(void)
    {
        return this->dateDemission;
    }

    String^ CL_mappcommande::getReference(void)
    {
        return this->reference;
    }

    String^ CL_mappcommande::getDateLivraison(void)
    {
        return this->dateLivraison;
    }

    String^ CL_mappcommande::getDateSolde(void)
    {
        return this->dateSolde;
    }
}