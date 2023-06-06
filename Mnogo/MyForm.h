#pragma once
#include"operations.h"

namespace Mnogo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			br = gcnew SolidBrush(Color::Blue);
			pbPlot->Image = gcnew Bitmap(pbPlot->Width, pbPlot->Height);
			draw_pn = gcnew Pen(Color::Red, 3);
			br_pol = gcnew SolidBrush(Color::Red);

			ar = gcnew array<PointF>(1);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbPlot;
	protected:

	protected:

	private: System::Windows::Forms::ListBox^ lby;

	private: System::Windows::Forms::ListBox^ lbx;
	private: System::Windows::Forms::Label^ lbCoord;
	private: System::Windows::Forms::Button^ btnClearList;
	private: System::Windows::Forms::Button^ btnPlot;
	private: System::Windows::Forms::Button^ btnSelClear;
	private: System::Windows::Forms::Button^ btnSelRot;
	private: System::Windows::Forms::Button^ btnUP;
	private: System::Windows::Forms::Button^ btnDOWN;
	private: System::Windows::Forms::Button^ btnLEFT;
	private: System::Windows::Forms::Button^ btnRIGHT;
	private: System::Windows::Forms::Button^ btnRot;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbAng;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btnPL;






	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pbPlot = (gcnew System::Windows::Forms::PictureBox());
			this->lby = (gcnew System::Windows::Forms::ListBox());
			this->lbx = (gcnew System::Windows::Forms::ListBox());
			this->lbCoord = (gcnew System::Windows::Forms::Label());
			this->btnClearList = (gcnew System::Windows::Forms::Button());
			this->btnPlot = (gcnew System::Windows::Forms::Button());
			this->btnSelClear = (gcnew System::Windows::Forms::Button());
			this->btnSelRot = (gcnew System::Windows::Forms::Button());
			this->btnUP = (gcnew System::Windows::Forms::Button());
			this->btnDOWN = (gcnew System::Windows::Forms::Button());
			this->btnLEFT = (gcnew System::Windows::Forms::Button());
			this->btnRIGHT = (gcnew System::Windows::Forms::Button());
			this->btnRot = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbAng = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnPL = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPlot))->BeginInit();
			this->SuspendLayout();
			// 
			// pbPlot
			// 
			this->pbPlot->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->pbPlot->Location = System::Drawing::Point(12, 12);
			this->pbPlot->Name = L"pbPlot";
			this->pbPlot->Size = System::Drawing::Size(673, 614);
			this->pbPlot->TabIndex = 0;
			this->pbPlot->TabStop = false;
			this->pbPlot->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pb1_MouseClick);
			this->pbPlot->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pbPlot_MouseMove);
			// 
			// lby
			// 
			this->lby->FormattingEnabled = true;
			this->lby->Location = System::Drawing::Point(1117, 12);
			this->lby->Name = L"lby";
			this->lby->Size = System::Drawing::Size(105, 303);
			this->lby->TabIndex = 1;
			this->lby->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::lby_MouseClick);
			// 
			// lbx
			// 
			this->lbx->FormattingEnabled = true;
			this->lbx->Location = System::Drawing::Point(971, 12);
			this->lbx->Name = L"lbx";
			this->lbx->Size = System::Drawing::Size(119, 303);
			this->lbx->TabIndex = 2;
			this->lbx->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::lbx_MouseClick);
			// 
			// lbCoord
			// 
			this->lbCoord->AutoSize = true;
			this->lbCoord->Location = System::Drawing::Point(845, 367);
			this->lbCoord->Name = L"lbCoord";
			this->lbCoord->Size = System::Drawing::Size(0, 13);
			this->lbCoord->TabIndex = 3;
			// 
			// btnClearList
			// 
			this->btnClearList->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClearList->Location = System::Drawing::Point(468, 655);
			this->btnClearList->Name = L"btnClearList";
			this->btnClearList->Size = System::Drawing::Size(119, 55);
			this->btnClearList->TabIndex = 4;
			this->btnClearList->Text = L"Clear";
			this->btnClearList->UseVisualStyleBackColor = true;
			this->btnClearList->Click += gcnew System::EventHandler(this, &MyForm::btnClearList_Click);
			// 
			// btnPlot
			// 
			this->btnPlot->Font = (gcnew System::Drawing::Font(L"Haettenschweiler", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPlot->Location = System::Drawing::Point(329, 655);
			this->btnPlot->Name = L"btnPlot";
			this->btnPlot->Size = System::Drawing::Size(133, 55);
			this->btnPlot->TabIndex = 5;
			this->btnPlot->Text = L"Построить";
			this->btnPlot->UseVisualStyleBackColor = true;
			this->btnPlot->Click += gcnew System::EventHandler(this, &MyForm::btnPlot_Click);
			// 
			// btnSelClear
			// 
			this->btnSelClear->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSelClear->Location = System::Drawing::Point(971, 321);
			this->btnSelClear->Name = L"btnSelClear";
			this->btnSelClear->Size = System::Drawing::Size(251, 40);
			this->btnSelClear->TabIndex = 6;
			this->btnSelClear->Text = L"Clear Selected";
			this->btnSelClear->UseVisualStyleBackColor = true;
			this->btnSelClear->Click += gcnew System::EventHandler(this, &MyForm::btnSelClear_Click);
			// 
			// btnSelRot
			// 
			this->btnSelRot->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSelRot->Location = System::Drawing::Point(971, 367);
			this->btnSelRot->Name = L"btnSelRot";
			this->btnSelRot->Size = System::Drawing::Size(251, 33);
			this->btnSelRot->TabIndex = 7;
			this->btnSelRot->Text = L"Выбрать центр";
			this->btnSelRot->UseVisualStyleBackColor = true;
			this->btnSelRot->Click += gcnew System::EventHandler(this, &MyForm::btnSelRot_Click);
			// 
			// btnUP
			// 
			this->btnUP->Location = System::Drawing::Point(833, 130);
			this->btnUP->Name = L"btnUP";
			this->btnUP->Size = System::Drawing::Size(61, 54);
			this->btnUP->TabIndex = 8;
			this->btnUP->Text = L"UP";
			this->btnUP->UseVisualStyleBackColor = true;
			this->btnUP->Click += gcnew System::EventHandler(this, &MyForm::btnUP_Click);
			// 
			// btnDOWN
			// 
			this->btnDOWN->Location = System::Drawing::Point(833, 257);
			this->btnDOWN->Name = L"btnDOWN";
			this->btnDOWN->Size = System::Drawing::Size(61, 58);
			this->btnDOWN->TabIndex = 9;
			this->btnDOWN->Text = L"DOWN";
			this->btnDOWN->UseVisualStyleBackColor = true;
			this->btnDOWN->Click += gcnew System::EventHandler(this, &MyForm::btnDOWN_Click);
			// 
			// btnLEFT
			// 
			this->btnLEFT->Location = System::Drawing::Point(764, 189);
			this->btnLEFT->Name = L"btnLEFT";
			this->btnLEFT->Size = System::Drawing::Size(64, 50);
			this->btnLEFT->TabIndex = 10;
			this->btnLEFT->Text = L"LEFT";
			this->btnLEFT->UseVisualStyleBackColor = true;
			this->btnLEFT->Click += gcnew System::EventHandler(this, &MyForm::btnLEFT_Click);
			// 
			// btnRIGHT
			// 
			this->btnRIGHT->Location = System::Drawing::Point(900, 189);
			this->btnRIGHT->Name = L"btnRIGHT";
			this->btnRIGHT->Size = System::Drawing::Size(59, 50);
			this->btnRIGHT->TabIndex = 11;
			this->btnRIGHT->Text = L"RIGHT";
			this->btnRIGHT->UseVisualStyleBackColor = true;
			this->btnRIGHT->Click += gcnew System::EventHandler(this, &MyForm::btnRIGHT_Click);
			// 
			// btnRot
			// 
			this->btnRot->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRot->Location = System::Drawing::Point(732, 41);
			this->btnRot->Name = L"btnRot";
			this->btnRot->Size = System::Drawing::Size(96, 58);
			this->btnRot->TabIndex = 12;
			this->btnRot->Text = L"Rotate";
			this->btnRot->UseVisualStyleBackColor = true;
			this->btnRot->Click += gcnew System::EventHandler(this, &MyForm::btnRot_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"NSimSun", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(691, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 19);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Угол поворота:";
			// 
			// tbAng
			// 
			this->tbAng->Location = System::Drawing::Point(848, 41);
			this->tbAng->Name = L"tbAng";
			this->tbAng->Size = System::Drawing::Size(100, 20);
			this->tbAng->TabIndex = 14;
			this->tbAng->Text = L"30";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(248, 632);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 85);
			this->button1->TabIndex = 15;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(610, 639);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 71);
			this->button2->TabIndex = 16;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// btnReturn
			// 
			this->btnReturn->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReturn->Location = System::Drawing::Point(971, 406);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(251, 37);
			this->btnReturn->TabIndex = 17;
			this->btnReturn->Text = L"Центр - (0,0)";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyForm::btnReturn_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(695, 540);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 74);
			this->button3->TabIndex = 18;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// btnPL
			// 
			this->btnPL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPL->Location = System::Drawing::Point(695, 440);
			this->btnPL->Name = L"btnPL";
			this->btnPL->Size = System::Drawing::Size(72, 81);
			this->btnPL->TabIndex = 19;
			this->btnPL->Text = L"+";
			this->btnPL->UseVisualStyleBackColor = true;
			this->btnPL->Click += gcnew System::EventHandler(this, &MyForm::btnPL_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1249, 744);
			this->Controls->Add(this->btnPL);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btnReturn);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbAng);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnRot);
			this->Controls->Add(this->btnRIGHT);
			this->Controls->Add(this->btnLEFT);
			this->Controls->Add(this->btnDOWN);
			this->Controls->Add(this->btnUP);
			this->Controls->Add(this->btnSelRot);
			this->Controls->Add(this->btnSelClear);
			this->Controls->Add(this->btnPlot);
			this->Controls->Add(this->btnClearList);
			this->Controls->Add(this->lbCoord);
			this->Controls->Add(this->lbx);
			this->Controls->Add(this->lby);
			this->Controls->Add(this->pbPlot);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPlot))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Pen^ draw_pn;
		Brush^ br;
		Brush^ br_pol;
		array<PointF, 1>^ ar;

		int pointID = 0;

		bool isPoint = false;

		PointF origin;

		Void clear(Image^ img, Brush^ br) {
			Graphics^ gr = Graphics::FromImage(img);
			gr->FillRectangle(br, 0, 0, img->Width, img->Height);
		}

	private: System::Void pb1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		lbx->Items->Add(Convert::ToString(e->Location.X));
		lby->Items->Add(Convert::ToString(e->Location.Y));
	}
	private: System::Void pbPlot_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		lbCoord->Text = Convert::ToString(e->Location);
	}
	private: System::Void btnClearList_Click(System::Object^ sender, System::EventArgs^ e) {
		clear(pbPlot->Image, br);
		lbx->Items->Clear();
		lby->Items->Clear();
		pbPlot->Refresh();
	}
	private: System::Void btnPlot_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lbx->Items->Count > 0) {
			clear(pbPlot->Image, br);
			ar->Resize(ar, lbx->Items->Count);
			for (int i = 0; i < lbx->Items->Count; i++) {
				ar[i].X = Convert::ToDouble(lbx->Items[i]);
				ar[i].Y = Convert::ToDouble(lby->Items[i]);
			}
			Graphics^ gr;
			gr = Graphics::FromImage(pbPlot->Image);
			gr->FillPolygon(br_pol, ar);
			pbPlot->Refresh();
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		origin.X = 0;
		origin.Y = 0;
	}
	private: System::Void btnSelClear_Click(System::Object^ sender, System::EventArgs^ e) {
		int c = lbx->SelectedItems->Count;
		lbx->Items->RemoveAt(lbx->Items->IndexOf(lbx->SelectedItems[0]));
		lby->Items->RemoveAt(lby->Items->IndexOf(lby->SelectedItems[0]));
	}
	private: System::Void btnSelRot_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lbx->SelectedItems->Count == 0)
			return;
		pointID = lbx->SelectedIndices[0];
		origin.X = Convert::ToInt32(lbx->Items[pointID]);
		origin.Y = Convert::ToInt32(lby->Items[pointID]);
		isPoint = true;
	}
	private: System::Void lbx_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		lby->SetSelected(lbx->Items->IndexOf(lbx->SelectedItems[0]), true);
	}
	private: System::Void lby_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		lbx->SetSelected(lby->Items->IndexOf(lby->SelectedItems[0]), true);
	}
	void move(float x, float y) {
		array<float, 2>^ move = gcnew array<float, 2>(3, 3);
		move_mat(x, y, move);
		for (int i = 0; i < ar->Length; i++) {
			ar[i] = apply(ar[i], move);
		}
		clear(pbPlot->Image, br);
		Graphics^ gr;
		gr = Graphics::FromImage(pbPlot->Image);
		gr->FillPolygon(br_pol, ar);
		pbPlot->Refresh();
	}
	private: System::Void btnUP_Click(System::Object^ sender, System::EventArgs^ e) {
		move(0, -10);
		if (isPoint) {
			//pointID = pointID = lbx->SelectedIndices[0];
			origin.X = Convert::ToDouble(ar[lbx->SelectedIndices[0]].X);
			origin.Y = Convert::ToDouble(ar[lby->SelectedIndices[0]].Y);
		}
	}
	private: System::Void btnDOWN_Click(System::Object^ sender, System::EventArgs^ e) {
		move(0, 10);
		if (isPoint) {
			//pointID = pointID = lbx->SelectedIndices[0];
			origin.X = Convert::ToDouble(ar[lbx->SelectedIndices[0]].X);
			origin.Y = Convert::ToDouble(ar[lby->SelectedIndices[0]].Y);
		}
	}
	private: System::Void btnLEFT_Click(System::Object^ sender, System::EventArgs^ e) {
		move(-10, 0);
		if (isPoint) {
			//pointID = pointID = lbx->SelectedIndices[0];
			origin.X = Convert::ToDouble(ar[lbx->SelectedIndices[0]].X);
			origin.Y = Convert::ToDouble(ar[lby->SelectedIndices[0]].Y);
		}
	}
	private: System::Void btnRIGHT_Click(System::Object^ sender, System::EventArgs^ e) {
		move(10, 0);
		if (isPoint) {
			//pointID = pointID = lbx->SelectedIndices[0];
			origin.X = Convert::ToDouble(ar[lbx->SelectedIndices[0]].X);
			origin.Y = Convert::ToDouble(ar[lby->SelectedIndices[0]].Y);
		}
	}
	void rotate(float rad) {
		array<float, 2>^ rot = gcnew array<float, 2>(3, 3);
		rotate_mat(origin, rad, rot);
		for (int i = 0; i < ar->Length; i++) {
			ar[i] = apply(ar[i], rot);
		}
		clear(pbPlot->Image, br);
		Graphics^ gr;
		gr = Graphics::FromImage(pbPlot->Image);
		gr->FillPolygon(br_pol, ar);
		pbPlot->Refresh();
	}
	private: System::Void btnRot_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isPoint) {
			//pointID = pointID = lbx->SelectedIndices[0];
			origin.X = Convert::ToDouble(ar[lbx->SelectedIndices[0]].X);
			origin.Y = Convert::ToDouble(ar[lby->SelectedIndices[0]].Y);
		}
		rotate(Convert::ToDouble(tbAng->Text) / 57.3);

	}
	void scale(float x, float y) {
		array<float, 2>^ scal = gcnew array<float, 2>(3, 3);
		scale_mat(origin, x, y, scal);
		if (isPoint) {
			//pointID = pointID = lbx->SelectedIndices[0];
			origin.X = Convert::ToDouble(ar[lbx->SelectedIndices[0]].X);
			origin.Y = Convert::ToDouble(ar[lby->SelectedIndices[0]].Y);
		}
		for (int i = 0; i < ar->Length; i++) {
			ar[i] = apply(ar[i], scal);
		}
		clear(pbPlot->Image, br);
		Graphics^ gr;
		gr = Graphics::FromImage(pbPlot->Image);
		gr->FillPolygon(br_pol, ar);
		pbPlot->Refresh();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isPoint) {
			//pointID = pointID = lbx->SelectedIndices[0];
			origin.X = Convert::ToDouble(ar[lbx->SelectedIndices[0]].X);
			origin.Y = Convert::ToDouble(ar[lby->SelectedIndices[0]].Y);
		}
		scale(1.1, 1);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isPoint) {
			//pointID = pointID = lbx->SelectedIndices[0];
			origin.X = Convert::ToDouble(ar[lbx->SelectedIndices[0]].X);
			origin.Y = Convert::ToDouble(ar[lby->SelectedIndices[0]].Y);
		}
		scale(0.9, 1);
	}
	private: System::Void btnReturn_Click(System::Object^ sender, System::EventArgs^ e) {
		pointID = 0;
		origin.X = 0;
		origin.Y = 0;
		isPoint = false;
	}
	private: System::Void btnPL_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isPoint) {
			//pointID = pointID = lbx->SelectedIndices[0];
			origin.X = Convert::ToDouble(ar[lbx->SelectedIndices[0]].X);
			origin.Y = Convert::ToDouble(ar[lby->SelectedIndices[0]].Y);
		}
		scale(1, 1.1);

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isPoint) {
			//pointID = pointID = lbx->SelectedIndices[0];
			origin.X = Convert::ToDouble(ar[lbx->SelectedIndices[0]].X);
			origin.Y = Convert::ToDouble(ar[lby->SelectedIndices[0]].Y);
		}
		scale(1, 0.9);
	}
};
}
