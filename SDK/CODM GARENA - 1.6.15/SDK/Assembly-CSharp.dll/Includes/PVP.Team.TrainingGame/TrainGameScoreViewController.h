#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TrainingGame {

class TrainGameScoreViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TrainingGame", "TrainGameScoreViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateShootInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundCountChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TrainGameScoreViewController*))(Il2CppBase() + 0x3D8BD68))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TrainGameScoreViewController*))(Il2CppBase() + 0x3D8BE0C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TrainGameScoreViewController*))(Il2CppBase() + 0x3D8BF18))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TrainGameScoreViewController*))(Il2CppBase() + 0x3D8C040))(this);
	}
	template <typename T = void> T OnUpdateShootInfo(uintptr_t msg) {
		return ((T (*)(TrainGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x3D8C0FC))(this, msg);
	}
	template <typename T = void> T OnRoundCountChanged(uintptr_t msg) {
		return ((T (*)(TrainGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x3D8C30C))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TrainGameScoreViewController*))(Il2CppBase() + 0x3D8C3AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TrainGameScoreViewController*))(Il2CppBase() + 0x3D8C3B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TrainGameScoreViewController*))(Il2CppBase() + 0x3D8C3BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TrainGameScoreViewController*))(Il2CppBase() + 0x3D8C3C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundCountChanged(uintptr_t P0) {
		return ((T (*)(TrainGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x3D8C3CC))(this, P0);
	}

};

}
