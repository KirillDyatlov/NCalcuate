#pragma once
#include <random>
#include <iostream>

namespace NCalcuate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class onecount : public System::Windows::Forms::Form
	{
	public:
		onecount(void)
		{
			InitializeComponent();
		}

	protected:
		~onecount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ log;
	private: System::Windows::Forms::Button^ sqrt;
	private: System::Windows::Forms::Button^ ceil;
	private: System::Windows::Forms::Button^ arctan;
	private: System::Windows::Forms::Button^ arccos;
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
	private:
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ randoma;
	protected:
		double enter;
		int randomizer;
	private: System::Windows::Forms::Button^ hyperbolic_cos;
	private: System::Windows::Forms::Button^ expo;
	private: System::Windows::Forms::Button^ hyperbolic_sin;
	private: System::Windows::Forms::Button^ hyperbolic_tan;
	protected:
		int rand_result;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(onecount::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->log = (gcnew System::Windows::Forms::Button());
			this->sqrt = (gcnew System::Windows::Forms::Button());
			this->ceil = (gcnew System::Windows::Forms::Button());
			this->arctan = (gcnew System::Windows::Forms::Button());
			this->arccos = (gcnew System::Windows::Forms::Button());
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
			this->randoma = (gcnew System::Windows::Forms::Button());
			this->hyperbolic_cos = (gcnew System::Windows::Forms::Button());
			this->expo = (gcnew System::Windows::Forms::Button());
			this->hyperbolic_sin = (gcnew System::Windows::Forms::Button());
			this->hyperbolic_tan = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(181, 272);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 36);
			this->label2->TabIndex = 56;
			// 
			// log
			// 
			this->log->BackColor = System::Drawing::SystemColors::ControlLight;
			this->log->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->log->ForeColor = System::Drawing::SystemColors::ControlText;
			this->log->Location = System::Drawing::Point(32, 514);
			this->log->Name = L"log";
			this->log->Size = System::Drawing::Size(156, 35);
			this->log->TabIndex = 55;
			this->log->Text = L"Логарифм";
			this->log->UseVisualStyleBackColor = false;
			this->log->Click += gcnew System::EventHandler(this, &onecount::log_cl);
			// 
			// sqrt
			// 
			this->sqrt->BackColor = System::Drawing::SystemColors::ControlLight;
			this->sqrt->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sqrt->ForeColor = System::Drawing::SystemColors::ControlText;
			this->sqrt->Location = System::Drawing::Point(199, 473);
			this->sqrt->Name = L"sqrt";
			this->sqrt->Size = System::Drawing::Size(156, 35);
			this->sqrt->TabIndex = 54;
			this->sqrt->Text = L"Корень";
			this->sqrt->UseVisualStyleBackColor = false;
			this->sqrt->Click += gcnew System::EventHandler(this, &onecount::sqrt_cl);
			// 
			// ceil
			// 
			this->ceil->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ceil->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ceil->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ceil->Location = System::Drawing::Point(32, 473);
			this->ceil->Name = L"ceil";
			this->ceil->Size = System::Drawing::Size(156, 35);
			this->ceil->TabIndex = 53;
			this->ceil->Text = L"Округление";
			this->ceil->UseVisualStyleBackColor = false;
			this->ceil->Click += gcnew System::EventHandler(this, &onecount::ceil_cl);
			// 
			// arctan
			// 
			this->arctan->BackColor = System::Drawing::SystemColors::ControlLight;
			this->arctan->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arctan->ForeColor = System::Drawing::SystemColors::ControlText;
			this->arctan->Location = System::Drawing::Point(199, 432);
			this->arctan->Name = L"arctan";
			this->arctan->Size = System::Drawing::Size(156, 35);
			this->arctan->TabIndex = 52;
			this->arctan->Text = L"Арктангенс";
			this->arctan->UseVisualStyleBackColor = false;
			this->arctan->Click += gcnew System::EventHandler(this, &onecount::arctg_cl);
			// 
			// arccos
			// 
			this->arccos->BackColor = System::Drawing::SystemColors::ControlLight;
			this->arccos->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arccos->ForeColor = System::Drawing::SystemColors::ControlText;
			this->arccos->Location = System::Drawing::Point(32, 432);
			this->arccos->Name = L"arccos";
			this->arccos->Size = System::Drawing::Size(160, 35);
			this->arccos->TabIndex = 51;
			this->arccos->Text = L"Арккосинус";
			this->arccos->UseVisualStyleBackColor = false;
			this->arccos->Click += gcnew System::EventHandler(this, &onecount::arccos_cl);
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->Location = System::Drawing::Point(25, 247);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(35, 38);
			this->result->TabIndex = 50;
			this->result->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(27, 210);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 28);
			this->label5->TabIndex = 49;
			this->label5->Text = L"Результат";
			// 
			// arcsin
			// 
			this->arcsin->BackColor = System::Drawing::SystemColors::ControlLight;
			this->arcsin->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arcsin->ForeColor = System::Drawing::SystemColors::ControlText;
			this->arcsin->Location = System::Drawing::Point(199, 391);
			this->arcsin->Name = L"arcsin";
			this->arcsin->Size = System::Drawing::Size(156, 35);
			this->arcsin->TabIndex = 48;
			this->arcsin->Text = L"Арксинус";
			this->arcsin->UseVisualStyleBackColor = false;
			this->arcsin->Click += gcnew System::EventHandler(this, &onecount::arcsin_cl);
			// 
			// ctg
			// 
			this->ctg->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ctg->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ctg->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ctg->Location = System::Drawing::Point(32, 391);
			this->ctg->Name = L"ctg";
			this->ctg->Size = System::Drawing::Size(160, 35);
			this->ctg->TabIndex = 47;
			this->ctg->Text = L"Котангенс";
			this->ctg->UseVisualStyleBackColor = false;
			this->ctg->Click += gcnew System::EventHandler(this, &onecount::ctg_cl);
			// 
			// tg
			// 
			this->tg->BackColor = System::Drawing::SystemColors::ControlLight;
			this->tg->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tg->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tg->Location = System::Drawing::Point(199, 350);
			this->tg->Name = L"tg";
			this->tg->Size = System::Drawing::Size(156, 35);
			this->tg->TabIndex = 46;
			this->tg->Text = L"Тангенс";
			this->tg->UseVisualStyleBackColor = false;
			this->tg->Click += gcnew System::EventHandler(this, &onecount::tan_cl);
			// 
			// cos
			// 
			this->cos->BackColor = System::Drawing::SystemColors::ControlLight;
			this->cos->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cos->ForeColor = System::Drawing::SystemColors::ControlText;
			this->cos->Location = System::Drawing::Point(32, 350);
			this->cos->Name = L"cos";
			this->cos->Size = System::Drawing::Size(160, 35);
			this->cos->TabIndex = 45;
			this->cos->Text = L"Косинус";
			this->cos->UseVisualStyleBackColor = false;
			this->cos->Click += gcnew System::EventHandler(this, &onecount::cos_Cl);
			// 
			// sin
			// 
			this->sin->BackColor = System::Drawing::SystemColors::ControlLight;
			this->sin->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sin->ForeColor = System::Drawing::SystemColors::ControlText;
			this->sin->Location = System::Drawing::Point(199, 309);
			this->sin->Name = L"sin";
			this->sin->Size = System::Drawing::Size(156, 35);
			this->sin->TabIndex = 44;
			this->sin->Text = L"Синус";
			this->sin->UseVisualStyleBackColor = false;
			this->sin->Click += gcnew System::EventHandler(this, &onecount::sin_cl);
			// 
			// abs
			// 
			this->abs->BackColor = System::Drawing::SystemColors::ControlLight;
			this->abs->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->abs->ForeColor = System::Drawing::SystemColors::ControlText;
			this->abs->Location = System::Drawing::Point(32, 309);
			this->abs->Name = L"abs";
			this->abs->Size = System::Drawing::Size(160, 35);
			this->abs->TabIndex = 43;
			this->abs->Text = L"Модуль";
			this->abs->UseVisualStyleBackColor = false;
			this->abs->Click += gcnew System::EventHandler(this, &onecount::abs_cl);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(47, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(310, 28);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Операции с одним числом";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(114, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 42);
			this->label3->TabIndex = 41;
			this->label3->Text = L"NCalcuate";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(151, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 28);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Число";
			// 
			// count
			// 
			this->count->Location = System::Drawing::Point(34, 159);
			this->count->Name = L"count";
			this->count->Size = System::Drawing::Size(321, 22);
			this->count->TabIndex = 39;
			this->count->Validated += gcnew System::EventHandler(this, &onecount::count_enter);
			// 
			// randoma
			// 
			this->randoma->BackColor = System::Drawing::SystemColors::ControlLight;
			this->randoma->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->randoma->ForeColor = System::Drawing::SystemColors::ControlText;
			this->randoma->Location = System::Drawing::Point(199, 513);
			this->randoma->Name = L"randoma";
			this->randoma->Size = System::Drawing::Size(156, 35);
			this->randoma->TabIndex = 57;
			this->randoma->Text = L"Рандом";
			this->randoma->UseVisualStyleBackColor = false;
			this->randoma->Click += gcnew System::EventHandler(this, &onecount::random_cl);
			// 
			// hyperbolic_cos
			// 
			this->hyperbolic_cos->BackColor = System::Drawing::SystemColors::ControlLight;
			this->hyperbolic_cos->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hyperbolic_cos->ForeColor = System::Drawing::SystemColors::ControlText;
			this->hyperbolic_cos->Location = System::Drawing::Point(32, 555);
			this->hyperbolic_cos->Name = L"hyperbolic_cos";
			this->hyperbolic_cos->Size = System::Drawing::Size(323, 35);
			this->hyperbolic_cos->TabIndex = 58;
			this->hyperbolic_cos->Text = L"Гиперболический косинус";
			this->hyperbolic_cos->UseVisualStyleBackColor = false;
			this->hyperbolic_cos->Click += gcnew System::EventHandler(this, &onecount::cosh_cl);
			// 
			// expo
			// 
			this->expo->BackColor = System::Drawing::SystemColors::ControlLight;
			this->expo->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->expo->ForeColor = System::Drawing::SystemColors::ControlText;
			this->expo->Location = System::Drawing::Point(32, 679);
			this->expo->Name = L"expo";
			this->expo->Size = System::Drawing::Size(323, 35);
			this->expo->TabIndex = 59;
			this->expo->Text = L"Экспонента";
			this->expo->UseVisualStyleBackColor = false;
			this->expo->Click += gcnew System::EventHandler(this, &onecount::expo_Cl);
			// 
			// hyperbolic_sin
			// 
			this->hyperbolic_sin->BackColor = System::Drawing::SystemColors::ControlLight;
			this->hyperbolic_sin->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hyperbolic_sin->ForeColor = System::Drawing::SystemColors::ControlText;
			this->hyperbolic_sin->Location = System::Drawing::Point(32, 597);
			this->hyperbolic_sin->Name = L"hyperbolic_sin";
			this->hyperbolic_sin->Size = System::Drawing::Size(323, 35);
			this->hyperbolic_sin->TabIndex = 60;
			this->hyperbolic_sin->Text = L"Гиперболический синус";
			this->hyperbolic_sin->UseVisualStyleBackColor = false;
			this->hyperbolic_sin->Click += gcnew System::EventHandler(this, &onecount::sinh_cl);
			// 
			// hyperbolic_tan
			// 
			this->hyperbolic_tan->BackColor = System::Drawing::SystemColors::ControlLight;
			this->hyperbolic_tan->Font = (gcnew System::Drawing::Font(L"Nunito SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hyperbolic_tan->ForeColor = System::Drawing::SystemColors::ControlText;
			this->hyperbolic_tan->Location = System::Drawing::Point(32, 638);
			this->hyperbolic_tan->Name = L"hyperbolic_tan";
			this->hyperbolic_tan->Size = System::Drawing::Size(323, 35);
			this->hyperbolic_tan->TabIndex = 61;
			this->hyperbolic_tan->Text = L"Гиперболический тангенс\r\n";
			this->hyperbolic_tan->UseVisualStyleBackColor = false;
			this->hyperbolic_tan->Click += gcnew System::EventHandler(this, &onecount::tanh_cl);
			// 
			// onecount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(384, 720);
			this->Controls->Add(this->hyperbolic_tan);
			this->Controls->Add(this->hyperbolic_sin);
			this->Controls->Add(this->expo);
			this->Controls->Add(this->hyperbolic_cos);
			this->Controls->Add(this->randoma);
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
			this->MaximumSize = System::Drawing::Size(402, 767);
			this->MinimumSize = System::Drawing::Size(402, 767);
			this->Name = L"onecount";
			this->Text = L"NCalcuate 2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void count_enter(System::Object^ sender, System::EventArgs^ e) {
	enter = Convert::ToDouble(count->Text);
	randomizer = Convert::ToInt16(count->Text);
}

private: System::Void abs_cl(System::Object^ sender, System::EventArgs^ e) {
	enter = Math::Abs(enter);
	this->result->Text = Convert::ToString(enter);
}

private: System::Void sin_cl(System::Object^ sender, System::EventArgs^ e) {
	enter = Math::Sin(enter);
	this->result->Text = Convert::ToString(enter);
}

private: System::Void cos_Cl(System::Object^ sender, System::EventArgs^ e) {
	enter = Math::Cos(enter);
	this->result->Text = Convert::ToString(enter);
}

private: System::Void tan_cl(System::Object^ sender, System::EventArgs^ e) {
	enter = Math::Tan(enter);
	this->result->Text = Convert::ToString(enter);
}

private: System::Void ctg_cl(System::Object^ sender, System::EventArgs^ e) {
	enter = Math::Cos(enter) / Math::Sin(enter);
	this->result->Text = Convert::ToString(enter);
}

private: System::Void arcsin_cl(System::Object^ sender, System::EventArgs^ e) {
	enter = Math::Asin(enter);
	this->result->Text = Convert::ToString(enter);
}

private: System::Void arccos_cl(System::Object^ sender, System::EventArgs^ e) {
	enter = Math::Acos(enter);
	this->result->Text = Convert::ToString(enter);
}

private: System::Void arctg_cl(System::Object^ sender, System::EventArgs^ e) {
	enter = Math::Atan(enter);
	this->result->Text = Convert::ToString(enter);
}

private: System::Void ceil_cl(System::Object^ sender, System::EventArgs^ e) {
	enter = Math::Round(enter);
	this->result->Text = Convert::ToString(enter);
}

private: System::Void sqrt_cl(System::Object^ sender, System::EventArgs^ e) {
	enter = Math::Sqrt(enter);
	this->result->Text = Convert::ToString(enter);
}

private: System::Void log_cl(System::Object^ sender, System::EventArgs^ e) {
	enter = Math::Log(enter);
	this->result->Text = Convert::ToString(enter);
}
private: System::Void random_cl(System::Object^ sender, System::EventArgs^ e) {
	rand_result = rand() % randomizer;
	this->result->Text = Convert::ToString(rand_result);
}
private: System::Void cosh_cl(System::Object^ sender, System::EventArgs^ e) {
	enter = Math::Cosh(enter);
	this->result->Text = Convert::ToString(enter);
}
private: System::Void expo_Cl(System::Object^ sender, System::EventArgs^ e) {
	enter = Math::Exp(enter);
	this->result->Text = Convert::ToString(enter);
}
private: System::Void sinh_cl(System::Object^ sender, System::EventArgs^ e) {
	enter = Math::Sinh(enter);
	this->result->Text = Convert::ToString(enter);
}
private: System::Void tanh_cl(System::Object^ sender, System::EventArgs^ e) {
	enter = Math::Tanh(enter);
	this->result->Text = Convert::ToString(enter);
	Math::Truncate(enter);
}
};
}
