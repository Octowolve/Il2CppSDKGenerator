#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class DoorInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "DoorInfo"));
	}

	template <typename T = uintptr_t> T& m_DoorState() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& m_LastOperatorID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOpeartorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDoorState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_DoorState() {
		return ((T (*)(DoorInfo*))(Il2CppBase() + 0x3D472E8))(this);
	}
	template <typename T = uint32_t> T get_LastOperatorID() {
		return ((T (*)(DoorInfo*))(Il2CppBase() + 0x3D472F0))(this);
	}
	template <typename T = float> T get_Health() {
		return ((T (*)(DoorInfo*))(Il2CppBase() + 0x3D472F8))(this);
	}
	template <typename T = void> T set_Health(float value) {
		return ((T (*)(DoorInfo*, float))(Il2CppBase() + 0x3D47300))(this, value);
	}
	template <typename T = void> T SetOpeartorID(uint32_t playerID) {
		return ((T (*)(DoorInfo*, uint32_t))(Il2CppBase() + 0x3D474F8))(this, playerID);
	}
	template <typename T = void> T SetDoorState(uint32_t value) {
		return ((T (*)(DoorInfo*, uint32_t))(Il2CppBase() + 0x3D475A0))(this, value);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(DoorInfo*))(Il2CppBase() + 0x3D47718))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(DoorInfo*))(Il2CppBase() + 0x3D477E0))(this);
	}

};

}
