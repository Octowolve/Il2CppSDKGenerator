#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdIdentitySelector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdIdentitySelector"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& selectorPaths() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& fields() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cachedFields() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Paths() {
		return ((T (*)(XsdIdentitySelector*))(Il2CppBase() + 0x4E24F68))(this);
	}
	template <typename T = void> T AddField(uintptr_t field) {
		return ((T (*)(XsdIdentitySelector*, uintptr_t))(Il2CppBase() + 0x4E24F70))(this, field);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Fields() {
		return ((T (*)(XsdIdentitySelector*))(Il2CppBase() + 0x4E24FAC))(this);
	}

};

}
