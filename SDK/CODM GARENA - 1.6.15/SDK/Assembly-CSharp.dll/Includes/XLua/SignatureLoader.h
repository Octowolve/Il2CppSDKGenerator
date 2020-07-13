#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class SignatureLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "SignatureLoader"));
	}

	template <typename T = uintptr_t> T& userLoader() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& rsa() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& sha() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T load_and_verify(uintptr_t filepath) {
		return ((T (*)(SignatureLoader*, uintptr_t))(Il2CppBase() + 0xF5B3DC))(this, filepath);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t signatureLoader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5B63C))(0, signatureLoader);
	}

};

}
