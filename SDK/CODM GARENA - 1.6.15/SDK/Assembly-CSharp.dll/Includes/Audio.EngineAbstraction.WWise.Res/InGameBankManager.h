#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Res {

class InGameBankManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Res", "InGameBankManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& msBankLoadInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x44E4F84))(0);
	}
	template <typename T = uintptr_t> static T LoadBank(Il2CppString* strBankName, bool bSync) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x44E6474))(0, strBankName, bSync);
	}
	template <typename T = bool> static T _IsBankAlreadyLoaded(Il2CppString* strBankName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44E72A0))(0, strBankName);
	}
	template <typename T = uintptr_t> static T _LoadBankSync(Il2CppString* strBankName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4507FB0))(0, strBankName);
	}
	template <typename T = void> static T UnLoadAllBanks() {
		return ((T (*)(void *))(Il2CppBase() + 0x4507B1C))(0);
	}

};

}
