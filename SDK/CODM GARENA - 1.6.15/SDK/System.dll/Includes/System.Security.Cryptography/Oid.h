#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class Oid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography", "Oid"));
	}

	template <typename T = Il2CppString*> T& _value() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_FriendlyName() {
		return ((T (*)(Oid*))(Il2CppBase() + 0x3E7A91C))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(Oid*))(Il2CppBase() + 0x3E78094))(this);
	}
	template <typename T = Il2CppString*> T GetName(Il2CppString* oid) {
		return ((T (*)(Oid*, Il2CppString*))(Il2CppBase() + 0x3E7A598))(this, oid);
	}

};

}
