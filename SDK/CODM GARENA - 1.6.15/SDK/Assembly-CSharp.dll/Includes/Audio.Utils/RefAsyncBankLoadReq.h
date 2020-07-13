#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class RefAsyncBankLoadReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "RefAsyncBankLoadReq"));
	}

	template <typename T = int32_t> T& mRefCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<void*>*> T& mEventCallback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& mBankName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBankName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cancel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUnUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBankLoadedDummy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BankCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = Il2CppString*> T get_BankName() {
		return ((T (*)(RefAsyncBankLoadReq*))(Il2CppBase() + 0x3247860))(this);
	}
	template <typename T = void> T SetBankName(Il2CppString* strBankName) {
		return ((T (*)(RefAsyncBankLoadReq*, Il2CppString*))(Il2CppBase() + 0x3247868))(this, strBankName);
	}
	template <typename T = void> T Start(void* pCallback) {
		return ((T (*)(RefAsyncBankLoadReq*, void*))(Il2CppBase() + 0x3247910))(this, pCallback);
	}
	template <typename T = bool> T Cancel(void* pCallback) {
		return ((T (*)(RefAsyncBankLoadReq*, void*))(Il2CppBase() + 0x3247B38))(this, pCallback);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RefAsyncBankLoadReq*))(Il2CppBase() + 0x3247CD8))(this);
	}
	template <typename T = bool> T IsUnUsed() {
		return ((T (*)(RefAsyncBankLoadReq*))(Il2CppBase() + 0x324806C))(this);
	}
	template <typename T = void> T ForceRecycle() {
		return ((T (*)(RefAsyncBankLoadReq*))(Il2CppBase() + 0x3248118))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(RefAsyncBankLoadReq*))(Il2CppBase() + 0x32481B0))(this);
	}
	template <typename T = void> T OnBankLoadedDummy(bool bSuccess, Il2CppString* bankName) {
		return ((T (*)(RefAsyncBankLoadReq*, bool, Il2CppString*))(Il2CppBase() + 0x3248248))(this, bSuccess, bankName);
	}
	template <typename T = void> T BankCallback(uint32_t in_bankID, uintptr_t in_InMemoryBankPtr, uintptr_t in_eLoadResult, uint32_t in_memPoolId, uintptr_t in_Cookie) {
		return ((T (*)(RefAsyncBankLoadReq*, uint32_t, uintptr_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x32482FC))(this, in_bankID, in_InMemoryBankPtr, in_eLoadResult, in_memPoolId, in_Cookie);
	}

};

}
