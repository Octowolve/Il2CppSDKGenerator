#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SwitchRoleComponentKillSteak
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SwitchRoleComponentKillSteak"));
	}


	template <typename T = void> T Despawn3PAvatar() {
		return ((T (*)(SwitchRoleComponentKillSteak*))(Il2CppBase() + 0x30B764C))(this);
	}

};

}
