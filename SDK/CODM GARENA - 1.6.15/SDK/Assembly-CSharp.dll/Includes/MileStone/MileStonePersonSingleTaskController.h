#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStonePersonSingleTaskController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStonePersonSingleTaskController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqActivityPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameBatchTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ReqActivityPoints() {
		return ((T (*)(MileStonePersonSingleTaskController*))(Il2CppBase() + 0x41E23F4))(this);
	}
	template <typename T = bool> T IsSameBatchTask(uintptr_t task) {
		return ((T (*)(MileStonePersonSingleTaskController*, uintptr_t))(Il2CppBase() + 0x41E2548))(this, task);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MileStonePersonSingleTaskController*))(Il2CppBase() + 0x41E2620))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReqActivityPoints() {
		return ((T (*)(MileStonePersonSingleTaskController*))(Il2CppBase() + 0x41E26C4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSameBatchTask(uintptr_t P0) {
		return ((T (*)(MileStonePersonSingleTaskController*, uintptr_t))(Il2CppBase() + 0x41E26CC))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MileStonePersonSingleTaskController*))(Il2CppBase() + 0x41E26D4))(this);
	}

};

}
