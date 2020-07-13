#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VehicleEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VehicleEffect"));
	}

	template <typename T = int32_t> T& effectID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& effectSocketname() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& lifeTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& effectInstance() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& lastplayTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlaying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_instance() {
		return ((T (*)(VehicleEffect*))(Il2CppBase() + 0x2E7EFE0))(this);
	}
	template <typename T = bool> T IsPlaying() {
		return ((T (*)(VehicleEffect*))(Il2CppBase() + 0x2E7EFE8))(this);
	}
	template <typename T = void> T SetPosition(Il2CppVector3 position) {
		return ((T (*)(VehicleEffect*, Il2CppVector3))(Il2CppBase() + 0x2E7F108))(this, position);
	}
	template <typename T = void> T SetRotation(Il2CppQuaternion rotation) {
		return ((T (*)(VehicleEffect*, Il2CppQuaternion))(Il2CppBase() + 0x2E7F270))(this, rotation);
	}
	template <typename T = void> T Play(uintptr_t parent) {
		return ((T (*)(VehicleEffect*, uintptr_t))(Il2CppBase() + 0x2E7F3E0))(this, parent);
	}
	template <typename T = void> T Play_1(Il2CppVector3 position, Il2CppQuaternion rotation) {
		return ((T (*)(VehicleEffect*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x2E7F7D4))(this, position, rotation);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(VehicleEffect*))(Il2CppBase() + 0x2E7FADC))(this);
	}

};

}
