#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class SHA1Managed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "SHA1Managed"));
	}

	template <typename T = uintptr_t> T& sha() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* rgb, int32_t ibStart, int32_t cbSize) {
		return ((T (*)(SHA1Managed*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42760FC))(this, rgb, ibStart, cbSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(SHA1Managed*))(Il2CppBase() + 0x4276134))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(SHA1Managed*))(Il2CppBase() + 0x4276164))(this);
	}

};

}
