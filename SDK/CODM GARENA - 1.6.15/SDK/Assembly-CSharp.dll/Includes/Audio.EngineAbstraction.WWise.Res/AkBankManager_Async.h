#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Res {

class AkBankManagerAsync
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Res", "AkBankManager_Async"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& m_BankHandles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_Mutex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AkBankManagerAsync*))(Il2CppBase() + 0x4505720))(this);
	}
	template <typename T = void> static T GlobalBankCallback(uint32_t in_bankID, uintptr_t in_pInMemoryBankPtr, uintptr_t in_eLoadResult, uint32_t in_memPoolId, uintptr_t in_Cookie) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4505804))(0, in_bankID, in_pInMemoryBankPtr, in_eLoadResult, in_memPoolId, in_Cookie);
	}
	template <typename T = uintptr_t> T LoadBankAsync(Il2CppString* name, uintptr_t callback) {
		return ((T (*)(AkBankManagerAsync*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4505D9C))(this, name, callback);
	}
	template <typename T = bool> T IsBankLoaded(Il2CppString* name) {
		return ((T (*)(AkBankManagerAsync*, Il2CppString*))(Il2CppBase() + 0x4506250))(this, name);
	}
	template <typename T = void> T UnloadBank(Il2CppString* name) {
		return ((T (*)(AkBankManagerAsync*, Il2CppString*))(Il2CppBase() + 0x450640C))(this, name);
	}
	template <typename T = void> T OnBankUnLoaded(uintptr_t pHandle) {
		return ((T (*)(AkBankManagerAsync*, uintptr_t))(Il2CppBase() + 0x4506660))(this, pHandle);
	}
	template <typename T = void> T WriteDebugInfo(uintptr_t sbBuffer) {
		return ((T (*)(AkBankManagerAsync*, uintptr_t))(Il2CppBase() + 0x45067AC))(this, sbBuffer);
	}

};

}
