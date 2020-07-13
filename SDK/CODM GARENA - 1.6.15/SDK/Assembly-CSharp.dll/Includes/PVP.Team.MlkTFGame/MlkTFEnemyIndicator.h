#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.MlkTFGame {

class MlkTFEnemyIndicator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.MlkTFGame", "MlkTFEnemyIndicator"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T PreInit() {
		return ((T (*)(MlkTFEnemyIndicator*))(Il2CppBase() + 0x348A7E8))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(MlkTFEnemyIndicator*))(Il2CppBase() + 0x348A910))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(MlkTFEnemyIndicator*))(Il2CppBase() + 0x348AAC8))(this);
	}

};

}
