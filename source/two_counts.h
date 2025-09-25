#pragma once
namespace NCalcuate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ two_counts
	/// </summary>
	public ref class two_counts : public System::Windows::Forms::Form
	{
	public:
		two_counts(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~two_counts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ one_count;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ two_count;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ add;
	private: System::Windows::Forms::Button^ subtract;
	private: System::Windows::Forms::Button^ divide;




	private: System::Windows::Forms::Button^ multiply;



	private: System::Windows::Forms::Button^ degree;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ result;



	// private: System::Windows::Forms::Button^ add;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

	protected:
		double a;
		double b;
		double c;
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ BMI_result;
	protected:

	protected:
#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(two_counts::typeid));
			this->one_count = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->two_count = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->add = (gcnew System::Windows::Forms::Button());
			this->subtract = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->degree = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Label());
			this->BMI_result = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// one_count
			// 
			resources->ApplyResources(this->one_count, L"one_count");
			this->one_count->Name = L"one_count";
			this->one_count->TextChanged += gcnew System::EventHandler(this, &two_counts::one_count_TextChanged);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &two_counts::label1_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// two_count
			// 
			resources->ApplyResources(this->two_count, L"two_count");
			this->two_count->Name = L"two_count";
			this->two_count->TextChanged += gcnew System::EventHandler(this, &two_counts::two_count_TextChanged);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
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
			// two_counts
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
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
			this->Controls->Add(this->label2);
			this->Controls->Add(this->two_count);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->one_count);
			this->MaximizeBox = false;
			this->Name = L"two_counts";
			this->Load += gcnew System::EventHandler(this, &two_counts::two_counts_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void one_count_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	a = Convert::ToDouble(one_count->Text);
}

private: System::Void two_count_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	b = Convert::ToDouble(two_count->Text);
}

private: System::Void add_cl(System::Object^ sender, System::EventArgs^ e) {
	c = a + b;
	this->result->Text = Convert::ToString(c);
}
private: System::Void subtract_cl(System::Object^ sender, System::EventArgs^ e) {
	c = a - b;
	this->result->Text = Convert::ToString(c);
}
private: System::Void multiply_cl(System::Object^ sender, System::EventArgs^ e) {
	c = a * b;
	this->result->Text = Convert::ToString(c);
}
private: System::Void divide_cl(System::Object^ sender, System::EventArgs^ e) {
	c = a / b;
	this->result->Text = Convert::ToString(c);
}
private: System::Void degree_cl(System::Object^ sender, System::EventArgs^ e) {
	c = Math::Pow(a, b);
	this->result->Text = Convert::ToString(c);
}

private: System::Void arcctg_cl(System::Object^ sender, System::EventArgs^ e) {
	c = Math::Atan2(a, b);
	this->result->Text = Convert::ToString(c);
}

private: System::Void two_counts_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
