#pragma once
using namespace System;
namespace NS_Composants {
    public ref class Paiement {
    private:
        int id_paiement;
        String^ datePaiement;
        DateTime^ dateReglementSolde;
        String^ moyenPayement;
        int id_commande;
        int id_client;
        int montant;
    public:
        Paiement();
        void setIdPaiement(int);
        int getIdPaiement(void);
        void setDatePaiement(String^ DatePaiement);
        String^ getDatePaiement();
        void setDateRSolde(String^ DateRSolde);
        DateTime^ getDateRSolde();
        void setMoyenPayement(String^ MoyenPayement);
        String^ getMoyenPayement();
        void setIdCommande(int idCommande);
        int getIdCommande();
        void setIdClient(int idClient);
        int getIdClient();
        void setmontant(int);
        int getmontant();
        String^ SELECT();
        String^ INSERT();
        String^ UPDATE();
        String^ DELETE();
    };

}