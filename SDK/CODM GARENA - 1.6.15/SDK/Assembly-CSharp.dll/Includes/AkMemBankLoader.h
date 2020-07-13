#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkMemBankLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkMemBankLoader"));
	}

	template <typename T = int32_t> static T& WaitMs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& AK_BANK_PLATFORM_DATA_ALIGNMENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& AK_BANK_PLATFORM_DATA_ALIGNMENT_MASK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& bankName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isLocalizedBank() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_bankPath() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& ms_bankID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ms_pInMemoryBankPtr() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ms_pinnedArray() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ms_www() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Start() {
		return ((T (*)(AkMemBankLoader*))(Il2CppBase() + 0x490729C))(this);
	}
	template <typename T = void> T LoadNonLocalizedBank(Il2CppString* in_bankFilename) {
		return ((T (*)(AkMemBankLoader*, Il2CppString*))(Il2CppBase() + 0x4907414))(this, in_bankFilename);
	}
	template <typename T = void> T LoadLocalizedBank(Il2CppString* in_bankFilename) {
		return ((T (*)(AkMemBankLoader*, Il2CppString*))(Il2CppBase() + 0x49072B4))(this, in_bankFilename);
	}
	template <typename T = uintptr_t> T LoadFile() {
		return ((T (*)(AkMemBankLoader*))(Il2CppBase() + 0x4907580))(this);
	}
	template <typename T = void> T DoLoadBank(Il2CppString* in_bankPath) {
		return ((T (*)(AkMemBankLoader*, Il2CppString*))(Il2CppBase() + 0x4907558))(this, in_bankPath);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AkMemBankLoader*))(Il2CppBase() + 0x490762C))(this);
	}

};

}
