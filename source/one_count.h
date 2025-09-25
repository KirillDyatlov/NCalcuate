#pragma once

namespace NCalcuate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class one_count : public System::Windows::Forms::Form
	{
	public:
		one_count(void)
		{
			InitializeComponent();
		}

	protected:
		~one_count()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ arcsin;
	private: System::Windows::Forms::Button^ ctg;
	private: System::Windows::Forms::Button^ tg;
	private: System::Windows::Forms::Button^ cos;
	private: System::Windows::Forms::Button^ sin;
	private: System::Windows::Forms::Button^ abs;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ count;
	private: System::Windows::Forms::Button^ log;
	private: System::Windows::Forms::Button^ sqrt;
	private: System::Windows::Forms::Button^ ceil;
	private: System::Windows::Forms::Button^ arctan;
	private: System::Windows::Forms::Button^ arccos;
	private: System::Windows::Forms::Label^ label2;
	protected:
		double a;
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(one_count::typeid));
			this->result = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->arcsin = (gcnew System::Windows::Forms::Button());
			this->ctg = (gcnew System::Windows::Forms::Button());
			this->tg = (gcnew System::Windows::Forms::Button());
			this->cos = (gcnew System::Windows::Forms::Button());
			this->sin = (gcnew System::Windows::Forms::Button());
			this->abs = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->count = (gcnew System::Windows::Forms::TextBox());
			this->log = (gcnew System::Windows::Forms::Button());
			this->sqrt = (gcnew System::Windows::Forms::Button());
			this->ceil = (gcnew System::Windows::Forms::Button());
			this->arctan = (gcnew System::Windows::Forms::Button());
			this->arccos = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();

			this->result->AutoSize = true;
			this->result->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->Location = System::Drawing::Point(23, 243);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(35, 38);
			this->result->TabIndex = 30;
			this->result->Text = L"0";
			this->result->Click += gcnew System::EventHandler(this, &one_count::label6_Click);

			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(22, 206);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 28);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Ðåçóëüòàò";

			this->arcsin->BackColor = System::Drawing::SystemColors::ControlLight;
			this->arcsin->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arcsin->ForeColor = System::Drawing::SystemColors::ControlText;
			this->arcsin->Location = System::Drawing::Point(194, 387);
			this->arcsin->Name = L"arcsin";
			this->arcsin->Size = System::Drawing::Size(156, 35);
			this->arcsin->TabIndex = 27;
			this->arcsin->Text = L"Àðêñèíóñ";
			this->arcsin->UseVisualStyleBackColor = false;
			this->arcsin->Click += gcnew System::EventHandler(this, &one_count::arcsin_cl);

			this->ctg->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ctg->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ctg->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ctg->Location = System::Drawing::Point(27, 387);
			this->ctg->Name = L"ctg";
			this->ctg->Size = System::Drawing::Size(160, 35);
			this->ctg->TabIndex = 26;
			this->ctg->Text = L"Êîòàíãåíñ";
			this->ctg->UseVisualStyleBackColor = false;
			this->ctg->Click += gcnew System::EventHandler(this, &one_count::ctg_cl);

			this->tg->BackColor = System::Drawing::SystemColors::ControlLight;
			this->tg->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tg->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tg->Location = System::Drawing::Point(194, 346);
			this->tg->Name = L"tg";
			this->tg->Size = System::Drawing::Size(156, 35);
			this->tg->TabIndex = 25;
			this->tg->Text = L"Òàíãåíñ";
			this->tg->UseVisualStyleBackColor = false;
			this->tg->Click += gcnew System::EventHandler(this, &one_count::tg_cl);

			this->cos->BackColor = System::Drawing::SystemColors::ControlLight;
			this->cos->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cos->ForeColor = System::Drawing::SystemColors::ControlText;
			this->cos->Location = System::Drawing::Point(27, 346);
			this->cos->Name = L"cos";
			this->cos->Size = System::Drawing::Size(160, 35);
			this->cos->TabIndex = 24;
			this->cos->Text = L"Êîñèíóñ";
			this->cos->UseVisualStyleBackColor = false;
			this->cos->Click += gcnew System::EventHandler(this, &one_count::cos_cl);

			this->sin->BackColor = System::Drawing::SystemColors::ControlLight;
			this->sin->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sin->ForeColor = System::Drawing::SystemColors::ControlText;
			this->sin->Location = System::Drawing::Point(194, 305);
			this->sin->Name = L"sin";
			this->sin->Size = System::Drawing::Size(156, 35);
			this->sin->TabIndex = 23;
			this->sin->Text = L"Ñèíóñ";
			this->sin->UseVisualStyleBackColor = false;
			this->sin->Click += gcnew System::EventHandler(this, &one_count::sin_cl);

			this->abs->BackColor = System::Drawing::SystemColors::ControlLight;
			this->abs->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->abs->ForeColor = System::Drawing::SystemColors::ControlText;
			this->abs->Location = System::Drawing::Point(27, 305);
			this->abs->Name = L"abs";
			this->abs->Size = System::Drawing::Size(160, 35);
			this->abs->TabIndex = 22;
			this->abs->Text = L"Ìîäóëü";
			this->abs->UseVisualStyleBackColor = false;
			this->abs->Click += gcnew System::EventHandler(this, &one_count::abs_cl);

			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(42, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(310, 28);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Îïåðàöèè ñ îäíèì ÷èñëîì";

			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(109, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 42);
			this->label3->TabIndex = 20;
			this->label3->Text = L"NCalcuate";

			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(146, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 28);
			this->label1->TabIndex = 17;
			this->label1->Text = L"×èñëî";

			this->count->Location = System::Drawing::Point(29, 155);
			this->count->Name = L"count";
			this->count->Size = System::Drawing::Size(321, 22);
			this->count->TabIndex = 16;
			this->count->TextChanged += gcnew System::EventHandler(this, &one_count::count_TextChanged);

			this->log->BackColor = System::Drawing::SystemColors::ControlLight;
			this->log->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->log->ForeColor = System::Drawing::SystemColors::ControlText;
			this->log->Location = System::Drawing::Point(116, 510);
			this->log->Name = L"log";
			this->log->Size = System::Drawing::Size(156, 35);
			this->log->TabIndex = 37;
			this->log->Text = L"Ëîãàðèôì";
			this->log->UseVisualStyleBackColor = false;
			this->log->Click += gcnew System::EventHandler(this, &one_count::log_cl);

			this->sqrt->BackColor = System::Drawing::SystemColors::ControlLight;
			this->sqrt->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sqrt->ForeColor = System::Drawing::SystemColors::ControlText;
			this->sqrt->Location = System::Drawing::Point(194, 469);
			this->sqrt->Name = L"sqrt";
			this->sqrt->Size = System::Drawing::Size(156, 35);
			this->sqrt->TabIndex = 36;
			this->sqrt->Text = L"Êîðåíü";
			this->sqrt->UseVisualStyleBackColor = false;
			this->sqrt->Click += gcnew System::EventHandler(this, &one_count::sqrt_cl);

			this->ceil->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ceil->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ceil->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ceil->Location = System::Drawing::Point(27, 469);
			this->ceil->Name = L"ceil";
			this->ceil->Size = System::Drawing::Size(156, 35);
			this->ceil->TabIndex = 35;
			this->ceil->Text = L"Îêðóãëåíèå";
			this->ceil->UseVisualStyleBackColor = false;
			this->ceil->Click += gcnew System::EventHandler(this, &one_count::ceil_cl);

			this->arctan->BackColor = System::Drawing::SystemColors::ControlLight;
			this->arctan->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arctan->ForeColor = System::Drawing::SystemColors::ControlText;
			this->arctan->Location = System::Drawing::Point(194, 428);
			this->arctan->Name = L"arctan";
			this->arctan->Size = System::Drawing::Size(156, 35);
			this->arctan->TabIndex = 33;
			this->arctan->Text = L"Àðêòàíãåíñ";
			this->arctan->UseVisualStyleBackColor = false;
			this->arctan->Click += gcnew System::EventHandler(this, &one_count::arctan_cl);

			this->arccos->BackColor = System::Drawing::SystemColors::ControlLight;
			this->arccos->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arccos->ForeColor = System::Drawing::SystemColors::ControlText;
			this->arccos->Location = System::Drawing::Point(27, 428);
			this->arccos->Name = L"arccos";
			this->arccos->Size = System::Drawing::Size(160, 35);
			this->arccos->TabIndex = 32;
			this->arccos->Text = L"Àðêêîñèíóñ";
			this->arccos->UseVisualStyleBackColor = false;
			this->arccos->Click += gcnew System::EventHandler(this, &one_count::arccos_cl);

			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(176, 268);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 36);
			this->label2->TabIndex = 38;
 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 560);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->log);
			this->Controls->Add(this->sqrt);
			this->Controls->Add(this->ceil);
			this->Controls->Add(this->arctan);
			this->Controls->Add(this->arccos);
			this->Controls->Add(this->result);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->arcsin);
			this->Controls->Add(this->ctg);
			this->Controls->Add(this->tg);
			this->Controls->Add(this->cos);
			this->Controls->Add(this->sin);
			this->Controls->Add(this->abs);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->count);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(402, 607);
			this->MinimumSize = System::Drawing::Size(402, 607);
			this->Name = L"one_count";
			this->Text = L"NCalcuate";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void count_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	a = Convert::ToDouble(count->Text);
}

private: System::Void abs_cl(System::Object^ sender, System::EventArgs^ e) {
	a = Math::Abs(a);
	this->result->Text = Convert::ToString(a);
}

private: System::Void sin_cl(System::Object^ sender, System::EventArgs^ e) {
	a = Math::Sin(a);
	this->result->Text = Convert::ToString(a);
}

private: System::Void cos_cl(System::Object^ sender, System::EventArgs^ e) {
	a = Math::Cos(a);
	this->result->Text = Convert::ToString(a);
}

private: System::Void tg_cl(System::Object^ sender, System::EventArgs^ e) {
	a = Math::Tan(a);
	this->result->Text = Convert::ToString(a);
}

private: System::Void ctg_cl(System::Object^ sender, System::EventArgs^ e) {
	a = Math::Cos(a) / Math::Sin(a);
	this->result->Text = Convert::ToString(a);
}

private: System::Void arcsin_cl(System::Object^ sender, System::EventArgs^ e) {
	a = Math::Asin(a);
	this->result->Text = Convert::ToString(a);
}

private: System::Void arccos_cl(System::Object^ sender, System::EventArgs^ e) {
	a = Math::Acos(a);
	this->result->Text = Convert::ToString(a);
}

private: System::Void arctan_cl(System::Object^ sender, System::EventArgs^ e) {
	a = Math::Atan(a);
	this->result->Text = Convert::ToString(a);
}

private: System::Void ceil_cl(System::Object^ sender, System::EventArgs^ e) {
	a = Math::Ceiling(a);
	this->result->Text = Convert::ToString(a);
}

private: System::Void sqrt_cl(System::Object^ sender, System::EventArgs^ e) {
	a = Math::Sqrt(a);
	this->result->Text = Convert::ToString(a);
}

private: System::Void log_cl(System::Object^ sender, System::EventArgs^ e) {
	a = Math::Log(a);
	this->result->Text = Convert::ToString(a);
}

};
}

