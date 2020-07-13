#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class TankSkillComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "TankSkillComponent"));
	}

	template <typename T = Il2CppString*> T& disableIconName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Tick(float dt) {
		return ((T (*)(TankSkillComponent*, float))(Il2CppBase() + 0x3432910))(this, dt);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(TankSkillComponent*))(Il2CppBase() + 0x3432BB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TankSkillComponent*, float))(Il2CppBase() + 0x3432C90))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshView() {
		return ((T (*)(TankSkillComponent*))(Il2CppBase() + 0x3432C98))(this);
	}

};

}
