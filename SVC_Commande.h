#pragma once
#include"Commande.h"
#include"CL_CAD.h"
#include "paiement.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
namespace NS_SVC

{
    ref class SVC_COMMANDE
    {
    private:
        NS_Composants::CL_CAD^ cad;
        NS_Composants::CL_mappcommande^ commande;
        DataSet^ DS;
        NS_Composants::Paiement^ Paiement;
    public:
        SVC_COMMANDE(void);
        DataSet^ ListeCommande(String^);
        void ajouter(String^ reference, int id_client, int id_adresse, String^ moyen, String^ date);
        void modifier(int idp, String^ dateDemission, int id_commande, String^ reference, int id_client, int id_adresse, String^ moyen, String^ date, int mon);
        void supprimer(int Id);

    };
}