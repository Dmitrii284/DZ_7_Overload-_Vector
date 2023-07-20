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
//	_size++;// Увеличиваем размер массива на единицу
//	if (_ptr == nullptr) {
//		int* newMass = new int[_size];// Выделяем память под новый массив размером _size
//		newMass[0] = data;// в нулевой элемент нового массива newMass[0] помещае аргумент  data ([0]) - т.к.Это самый первый элемент 
//		_ptr = newMass; // Помещаем _ptr указатель на новый массив
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
//		std::cout << element.value_ << std::endl;// Вывод значения элемента	
//}
//
//
