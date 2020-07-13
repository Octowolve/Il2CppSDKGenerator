#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VehicleSkillComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VehicleSkillComponent"));
	}

	template <typename T = uintptr_t> T& currentState() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& cdBar() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& skillBtn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& numTxt() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& cdFx() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& normalIconName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tweens() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& currentProcess() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_currentSkillNum() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& vehicle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressSkillBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCDFinishFx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = int32_t> T get_CurrentSkillNum() {
		return ((T (*)(VehicleSkillComponent*))(Il2CppBase() + 0x2E8C8F0))(this);
	}
	template <typename T = void> T set_CurrentSkillNum(int32_t value) {
		return ((T (*)(VehicleSkillComponent*, int32_t))(Il2CppBase() + 0x2E8C8F8))(this, value);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(VehicleSkillComponent*, float))(Il2CppBase() + 0x2E8CA08))(this, dt);
	}
	template <typename T = void> T OnPressSkillBtn() {
		return ((T (*)(VehicleSkillComponent*))(Il2CppBase() + 0x2E8CD74))(this);
	}
	template <typename T = void> T PlayCDFinishFx() {
		return ((T (*)(VehicleSkillComponent*))(Il2CppBase() + 0x2E8CE4C))(this);
	}
	template <typename T = void> T RefreshValue(float dt) {
		return ((T (*)(VehicleSkillComponent*, float))(Il2CppBase() + 0x2E8CC78))(this, dt);
	}
	template <typename T = void> T RefreshState() {
		return ((T (*)(VehicleSkillComponent*))(Il2CppBase() + 0x2E8D1B4))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(VehicleSkillComponent*))(Il2CppBase() + 0x2E8D2A0))(this);
	}
	template <typename T = bool> T OnGamepadClick() {
		return ((T (*)(VehicleSkillComponent*))(Il2CppBase() + 0x2E8D448))(this);
	}
	template <typename T = void> T RegisterEventHandler(uintptr_t btn) {
		return ((T (*)(VehicleSkillComponent*, uintptr_t))(Il2CppBase() + 0x2E84918))(this, btn);
	}
	template <typename T = void> T UnRegisterEventHandler(uintptr_t btn) {
		return ((T (*)(VehicleSkillComponent*, uintptr_t))(Il2CppBase() + 0x2E85490))(this, btn);
	}

};

}
