#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Policy {

class StrongName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Policy", "StrongName"));
	}

	template <typename T = uintptr_t> T& publickey() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& version() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(StrongName*))(Il2CppBase() + 0x4281F1C))(this);
	}
	template <typename T = uintptr_t> T get_PublicKey() {
		return ((T (*)(StrongName*))(Il2CppBase() + 0x4281F24))(this);
	}
	template <typename T = uintptr_t> T get_Version() {
		return ((T (*)(StrongName*))(Il2CppBase() + 0x4281F2C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(StrongName*, uintptr_t))(Il2CppBase() + 0x4281F34))(this, o);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(StrongName*))(Il2CppBase() + 0x428206C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StrongName*))(Il2CppBase() + 0x4282094))(this);
	}

};

}
