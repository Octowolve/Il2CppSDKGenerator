#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsDailyTaskItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsDailyTaskItemView"));
	}

	template <typename T = uintptr_t> T& BtnGo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BtnReward() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& SpriteFinish() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& OneRewardPosition() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppVector3> T& TwoRewardPosition() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRewardContainerLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetData(uintptr_t data, int32_t minWidth) {
		return ((T (*)(CodLiveOpsDailyTaskItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x3539CF8))(this, data, minWidth);
	}
	template <typename T = void> T SetRewardContainerLocation(int32_t count) {
		return ((T (*)(CodLiveOpsDailyTaskItemView*, int32_t))(Il2CppBase() + 0x3539F60))(this, count);
	}
	template <typename T = void> T xLuaBaseProxy_SetData(uintptr_t P0, int32_t P1) {
		return ((T (*)(CodLiveOpsDailyTaskItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x353A154))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SetRewardContainerLocation(int32_t P0) {
		return ((T (*)(CodLiveOpsDailyTaskItemView*, int32_t))(Il2CppBase() + 0x353A158))(this, P0);
	}

};

}
