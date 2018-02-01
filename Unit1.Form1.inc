procedure InitializeComponent;
    begin
        self.DisplayBox := new System.Windows.Forms.TextBox();
        self.groupBox1 := new System.Windows.Forms.GroupBox();
        self.button1 := new System.Windows.Forms.Button();
        self.button_func_sqr := new System.Windows.Forms.Button();
        self.button_func_cos := new System.Windows.Forms.Button();
        self.button_func_sin := new System.Windows.Forms.Button();
        self.button_func_sqrt := new System.Windows.Forms.Button();
        self.button_dig1 := new System.Windows.Forms.Button();
        self.button_bcksps := new System.Windows.Forms.Button();
        self.button_c := new System.Windows.Forms.Button();
        self.button_ce := new System.Windows.Forms.Button();
        self.button_dig2 := new System.Windows.Forms.Button();
        self.button18 := new System.Windows.Forms.Button();
        self.button_dig3 := new System.Windows.Forms.Button();
        self.button_unarminus := new System.Windows.Forms.Button();
        self.button17 := new System.Windows.Forms.Button();
        self.button_dig4 := new System.Windows.Forms.Button();
        self.button16 := new System.Windows.Forms.Button();
        self.button_dig5 := new System.Windows.Forms.Button();
        self.button_dot := new System.Windows.Forms.Button();
        self.button_dig0 := new System.Windows.Forms.Button();
        self.button_dig6 := new System.Windows.Forms.Button();
        self.Button_plus := new System.Windows.Forms.Button();
        self.button_dig7 := new System.Windows.Forms.Button();
        self.button_dig8 := new System.Windows.Forms.Button();
        self.button_dig9 := new System.Windows.Forms.Button();
        self.groupBox1.SuspendLayout();
        self.SuspendLayout();
        // 
        // DisplayBox
        // 
        self.DisplayBox.BackColor := System.Drawing.Color.Teal;
        self.DisplayBox.ForeColor := System.Drawing.Color.White;
        self.DisplayBox.Location := new System.Drawing.Point(2, 7);
        self.DisplayBox.Multiline := true;
        self.DisplayBox.Name := 'DisplayBox';
        self.DisplayBox.Size := new System.Drawing.Size(215, 33);
        self.DisplayBox.TabIndex := 23;
        self.DisplayBox.Text := #13#10'0';
        self.DisplayBox.TextAlign := System.Windows.Forms.HorizontalAlignment.Right;
        // 
        // groupBox1
        // 
        self.groupBox1.BackColor := System.Drawing.Color.WhiteSmoke;
        self.groupBox1.Controls.Add(self.button1);
        self.groupBox1.Controls.Add(self.button_func_sqr);
        self.groupBox1.Controls.Add(self.button_func_cos);
        self.groupBox1.Controls.Add(self.button_func_sin);
        self.groupBox1.Controls.Add(self.button_func_sqrt);
        self.groupBox1.Controls.Add(self.button_dig1);
        self.groupBox1.Controls.Add(self.button_bcksps);
        self.groupBox1.Controls.Add(self.button_c);
        self.groupBox1.Controls.Add(self.button_ce);
        self.groupBox1.Controls.Add(self.button_dig2);
        self.groupBox1.Controls.Add(self.button18);
        self.groupBox1.Controls.Add(self.button_dig3);
        self.groupBox1.Controls.Add(self.button_unarminus);
        self.groupBox1.Controls.Add(self.button17);
        self.groupBox1.Controls.Add(self.button_dig4);
        self.groupBox1.Controls.Add(self.button16);
        self.groupBox1.Controls.Add(self.button_dig5);
        self.groupBox1.Controls.Add(self.button_dot);
        self.groupBox1.Controls.Add(self.button_dig0);
        self.groupBox1.Controls.Add(self.button_dig6);
        self.groupBox1.Controls.Add(self.Button_plus);
        self.groupBox1.Controls.Add(self.button_dig7);
        self.groupBox1.Controls.Add(self.button_dig8);
        self.groupBox1.Controls.Add(self.button_dig9);
        self.groupBox1.ForeColor := System.Drawing.Color.White;
        self.groupBox1.Location := new System.Drawing.Point(2, 46);
        self.groupBox1.Name := 'groupBox1';
        self.groupBox1.Size := new System.Drawing.Size(216, 160);
        self.groupBox1.TabIndex := 22;
        self.groupBox1.TabStop := false;
        // 
        // button1
        // 
        self.button1.BackColor := System.Drawing.Color.Teal;
        self.button1.Location := new System.Drawing.Point(172, 130);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(35, 24);
        self.button1.TabIndex := 28;
        self.button1.Tag := '4';
        self.button1.Text := 'tan';
        self.button1.UseVisualStyleBackColor := false;
        self.button1.Click += button_func_Click;
        // 
        // button_func_sqr
        // 
        self.button_func_sqr.BackColor := System.Drawing.Color.Teal;
        self.button_func_sqr.Location := new System.Drawing.Point(172, 9);
        self.button_func_sqr.Name := 'button_func_sqr';
        self.button_func_sqr.Size := new System.Drawing.Size(35, 24);
        self.button_func_sqr.TabIndex := 27;
        self.button_func_sqr.Tag := '0';
        self.button_func_sqr.Text := 'sqr';
        self.button_func_sqr.UseVisualStyleBackColor := false;
        self.button_func_sqr.Click += button_func_Click;
        // 
        // button_func_cos
        // 
        self.button_func_cos.BackColor := System.Drawing.Color.Teal;
        self.button_func_cos.Location := new System.Drawing.Point(172, 99);
        self.button_func_cos.Name := 'button_func_cos';
        self.button_func_cos.Size := new System.Drawing.Size(35, 24);
        self.button_func_cos.TabIndex := 26;
        self.button_func_cos.Tag := '3';
        self.button_func_cos.Text := 'cos';
        self.button_func_cos.UseVisualStyleBackColor := false;
        self.button_func_cos.Click += button_func_Click;
        // 
        // button_func_sin
        // 
        self.button_func_sin.BackColor := System.Drawing.Color.Teal;
        self.button_func_sin.Location := new System.Drawing.Point(172, 69);
        self.button_func_sin.Name := 'button_func_sin';
        self.button_func_sin.Size := new System.Drawing.Size(35, 24);
        self.button_func_sin.TabIndex := 25;
        self.button_func_sin.Tag := '2';
        self.button_func_sin.Text := 'sin';
        self.button_func_sin.UseVisualStyleBackColor := false;
        self.button_func_sin.Click += button_func_Click;
        // 
        // button_func_sqrt
        // 
        self.button_func_sqrt.BackColor := System.Drawing.Color.Teal;
        self.button_func_sqrt.Location := new System.Drawing.Point(172, 39);
        self.button_func_sqrt.Name := 'button_func_sqrt';
        self.button_func_sqrt.Size := new System.Drawing.Size(35, 24);
        self.button_func_sqrt.TabIndex := 22;
        self.button_func_sqrt.Tag := '1';
        self.button_func_sqrt.Text := 'sqrt';
        self.button_func_sqrt.UseVisualStyleBackColor := false;
        self.button_func_sqrt.Click += button_func_Click;
        // 
        // button_dig1
        // 
        self.button_dig1.BackColor := System.Drawing.Color.Teal;
        self.button_dig1.Location := new System.Drawing.Point(8, 99);
        self.button_dig1.Name := 'button_dig1';
        self.button_dig1.Size := new System.Drawing.Size(35, 24);
        self.button_dig1.TabIndex := 1;
        self.button_dig1.Text := '1';
        self.button_dig1.UseVisualStyleBackColor := false;
        self.button_dig1.Click += DigitButton_Click;
        // 
        // button_bcksps
        // 
        self.button_bcksps.BackColor := System.Drawing.Color.Teal;
        self.button_bcksps.Location := new System.Drawing.Point(8, 9);
        self.button_bcksps.Name := 'button_bcksps';
        self.button_bcksps.Size := new System.Drawing.Size(35, 24);
        self.button_bcksps.TabIndex := 13;
        self.button_bcksps.Text := '<-';
        self.button_bcksps.UseVisualStyleBackColor := false;
        self.button_bcksps.Click += button_bcksps_Click;
        // 
        // button_c
        // 
        self.button_c.BackColor := System.Drawing.Color.Teal;
        self.button_c.Location := new System.Drawing.Point(90, 9);
        self.button_c.Name := 'button_c';
        self.button_c.Size := new System.Drawing.Size(35, 24);
        self.button_c.TabIndex := 19;
        self.button_c.Text := 'C';
        self.button_c.UseVisualStyleBackColor := false;
        self.button_c.Click += button_c_Click;
        // 
        // button_ce
        // 
        self.button_ce.BackColor := System.Drawing.Color.Teal;
        self.button_ce.Location := new System.Drawing.Point(49, 9);
        self.button_ce.Name := 'button_ce';
        self.button_ce.Size := new System.Drawing.Size(35, 24);
        self.button_ce.TabIndex := 12;
        self.button_ce.Text := 'CE';
        self.button_ce.UseVisualStyleBackColor := false;
        self.button_ce.Click += button_ce_Click;
        // 
        // button_dig2
        // 
        self.button_dig2.BackColor := System.Drawing.Color.Teal;
        self.button_dig2.Location := new System.Drawing.Point(49, 99);
        self.button_dig2.Name := 'button_dig2';
        self.button_dig2.Size := new System.Drawing.Size(35, 24);
        self.button_dig2.TabIndex := 5;
        self.button_dig2.Text := '2';
        self.button_dig2.UseVisualStyleBackColor := false;
        self.button_dig2.Click += DigitButton_Click;
        // 
        // button18
        // 
        self.button18.BackColor := System.Drawing.Color.Teal;
        self.button18.Location := new System.Drawing.Point(131, 39);
        self.button18.Name := 'button18';
        self.button18.Size := new System.Drawing.Size(35, 24);
        self.button18.TabIndex := 18;
        self.button18.Text := '/';
        self.button18.UseVisualStyleBackColor := false;
        self.button18.Click += MathOperButton_Click;
        // 
        // button_dig3
        // 
        self.button_dig3.BackColor := System.Drawing.Color.Teal;
        self.button_dig3.Location := new System.Drawing.Point(90, 99);
        self.button_dig3.Name := 'button_dig3';
        self.button_dig3.Size := new System.Drawing.Size(35, 24);
        self.button_dig3.TabIndex := 2;
        self.button_dig3.Text := '3';
        self.button_dig3.UseVisualStyleBackColor := false;
        self.button_dig3.Click += DigitButton_Click;
        // 
        // button_unarminus
        // 
        self.button_unarminus.BackColor := System.Drawing.Color.Teal;
        self.button_unarminus.Location := new System.Drawing.Point(131, 9);
        self.button_unarminus.Name := 'button_unarminus';
        self.button_unarminus.Size := new System.Drawing.Size(35, 24);
        self.button_unarminus.TabIndex := 11;
        self.button_unarminus.Text := '±';
        self.button_unarminus.UseVisualStyleBackColor := false;
        self.button_unarminus.Click += button_unarminus_Click ;
        // 
        // button17
        // 
        self.button17.BackColor := System.Drawing.Color.Teal;
        self.button17.Location := new System.Drawing.Point(131, 69);
        self.button17.Name := 'button17';
        self.button17.Size := new System.Drawing.Size(35, 24);
        self.button17.TabIndex := 17;
        self.button17.Text := '*';
        self.button17.UseVisualStyleBackColor := false;
        self.button17.Click += MathOperButton_Click;
        // 
        // button_dig4
        // 
        self.button_dig4.BackColor := System.Drawing.Color.Teal;
        self.button_dig4.Location := new System.Drawing.Point(8, 69);
        self.button_dig4.Name := 'button_dig4';
        self.button_dig4.Size := new System.Drawing.Size(35, 24);
        self.button_dig4.TabIndex := 10;
        self.button_dig4.Text := '4';
        self.button_dig4.UseVisualStyleBackColor := false;
        self.button_dig4.Click += DigitButton_Click;
        // 
        // button16
        // 
        self.button16.BackColor := System.Drawing.Color.Teal;
        self.button16.Location := new System.Drawing.Point(131, 99);
        self.button16.Name := 'button16';
        self.button16.Size := new System.Drawing.Size(35, 24);
        self.button16.TabIndex := 16;
        self.button16.Text := '-';
        self.button16.UseVisualStyleBackColor := false;
        self.button16.Click += MathOperButton_Click;
        // 
        // button_dig5
        // 
        self.button_dig5.BackColor := System.Drawing.Color.Teal;
        self.button_dig5.Location := new System.Drawing.Point(49, 69);
        self.button_dig5.Name := 'button_dig5';
        self.button_dig5.Size := new System.Drawing.Size(35, 24);
        self.button_dig5.TabIndex := 6;
        self.button_dig5.Text := '5';
        self.button_dig5.UseVisualStyleBackColor := false;
        self.button_dig5.Click += DigitButton_Click;
        // 
        // button_dot
        // 
        self.button_dot.BackColor := System.Drawing.Color.Teal;
        self.button_dot.Location := new System.Drawing.Point(90, 129);
        self.button_dot.Name := 'button_dot';
        self.button_dot.Size := new System.Drawing.Size(35, 24);
        self.button_dot.TabIndex := 14;
        self.button_dot.Text := '.';
        self.button_dot.UseVisualStyleBackColor := false;
        self.button_dot.Click += DigitButton_Click;
        // 
        // button_dig0
        // 
        self.button_dig0.BackColor := System.Drawing.Color.Teal;
        self.button_dig0.Location := new System.Drawing.Point(8, 129);
        self.button_dig0.Name := 'button_dig0';
        self.button_dig0.Size := new System.Drawing.Size(76, 24);
        self.button_dig0.TabIndex := 15;
        self.button_dig0.Text := '0';
        self.button_dig0.UseVisualStyleBackColor := false;
        self.button_dig0.Click += DigitButton_Click;
        // 
        // button_dig6
        // 
        self.button_dig6.BackColor := System.Drawing.Color.Teal;
        self.button_dig6.Location := new System.Drawing.Point(90, 69);
        self.button_dig6.Name := 'button_dig6';
        self.button_dig6.Size := new System.Drawing.Size(35, 24);
        self.button_dig6.TabIndex := 0;
        self.button_dig6.Text := '6';
        self.button_dig6.UseVisualStyleBackColor := false;
        self.button_dig6.Click += DigitButton_Click;
        // 
        // Button_plus
        // 
        self.Button_plus.BackColor := System.Drawing.Color.Teal;
        self.Button_plus.Location := new System.Drawing.Point(131, 129);
        self.Button_plus.Name := 'Button_plus';
        self.Button_plus.Size := new System.Drawing.Size(35, 24);
        self.Button_plus.TabIndex := 4;
        self.Button_plus.Text := '+';
        self.Button_plus.UseVisualStyleBackColor := false;
        self.Button_plus.Click += MathOperButton_Click;
        // 
        // button_dig7
        // 
        self.button_dig7.BackColor := System.Drawing.Color.Teal;
        self.button_dig7.Location := new System.Drawing.Point(8, 39);
        self.button_dig7.Name := 'button_dig7';
        self.button_dig7.Size := new System.Drawing.Size(35, 24);
        self.button_dig7.TabIndex := 7;
        self.button_dig7.Text := '7';
        self.button_dig7.UseVisualStyleBackColor := false;
        self.button_dig7.Click += DigitButton_Click;
        // 
        // button_dig8
        // 
        self.button_dig8.BackColor := System.Drawing.Color.Teal;
        self.button_dig8.Location := new System.Drawing.Point(49, 39);
        self.button_dig8.Name := 'button_dig8';
        self.button_dig8.Size := new System.Drawing.Size(35, 24);
        self.button_dig8.TabIndex := 8;
        self.button_dig8.Text := '8';
        self.button_dig8.UseVisualStyleBackColor := false;
        self.button_dig8.Click += DigitButton_Click;
        // 
        // button_dig9
        // 
        self.button_dig9.BackColor := System.Drawing.Color.Teal;
        self.button_dig9.Location := new System.Drawing.Point(90, 39);
        self.button_dig9.Name := 'button_dig9';
        self.button_dig9.Size := new System.Drawing.Size(35, 24);
        self.button_dig9.TabIndex := 9;
        self.button_dig9.Text := '9';
        self.button_dig9.UseVisualStyleBackColor := false;
        self.button_dig9.Click += DigitButton_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(220, 207);
        self.Controls.Add(self.DisplayBox);
        self.Controls.Add(self.groupBox1);
        self.Name := 'Form1';
        self.Text := 'calc_personal';
        self.TransparencyKey := System.Drawing.Color.White;
        self.groupBox1.ResumeLayout(false);
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
