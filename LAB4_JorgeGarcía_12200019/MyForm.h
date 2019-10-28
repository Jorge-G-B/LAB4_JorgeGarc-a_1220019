#pragma once
#include "Pokemon.h"
#include "NodoL.h"
#include "Lista.h"

namespace LAB4JorgeGarcía12200019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System::IO;
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnOBSGeneracion;
	protected:

	private: System::Windows::Forms::RichTextBox^  rtBMenú;
	private: System::Windows::Forms::Button^  btnOSSGeneracion;
	private: System::Windows::Forms::Button^  btnOQSGeneracion;


	private: System::Windows::Forms::Button^  btnIniciar;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  btnOSSNacional;
	private: System::Windows::Forms::Button^  btnOBSNacional;
	private: System::Windows::Forms::Button^  btnOQSNacional;

	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnOBSGeneracion = (gcnew System::Windows::Forms::Button());
			this->rtBMenú = (gcnew System::Windows::Forms::RichTextBox());
			this->btnOSSGeneracion = (gcnew System::Windows::Forms::Button());
			this->btnOQSGeneracion = (gcnew System::Windows::Forms::Button());
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnOSSNacional = (gcnew System::Windows::Forms::Button());
			this->btnOBSNacional = (gcnew System::Windows::Forms::Button());
			this->btnOQSNacional = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnOBSGeneracion
			// 
			this->btnOBSGeneracion->BackColor = System::Drawing::Color::Transparent;
			this->btnOBSGeneracion->Location = System::Drawing::Point(36, 26);
			this->btnOBSGeneracion->Name = L"btnOBSGeneracion";
			this->btnOBSGeneracion->Size = System::Drawing::Size(145, 20);
			this->btnOBSGeneracion->TabIndex = 0;
			this->btnOBSGeneracion->Text = L"Ordenar Bubble Sort";
			this->btnOBSGeneracion->UseVisualStyleBackColor = false;
			// 
			// rtBMenú
			// 
			this->rtBMenú->BackColor = System::Drawing::Color::White;
			this->rtBMenú->Location = System::Drawing::Point(30, 153);
			this->rtBMenú->Name = L"rtBMenú";
			this->rtBMenú->Size = System::Drawing::Size(330, 336);
			this->rtBMenú->TabIndex = 1;
			this->rtBMenú->Text = L"";
			// 
			// btnOSSGeneracion
			// 
			this->btnOSSGeneracion->BackColor = System::Drawing::Color::Transparent;
			this->btnOSSGeneracion->Location = System::Drawing::Point(36, 52);
			this->btnOSSGeneracion->Name = L"btnOSSGeneracion";
			this->btnOSSGeneracion->Size = System::Drawing::Size(145, 30);
			this->btnOSSGeneracion->TabIndex = 2;
			this->btnOSSGeneracion->Text = L"Ordenar BogoSort";
			this->btnOSSGeneracion->UseVisualStyleBackColor = false;
			// 
			// btnOQSGeneracion
			// 
			this->btnOQSGeneracion->BackColor = System::Drawing::Color::Transparent;
			this->btnOQSGeneracion->Location = System::Drawing::Point(36, 88);
			this->btnOQSGeneracion->Name = L"btnOQSGeneracion";
			this->btnOQSGeneracion->Size = System::Drawing::Size(145, 20);
			this->btnOQSGeneracion->TabIndex = 3;
			this->btnOQSGeneracion->Text = L"Ordenar QuickSort";
			this->btnOQSGeneracion->UseVisualStyleBackColor = false;
			// 
			// btnIniciar
			// 
			this->btnIniciar->BackColor = System::Drawing::Color::Transparent;
			this->btnIniciar->Location = System::Drawing::Point(541, 194);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(145, 20);
			this->btnIniciar->TabIndex = 4;
			this->btnIniciar->Text = L"Iniciar";
			this->btnIniciar->UseVisualStyleBackColor = false;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &MyForm::btnIniciar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->btnOSSGeneracion);
			this->groupBox1->Controls->Add(this->btnOBSGeneracion);
			this->groupBox1->Controls->Add(this->btnOQSGeneracion);
			this->groupBox1->Location = System::Drawing::Point(510, 367);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(206, 131);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ordenar por generación";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->btnOSSNacional);
			this->groupBox2->Controls->Add(this->btnOBSNacional);
			this->groupBox2->Controls->Add(this->btnOQSNacional);
			this->groupBox2->Location = System::Drawing::Point(510, 220);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(206, 131);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ordenar por número nacional";
			// 
			// btnOSSNacional
			// 
			this->btnOSSNacional->BackColor = System::Drawing::Color::Transparent;
			this->btnOSSNacional->Location = System::Drawing::Point(36, 52);
			this->btnOSSNacional->Name = L"btnOSSNacional";
			this->btnOSSNacional->Size = System::Drawing::Size(145, 30);
			this->btnOSSNacional->TabIndex = 2;
			this->btnOSSNacional->Text = L"Ordenar BogoSort";
			this->btnOSSNacional->UseVisualStyleBackColor = false;
			// 
			// btnOBSNacional
			// 
			this->btnOBSNacional->BackColor = System::Drawing::Color::Transparent;
			this->btnOBSNacional->Location = System::Drawing::Point(36, 26);
			this->btnOBSNacional->Name = L"btnOBSNacional";
			this->btnOBSNacional->Size = System::Drawing::Size(145, 20);
			this->btnOBSNacional->TabIndex = 0;
			this->btnOBSNacional->Text = L"Ordenar BubbleSort";
			this->btnOBSNacional->UseVisualStyleBackColor = false;
			// 
			// btnOQSNacional
			// 
			this->btnOQSNacional->BackColor = System::Drawing::Color::Transparent;
			this->btnOQSNacional->Location = System::Drawing::Point(36, 88);
			this->btnOQSNacional->Name = L"btnOQSNacional";
			this->btnOQSNacional->Size = System::Drawing::Size(145, 20);
			this->btnOQSNacional->TabIndex = 3;
			this->btnOQSNacional->Text = L"Ordenar QuickSort";
			this->btnOQSNacional->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 567);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnIniciar);
			this->Controls->Add(this->rtBMenú);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void QuickSortN(Pokemon *array, int start, int end) {
		int pivot;
		if (start < end) {
			pivot = DivideN(array, start, end);

			QuickSortN(array, start, end);
			QuickSortN(array, pivot+1, end);
		}
	}
	private: System::Int16 DivideN(Pokemon *array, int start, int end) {
		int left;
		int right;
		Pokemon *pivot;
		Pokemon *temp;

		pivot = &array[start];
		left = start;
		right = end;

		while (left < right) {
			while ((&array[right])->NNacional > pivot->NNacional) {
				right--;
			}
			while ((left < right) && ((&array[left])->NNacional <= pivot->NNacional)) {
				left++;
			}
			if (left < right) {
				temp = &array[left];
				array[left] = array[right];
				array[left] = *temp;
			}
		}

		temp = &array[right];
		array[right] = array[start];
		array[start] = *temp;

		return right;
	}
	private: System::Void BurbujaN(Pokemon A[], int n) {
		Pokemon aux;
		for (int i = 0; i < n-1; i++)
		{
			for (int j= i+1; j < n; j++)
			{
				if ((&A[i])->NNacional > (&A[j])->NNacional){
					aux = A[i];
					A[i] = A[j];
					A[j] = aux;

				}
			}
		}
	}
	private: System::Boolean IsSortedN(Pokemon* data, int count) {
		while (--count >= 1) {
			if ((&data[count])->NNacional < (&data[count - 1])->NNacional) {
				return false;
			}
		}
		return true;
	}
	private: System::Void BogoSortN(Pokemon* data, int count) {
		 while (!IsSortedN(data, count)) {
			 ShuffleN(data, count);
		 }
	
}
	/* */private: System::Void ShuffleN(Pokemon *data, int count) {
		Pokemon temp;
		int rnd;
		Random^ rand = gcnew Random();
		for (int i = 0; i < count; i++)
		{
			rnd = rand->Next(count) % count;
			temp = data[i];
			data[rnd] = temp;
			data[i] = data[rnd];
			data[rnd] = temp;
		}
	}
	private: System::Void btnIniciar_Click(System::Object^  sender, System::EventArgs^  e) {
		StreamReader^ streamReader = gcnew StreamReader("..//Pokemon.txt");
		String^ textoDelArchivo = streamReader->ReadToEnd();
		Pokemon * pkm = new Pokemon();
		
		
	}
	private: System::Void ReadFile(String^ruta, String^ texto) {
		StreamReader^ streamReader = gcnew StreamReader(ruta);
		texto = streamReader->ReadToEnd();
		streamReader->Close();
	}
	private: System::Void Split(String^TextFromFile) {
		array <String^>^ arregloString = TextFromFile->Split();
	}
	
};


}