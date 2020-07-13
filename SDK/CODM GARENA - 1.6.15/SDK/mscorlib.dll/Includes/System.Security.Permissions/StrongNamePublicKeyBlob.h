#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Permissions {

class StrongNamePublicKeyBlob
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Permissions", "StrongNamePublicKeyBlob"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& pubkey() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(StrongNamePublicKeyBlob*, uintptr_t))(Il2CppBase() + 0x427FBF8))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(StrongNamePublicKeyBlob*))(Il2CppBase() + 0x427FD2C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StrongNamePublicKeyBlob*))(Il2CppBase() + 0x427FDBC))(this);
	}

};

}
