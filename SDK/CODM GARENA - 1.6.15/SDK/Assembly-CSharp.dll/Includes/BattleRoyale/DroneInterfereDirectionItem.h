#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class DroneInterfereDirectionItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "DroneInterfereDirectionItem"));
	}

	template <typename T = uintptr_t> T& ArrowTransform() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Drone() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetArrowLocalRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetLocalPosition(Il2CppVector3 localPosition) {
		return ((T (*)(DroneInterfereDirectionItem*, Il2CppVector3))(Il2CppBase() + 0x3D48AB4))(this, localPosition);
	}
	template <typename T = void> T SetArrowLocalRotation(Il2CppQuaternion localRotation) {
		return ((T (*)(DroneInterfereDirectionItem*, Il2CppQuaternion))(Il2CppBase() + 0x3D48BC0))(this, localRotation);
	}
	template <typename T = void> T Init(uintptr_t drone) {
		return ((T (*)(DroneInterfereDirectionItem*, uintptr_t))(Il2CppBase() + 0x3D484B0))(this, drone);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(DroneInterfereDirectionItem*, float))(Il2CppBase() + 0x3D47B94))(this, deltaTime);
	}

};

}
