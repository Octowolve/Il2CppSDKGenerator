#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmptyNodeList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "EmptyNodeList"));
	}

	template <typename T = uintptr_t> static T& emptyEnumerator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(EmptyNodeList*))(Il2CppBase() + 0x37E2C88))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(EmptyNodeList*))(Il2CppBase() + 0x37E2C90))(this);
	}
	template <typename T = uintptr_t> T Item(int32_t index) {
		return ((T (*)(EmptyNodeList*, int32_t))(Il2CppBase() + 0x37E2D40))(this, index);
	}

};

}
