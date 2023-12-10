#pragma once

using namespace System;

namespace NS_Composants
{
    ref class CL_mappcommande
    {
    private:
        int ID_commande;
        String^ dateDemission;
        String^ reference;
        String^ dateLivraison;
        String^ dateSolde;
        int ID_adresse;
        int ID_client;

    public:
        CL_mappcommande(void);

        String^ SELECT(void);
        String^ INSERT(void);
        String^ UPDATE(void);
        String^ DELETE(void);

        void setIDCommande(int);
        void setDateDemission(String^);
        void setReference(String^);
        void setDateLivraison(String^);
        void setDateSolde(String^);
        void setIDAdresse(int);
        void setIDClient(int);

        int getIDClient(void);
        int getIDCommande(void);
        int getIDAdresse(void);

        String^ getDateDemission(void);
        String^ getReference(void);
        String^ getDateLivraison(void);
        String^ getDateSolde(void);
    };
}