#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkBankManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkBankManager"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& m_BankHandles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& BanksToUnload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& m_Mutex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T DoUnloadBanks() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A2A798))(0);
	}
	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A2A994))(0);
	}
	template <typename T = void> static T LoadBank(Il2CppString* name, bool decodeBank, bool saveDecodedBank) {
		return ((T (*)(void *, Il2CppString*, bool, bool))(Il2CppBase() + 0x4A1EDE8))(0, name, decodeBank, saveDecodedBank);
	}
	template <typename T = void> static T LoadBankAsync(Il2CppString* name, uintptr_t callback) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4A1F190))(0, name, callback);
	}
	template <typename T = void> static T UnloadBank(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4A1F4E4))(0, name);
	}

};

}
