#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AK.Wwise {

class Bank
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AK.Wwise", "Bank"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Load(bool decodeBank, bool saveDecodedBank) {
		return ((T (*)(Bank*, bool, bool))(Il2CppBase() + 0x4A1ED10))(this, decodeBank, saveDecodedBank);
	}
	template <typename T = void> T LoadAsync(uintptr_t callback) {
		return ((T (*)(Bank*, uintptr_t))(Il2CppBase() + 0x4A1F0C8))(this, callback);
	}
	template <typename T = void> T Unload() {
		return ((T (*)(Bank*))(Il2CppBase() + 0x4A1F424))(this);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(Bank*))(Il2CppBase() + 0x4A1F724))(this);
	}

};

}
