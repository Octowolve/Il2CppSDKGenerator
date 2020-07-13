#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class SimpleSlashIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "SimpleSlashIterator"));
	}

	template <typename T = uintptr_t> T& _expr() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _left() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _right() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _current() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SimpleSlashIterator*))(Il2CppBase() + 0x4D0F154))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(SimpleSlashIterator*))(Il2CppBase() + 0x4D0F1E4))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(SimpleSlashIterator*))(Il2CppBase() + 0x4D0F33C))(this);
	}

};

}
