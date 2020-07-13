#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMatchJumpDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMatchJumpDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_MatchJumpInfoList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValidMatchJumpInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValidData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMatchJumpData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMatchJumpInfoById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppList<uintptr_t>*> T GetValidMatchJumpInfoList(int32_t groupId) {
		return ((T (*)(LiveOpsMatchJumpDataStore*, int32_t))(Il2CppBase() + 0x34FF194))(this, groupId);
	}
	template <typename T = bool> T IsValidData(int32_t gorupId) {
		return ((T (*)(LiveOpsMatchJumpDataStore*, int32_t))(Il2CppBase() + 0x35008D0))(this, gorupId);
	}
	template <typename T = void> T UpdateMatchJumpData(uintptr_t res) {
		return ((T (*)(LiveOpsMatchJumpDataStore*, uintptr_t))(Il2CppBase() + 0x3500BB4))(this, res);
	}
	template <typename T = uintptr_t> T GetMatchJumpInfoById(int64_t seqId) {
		return ((T (*)(LiveOpsMatchJumpDataStore*, int64_t))(Il2CppBase() + 0x3500EB4))(this, seqId);
	}
	template <typename T = int32_t> static T GetValidMatchJumpInfoListm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3501048))(0, a, b);
	}

};

}
