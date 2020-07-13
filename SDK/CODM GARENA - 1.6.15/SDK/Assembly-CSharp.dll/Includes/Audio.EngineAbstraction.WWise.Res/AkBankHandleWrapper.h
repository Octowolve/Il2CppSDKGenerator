#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Res {

class AkBankHandleWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Res", "AkBankHandleWrapper"));
	}

	template <typename T = Il2CppString*> T& bankName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& bankCallback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& OnBankUnLoaded() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mIsAsyncLoadCallbackReceived() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_RefCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& m_BankID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_RefCount() {
		return ((T (*)(AkBankHandleWrapper*))(Il2CppBase() + 0x4503E2C))(this);
	}
	template <typename T = bool> T get_IsLoaded() {
		return ((T (*)(AkBankHandleWrapper*))(Il2CppBase() + 0x4503E34))(this);
	}
	template <typename T = void> T WriteDebugInfo(uintptr_t sbBuffer) {
		return ((T (*)(AkBankHandleWrapper*, uintptr_t))(Il2CppBase() + 0x4503E4C))(this, sbBuffer);
	}
	template <typename T = uintptr_t> T LoadBank() {
		return ((T (*)(AkBankHandleWrapper*))(Il2CppBase() + 0x4503F24))(this);
	}
	template <typename T = uintptr_t> T LoadBankAsync(uintptr_t callback) {
		return ((T (*)(AkBankHandleWrapper*, uintptr_t))(Il2CppBase() + 0x4504828))(this, callback);
	}
	template <typename T = void> T OnAsyncLoaded() {
		return ((T (*)(AkBankHandleWrapper*))(Il2CppBase() + 0x4504D88))(this);
	}
	template <typename T = void> T OnAsyncLoadFailed() {
		return ((T (*)(AkBankHandleWrapper*))(Il2CppBase() + 0x4505054))(this);
	}
	template <typename T = void> T IncRef() {
		return ((T (*)(AkBankHandleWrapper*))(Il2CppBase() + 0x45045E4))(this);
	}
	template <typename T = bool> T DecRef() {
		return ((T (*)(AkBankHandleWrapper*))(Il2CppBase() + 0x45052E4))(this);
	}

};

}
