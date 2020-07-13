#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XComment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XComment"));
	}

	template <typename T = Il2CppString*> T& value() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XComment*))(Il2CppBase() + 0x51C4358))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XComment*))(Il2CppBase() + 0x51C4360))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XComment*, uintptr_t))(Il2CppBase() + 0x51C4368))(this, w);
	}

};

}
