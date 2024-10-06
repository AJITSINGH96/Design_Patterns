#pragma once
class product;
class Creator
{
	product* m_pProduct;
	public:
		void AnOperation();
		virtual product* create() {
			return nullptr;
		};
};

