#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ParensIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ParensIterator"));
	}

	template <typename T = uintptr_t> T& _iter() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ParensIterator*))(Il2CppBase() + 0x4D0DD14))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(ParensIterator*))(Il2CppBase() + 0x4D0DDA4))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(ParensIterator*))(Il2CppBase() + 0x4D0DDD8))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ParensIterator*))(Il2CppBase() + 0x4D0DE0C))(this);
	}

};

}
