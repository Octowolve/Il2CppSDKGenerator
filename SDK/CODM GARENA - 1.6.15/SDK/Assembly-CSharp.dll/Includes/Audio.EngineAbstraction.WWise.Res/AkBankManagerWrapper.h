#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Res {

class AkBankManagerWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Res", "AkBankManagerWrapper"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& msBankNameToBankManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_SyncBankMan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& m_AsyncBankMan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uint32_t>*> static T& BanksToUnload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> static T DoUnloadBanks() {
		return ((T (*)(void *))(Il2CppBase() + 0x45073E8))(0);
	}
	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x44E7EB4))(0);
	}
	template <typename T = uintptr_t> static T LoadBank(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44E3450))(0, name);
	}
	template <typename T = void> static T LoadBankAsync(Il2CppString* name, uintptr_t callback) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x44E69B8))(0, name, callback);
	}
	template <typename T = bool> static T IsBankLoaded(Il2CppString* strName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44E6EE0))(0, strName);
	}
	template <typename T = void> static T UnloadBank(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44E517C))(0, name);
	}
	template <typename T = void> static T UnLoadAllImmediately() {
		return ((T (*)(void *))(Il2CppBase() + 0x450776C))(0);
	}
	template <typename T = void> static T WriteDebugInfo(uintptr_t sbBuffer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4507848))(0, sbBuffer);
	}

};

}
