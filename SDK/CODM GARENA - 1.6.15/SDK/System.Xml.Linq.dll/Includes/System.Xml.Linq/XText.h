#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XText"));
	}

	template <typename T = Il2CppString*> T& value() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XText*))(Il2CppBase() + 0x51CDFEC))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XText*))(Il2CppBase() + 0x51C41DC))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(XText*, Il2CppString*))(Il2CppBase() + 0x51C96A4))(this, value);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XText*, uintptr_t))(Il2CppBase() + 0x51CDFF4))(this, w);
	}

};

}
