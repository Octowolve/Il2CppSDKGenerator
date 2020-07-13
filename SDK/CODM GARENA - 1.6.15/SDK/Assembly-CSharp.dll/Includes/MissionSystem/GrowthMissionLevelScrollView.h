#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class GrowthMissionLevelScrollView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "GrowthMissionLevelScrollView"));
	}

	template <typename T = int32_t> static T& LEVELREWARD_ITEM_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LEVELREWARD_ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& ImportantRewardReddot() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& ImportantTipsHolder() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetImportantView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Update() {
		return ((T (*)(GrowthMissionLevelScrollView*))(Il2CppBase() + 0x32EE9D8))(this);
	}
	template <typename T = void> T SetImportantView(uintptr_t data) {
		return ((T (*)(GrowthMissionLevelScrollView*, uintptr_t))(Il2CppBase() + 0x32EED38))(this, data);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(GrowthMissionLevelScrollView*))(Il2CppBase() + 0x32EF3F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetImportantView(uintptr_t P0) {
		return ((T (*)(GrowthMissionLevelScrollView*, uintptr_t))(Il2CppBase() + 0x32EF3F8))(this, P0);
	}

};

}
