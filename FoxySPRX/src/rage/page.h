#pragma once
#include <common/templates.h>

namespace rage {
	class datBase {
	public:
		virtual ~datBase() = default;
	}; //Size: 0x0008
	class pgBase {
	public:
		virtual ~pgBase() = default;
	private:
		u32 m_block_map; //This is a subclass but I refuse to add it.
	};
	template <typename T, typename Base = datBase>
	class atDNode : public Base {
	public:
		T m_data;
		void* m_unk;
		atDNode<T, Base>* m_next;
	};
	template <typename Node>
	class atDList {
	public:
		Node* m_head;
		Node* m_tail;
	};
}