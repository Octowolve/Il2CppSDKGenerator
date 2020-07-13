#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TrainingGame {

class LoadoutPVPGameViewControllerTrain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TrainingGame", "LoadoutPVPGameViewController_Train"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T RefreshLoadout() {
		return ((T (*)(LoadoutPVPGameViewControllerTrain*))(Il2CppBase() + 0x3D8A584))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshLoadout() {
		return ((T (*)(LoadoutPVPGameViewControllerTrain*))(Il2CppBase() + 0x3D8B6EC))(this);
	}

};

}
