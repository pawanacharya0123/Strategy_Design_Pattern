class Intermediary{
	private: 
		Sort* _sort;
	public:
		Intermediary(Sort* _sort){
			this->_sort= _sort;
		}
		void arrange_elements(int* _array){
			_sort->sort_array(_array);
		}
};
