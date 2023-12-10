#pragma once
#include "SVC_COMMANDE.h"



namespace Lens {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Commande1
	/// </summary>
	public ref class Commande1 : public System::Windows::Forms::Form
	{
	public:
		Commande1(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Commande1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ text_commande_reference;
	protected:

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ text_commande_adresse;


	private: System::Windows::Forms::TextBox^ text_commande_id;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;

	private:NS_SVC::SVC_COMMANDE^ commande;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ text_commande_montant;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ text_commande_moyen;
	private: System::Windows::Forms::TextBox^ text_commande_date;






	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->text_commande_reference = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->text_commande_adresse = (gcnew System::Windows::Forms::TextBox());
			this->text_commande_id = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->text_commande_montant = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->text_commande_moyen = (gcnew System::Windows::Forms::TextBox());
			this->text_commande_date = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(646, 111);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(603, 235);
			this->dataGridView1->TabIndex = 0;
			
			// 
			// text_commande_reference
			// 
			this->text_commande_reference->Location = System::Drawing::Point(449, 166);
			this->text_commande_reference->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->text_commande_reference->Name = L"text_commande_reference";
			this->text_commande_reference->Size = System::Drawing::Size(146, 26);
			this->text_commande_reference->TabIndex = 1;
			this->text_commande_reference->TextChanged += gcnew System::EventHandler(this, &Commande1::textBox1_TextChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(138, 293);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(146, 26);
			this->dateTimePicker1->TabIndex = 3;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Commande1::dateTimePicker1_ValueChanged);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(449, 287);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(146, 26);
			this->dateTimePicker2->TabIndex = 4;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &Commande1::dateTimePicker2_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(301, 172);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Réference";
			this->label1->Click += gcnew System::EventHandler(this, &Commande1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(301, 293);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Date émission";
			this->label2->Click += gcnew System::EventHandler(this, &Commande1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(-4, 293);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Date Livraison";
			this->label3->Click += gcnew System::EventHandler(this, &Commande1::label3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1051, 378);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(198, 29);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Ajouter";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Commande1::button2_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(540, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(304, 45);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Gestion Commande";
			this->label4->Click += gcnew System::EventHandler(this, &Commande1::label4_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(917, 379);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 26);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Commande1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(783, 379);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(128, 26);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Supprimer";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(712, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 20);
			this->label5->TabIndex = 14;
			this->label5->Click += gcnew System::EventHandler(this, &Commande1::label5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(301, 215);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 20);
			this->label7->TabIndex = 16;
			// 
			// text_commande_adresse
			// 
			this->text_commande_adresse->Location = System::Drawing::Point(138, 203);
			this->text_commande_adresse->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->text_commande_adresse->Name = L"text_commande_adresse";
			this->text_commande_adresse->Size = System::Drawing::Size(146, 26);
			this->text_commande_adresse->TabIndex = 18;
			// 
			// text_commande_id
			// 
			this->text_commande_id->Location = System::Drawing::Point(138, 169);
			this->text_commande_id->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->text_commande_id->Name = L"text_commande_id";
			this->text_commande_id->Size = System::Drawing::Size(146, 26);
			this->text_commande_id->TabIndex = 19;
			this->text_commande_id->TextChanged += gcnew System::EventHandler(this, &Commande1::textBox4_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 209);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 20);
			this->label6->TabIndex = 20;
			this->label6->Text = L"ID adresse ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 175);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 20);
			this->label8->TabIndex = 21;
			this->label8->Text = L"ID";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1003, 74);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(246, 29);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Afficher";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->	Click += gcnew System::EventHandler(this, &Commande1::button3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 247);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(68, 20);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Montant";
			// 
			// text_commande_montant
			// 
			this->text_commande_montant->Location = System::Drawing::Point(138, 241);
			this->text_commande_montant->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->text_commande_montant->Name = L"text_commande_montant";
			this->text_commande_montant->Size = System::Drawing::Size(146, 26);
			this->text_commande_montant->TabIndex = 24;
			this->text_commande_montant->TextChanged += gcnew System::EventHandler(this, &Commande1::textBox2_TextChanged_1);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(301, 206);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 20);
			this->label10->TabIndex = 25;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(307, 244);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(114, 20);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Date paiement";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(307, 206);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(126, 20);
			this->label12->TabIndex = 27;
			this->label12->Text = L"moyen paiement";
			// 
			// text_commande_moyen
			// 
			this->text_commande_moyen->Location = System::Drawing::Point(449, 203);
			this->text_commande_moyen->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->text_commande_moyen->Name = L"text_commande_moyen";
			this->text_commande_moyen->Size = System::Drawing::Size(146, 26);
			this->text_commande_moyen->TabIndex = 28;
			// 
			// text_commande_date
			// 
			this->text_commande_date->Location = System::Drawing::Point(449, 241);
			this->text_commande_date->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->text_commande_date->Name = L"text_commande_date";
			this->text_commande_date->Size = System::Drawing::Size(146, 26);
			this->text_commande_date->TabIndex = 29;
			// 
			// Commande1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1341, 452);
			this->Controls->Add(this->text_commande_date);
			this->Controls->Add(this->text_commande_moyen);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->text_commande_montant);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->text_commande_id);
			this->Controls->Add(this->text_commande_adresse);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->text_commande_reference);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Commande1";
			this->Text = L"Commande1";
			this->Load += gcnew System::EventHandler(this, &Commande1::Commande1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Commande1_Load(System::Object^ sender, System::EventArgs^ e) {

		this->commande = gcnew NS_SVC::SVC_COMMANDE();



	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->text_commande_id->Text = "";
		this->text_commande_adresse->Text = "";
		this->text_commande_montant->Text = "";
		this->text_commande_reference->Text = "";
		this->text_commande_moyen->Text = "";
		this->text_commande_date->Text = "";


		this->commande->ajouter("reference_value", 1, 2, "moyen_value", "date_value");

	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

		   private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
		   {

			   this->dataGridView1->Refresh();
			   this->oDs = this->commande->ListeCommande("R");
			   this->dataGridView1->DataSource = this->oDs;
			   this->dataGridView1->DataMember = "R";
		   }
	};
}