#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BRLevelDoor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BRLevelDoor"));
	}

	template <typename T = uintptr_t> T& DoorType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsServerOnly() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsForwardOut() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& IsDrawGizmos() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = bool> T& IsAttackable() {
		return *(T*)((uintptr_t)this + 0x2B);
	}
	template <typename T = int32_t> T& NormalAssetId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& BrokenAssetId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& MaxHealth() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& DoorSize() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& BindDoorUid() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& BindDoorIsMain() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ServerType() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& IsStart() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& IsRawLevelDoor() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = Il2CppVector3> T& RawPosition() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BRLevelDoor*))(Il2CppBase() + 0x4189E84))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRLevelDoor*))(Il2CppBase() + 0x4189F7C))(this);
	}
	template <typename T = Il2CppVector3> T get_DoorCenter() {
		return ((T (*)(BRLevelDoor*))(Il2CppBase() + 0x418A02C))(this);
	}
	template <typename T = Il2CppQuaternion> T get_OutsideOpenRotation() {
		return ((T (*)(BRLevelDoor*))(Il2CppBase() + 0x418A13C))(this);
	}
	template <typename T = Il2CppQuaternion> T get_InsideOpenRotation() {
		return ((T (*)(BRLevelDoor*))(Il2CppBase() + 0x418A2AC))(this);
	}
	template <typename T = Il2CppVector3> T get_OpenPosition() {
		return ((T (*)(BRLevelDoor*))(Il2CppBase() + 0x418A41C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRLevelDoor*))(Il2CppBase() + 0x418A5AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRLevelDoor*))(Il2CppBase() + 0x418A5B4))(this);
	}

};

}
