//#include "Header.h"
//
//Collection::Collection(int value) : value_{value} { }
//
//Collection Collection::setVelue(int pVelue) { 
//	value_ = pVelue; return *this; }
//
//Collection Collection::getContained(const std::vector<Collection>& getContained()) {
//	return *this;
//}
//
//int Collection::getVelue() const { return value_; }
//
//std::vector<Collection> Collection::getContained() const {
//	return std::vector<Collection>();
//}
//
//void Collection::Push_back(int data)
//{
//	_size++;// ����������� ������ ������� �� �������
//	if (_ptr == nullptr) {
//		int* newMass = new int[_size];// �������� ������ ��� ����� ������ �������� _size
//		newMass[0] = data;// � ������� ������� ������ ������� newMass[0] ������� ��������  data ([0]) - �.�.��� ����� ������ ������� 
//		_ptr = newMass; // �������� _ptr ��������� �� ����� ������
//		return;
//	}
//	for (int i = 0; i < _size - 1; ++i)
//		newMass[i] = _ptr[i];	
//}
//
//Collection& Collection::operator[](int index) {
//	return contained_[index];
//}
//
//void Collection::Show() {
//	for (const auto& element : contained_)	
//		std::cout << element.value_ << std::endl;// ����� �������� ��������	
//}
//
//
