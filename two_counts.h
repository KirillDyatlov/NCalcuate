#pragma once
#include <random>
#include <iostream>
#include "onecount.h"

namespace NCalcuate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class two_counts : public System::Windows::Forms::Form
	{
	public:
		two_counts(void)
		{
			InitializeComponent();
		}

	protected:
		~two_counts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ one_count;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ add;
	private: System::Windows::Forms::Button^ subtract;
	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::Button^ degree;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ result;
	private:
		System::ComponentModel::Container ^components;
	protected:
		Double count;
		Double result_value;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ go;
	private: System::Windows::Forms::Button^ remainder;
	private: System::Windows::Forms::Button^ cleaner;
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Label^ BMI_result;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(two_counts::typeid));
			this->one_count = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->add = (gcnew System::Windows::Forms::Button());
			this->subtract = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->degree = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Label());
			this->BMI_result = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->go = (gcnew System::Windows::Forms::Button());
			this->remainder = (gcnew System::Windows::Forms::Button());
			this->cleaner = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// one_count
			// 
			resources->ApplyResources(this->one_count, L"one_count");
			this->one_count->Name = L"one_count";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// add
			// 
			resources->ApplyResources(this->add, L"add");
			this->add->BackColor = System::Drawing::SystemColors::ControlLight;
			this->add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add->ForeColor = System::Drawing::SystemColors::ControlText;
			this->add->Name = L"add";
			this->add->UseVisualStyleBackColor = false;
			this->add->Click += gcnew System::EventHandler(this, &two_counts::add_cl);
			// 
			// subtract
			// 
			resources->ApplyResources(this->subtract, L"subtract");
			this->subtract->BackColor = System::Drawing::SystemColors::ControlLight;
			this->subtract->Cursor = System::Windows::Forms::Cursors::Hand;
			this->subtract->ForeColor = System::Drawing::SystemColors::ControlText;
			this->subtract->Name = L"subtract";
			this->subtract->UseVisualStyleBackColor = false;
			this->subtract->Click += gcnew System::EventHandler(this, &two_counts::subtract_cl);
			// 
			// divide
			// 
			resources->ApplyResources(this->divide, L"divide");
			this->divide->BackColor = System::Drawing::SystemColors::ControlLight;
			this->divide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->divide->ForeColor = System::Drawing::SystemColors::ControlText;
			this->divide->Name = L"divide";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &two_counts::divide_cl);
			// 
			// multiply
			// 
			resources->ApplyResources(this->multiply, L"multiply");
			this->multiply->BackColor = System::Drawing::SystemColors::ControlLight;
			this->multiply->Cursor = System::Windows::Forms::Cursors::Hand;
			this->multiply->ForeColor = System::Drawing::SystemColors::ControlText;
			this->multiply->Name = L"multiply";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &two_counts::multiply_cl);
			// 
			// degree
			// 
			resources->ApplyResources(this->degree, L"degree");
			this->degree->BackColor = System::Drawing::SystemColors::ControlLight;
			this->degree->Cursor = System::Windows::Forms::Cursors::Hand;
			this->degree->ForeColor = System::Drawing::SystemColors::ControlText;
			this->degree->Name = L"degree";
			this->degree->UseVisualStyleBackColor = false;
			this->degree->Click += gcnew System::EventHandler(this, &two_counts::degree_cl);
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// result
			// 
			resources->ApplyResources(this->result, L"result");
			this->result->Name = L"result";
			// 
			// BMI_result
			// 
			resources->ApplyResources(this->BMI_result, L"BMI_result");
			this->BMI_result->Name = L"BMI_result";
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &two_counts::arcctg_cl);
			// 
			// go
			// 
			resources->ApplyResources(this->go, L"go");
			this->go->BackColor = System::Drawing::SystemColors::ControlLight;
			this->go->Cursor = System::Windows::Forms::Cursors::Hand;
			this->go->ForeColor = System::Drawing::SystemColors::ControlText;
			this->go->Name = L"go";
			this->go->UseVisualStyleBackColor = false;
			this->go->Click += gcnew System::EventHandler(this, &two_counts::go_cl);
			// 
			// remainder
			// 
			resources->ApplyResources(this->remainder, L"remainder");
			this->remainder->BackColor = System::Drawing::SystemColors::ControlLight;
			this->remainder->Cursor = System::Windows::Forms::Cursors::Hand;
			this->remainder->ForeColor = System::Drawing::SystemColors::ControlText;
			this->remainder->Name = L"remainder";
			this->remainder->UseVisualStyleBackColor = false;
			this->remainder->Click += gcnew System::EventHandler(this, &two_counts::remainder_Click);
			// 
			// cleaner
			// 
			resources->ApplyResources(this->cleaner, L"cleaner");
			this->cleaner->BackColor = System::Drawing::SystemColors::ControlLight;
			this->cleaner->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cleaner->ForeColor = System::Drawing::SystemColors::ControlText;
			this->cleaner->Name = L"cleaner";
			this->cleaner->UseVisualStyleBackColor = false;
			this->cleaner->Click += gcnew System::EventHandler(this, &two_counts::cleaner_Click);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// two_counts
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Controls->Add(this->cleaner);
			this->Controls->Add(this->remainder);
			this->Controls->Add(this->go);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->BMI_result);
			this->Controls->Add(this->result);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->degree);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->subtract);
			this->Controls->Add(this->add);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->one_count);
			this->MaximizeBox = false;
			this->Name = L"two_counts";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void add_cl(System::Object^ sender, System::EventArgs^ e) {
	count = Convert::ToDouble(one_count->Text);
	if (String::IsNullOrEmpty(one_count->Text)) {
		MessageBox::Show("Введите значения", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else {
		if (result_value == 0) {
			result_value = count;
			one_count->Clear();
		}

		else {
			result_value = result_value + count;
			one_count->Clear();
		}
	}

	this->result->Text = Convert::ToString(result_value);
}
private: System::Void subtract_cl(System::Object^ sender, System::EventArgs^ e) {
	count = Convert::ToDouble(one_count->Text);
	if (String::IsNullOrEmpty(one_count->Text)) {
		MessageBox::Show("Введите значения", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else {
		if (result_value == 0) {
			result_value = count;
			one_count->Clear();
		}

		else {
			result_value = result_value - count;
			one_count->Clear();
		}
	}

	this->result->Text = Convert::ToString(result_value);
}
private: System::Void multiply_cl(System::Object^ sender, System::EventArgs^ e) {
	count = Convert::ToDouble(one_count->Text);
	if (String::IsNullOrEmpty(one_count->Text)) {
		MessageBox::Show("Введите значения", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else {
		if (result_value == 0) {
			result_value = count;
			one_count->Clear();
		}

		else {
			result_value = result_value * count;
			one_count->Clear();
		}
	}

	this->result->Text = Convert::ToString(result_value);
}
private: System::Void divide_cl(System::Object^ sender, System::EventArgs^ e) {
	count = Convert::ToDouble(one_count->Text);
	if (String::IsNullOrEmpty(one_count->Text)) {
		MessageBox::Show("Введите значения", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else {
		if (result_value == 0) {
			result_value = count;
			one_count->Clear();
		}

		else {
			result_value = result_value / count;
			one_count->Clear();
		}
	}

	this->result->Text = Convert::ToString(result_value);
}
private: System::Void degree_cl(System::Object^ sender, System::EventArgs^ e) {
	count = Convert::ToDouble(one_count->Text);
	if (String::IsNullOrEmpty(one_count->Text)) {
		MessageBox::Show("Введите значения", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else {
		if (result_value == 0) {
			result_value = count;
			one_count->Clear();
		}

		else {
			result_value = Math::Pow(result_value, count);
			one_count->Clear();
		}
	}

	this->result->Text = Convert::ToString(result_value);
}

private: System::Void arcctg_cl(System::Object^ sender, System::EventArgs^ e) {
	count = Convert::ToDouble(one_count->Text);
	if (String::IsNullOrEmpty(one_count->Text)) {
		MessageBox::Show("Введите значения", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else {
		if (result_value == 0) {
			result_value = count;
			one_count->Clear();
		}

		else {
			result_value = Math::Atan2(result_value, count);
			one_count->Clear();
		}
	}

	this->result->Text = Convert::ToString(result_value);
}
	   
private: System::Void remainder_Click(System::Object^ sender, System::EventArgs^ e) {
	count = Convert::ToDouble(one_count->Text);
	if (String::IsNullOrEmpty(one_count->Text)) {
		MessageBox::Show("Введите значения", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else {
		if (result_value == 0) {
			result_value = count;
			one_count->Clear();
		}

		else {
			result_value = Math::IEEERemainder(result_value, count);
			one_count->Clear();
		}
	}

	this->result->Text = Convert::ToString(result_value);
}

private: System::Void go_cl(System::Object^ sender, System::EventArgs^ e) {
	onecount^ next = gcnew onecount();
	next->Show();
}

private: System::Void cleaner_Click(System::Object^ sender, System::EventArgs^ e) {
	result_value = 0;
	count = 0;
	one_count->Clear();
	this->result->Text = Convert::ToString(result_value);
}
};
}