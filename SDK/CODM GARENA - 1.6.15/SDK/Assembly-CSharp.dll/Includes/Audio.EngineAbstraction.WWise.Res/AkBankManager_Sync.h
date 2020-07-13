#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Res {

class AkBankManagerSync
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Res", "AkBankManager_Sync"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_BankHandles() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AkBankManagerSync*))(Il2CppBase() + 0x4506C00))(this);
	}
	template <typename T = uintptr_t> T LoadBank(Il2CppString* name) {
		return ((T (*)(AkBankManagerSync*, Il2CppString*))(Il2CppBase() + 0x4506C98))(this, name);
	}
	template <typename T = bool> T IsBankLoaded(Il2CppString* name) {
		return ((T (*)(AkBankManagerSync*, Il2CppString*))(Il2CppBase() + 0x4506E44))(this, name);
	}
	template <typename T = void> T UnloadBank(Il2CppString* name) {
		return ((T (*)(AkBankManagerSync*, Il2CppString*))(Il2CppBase() + 0x4506EE4))(this, name);
	}
	template <typename T = void> T OnBankUnLoaded(uintptr_t pHandle) {
		return ((T (*)(AkBankManagerSync*, uintptr_t))(Il2CppBase() + 0x45070C8))(this, pHandle);
	}
	template <typename T = void> T WriteDebugInfo(uintptr_t sbBuffer) {
		return ((T (*)(AkBankManagerSync*, uintptr_t))(Il2CppBase() + 0x4507174))(this, sbBuffer);
	}

};

}
