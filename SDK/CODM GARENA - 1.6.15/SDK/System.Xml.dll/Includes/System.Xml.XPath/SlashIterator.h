#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class SlashIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "SlashIterator"));
	}

	template <typename T = uintptr_t> T& _iterLeft() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _iterRight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _expr() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _iterList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _finished() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _nextIterRight() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SlashIterator*))(Il2CppBase() + 0x4D0F4C4))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(SlashIterator*))(Il2CppBase() + 0x4D0F554))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(SlashIterator*))(Il2CppBase() + 0x4D0FA14))(this);
	}

};

}
