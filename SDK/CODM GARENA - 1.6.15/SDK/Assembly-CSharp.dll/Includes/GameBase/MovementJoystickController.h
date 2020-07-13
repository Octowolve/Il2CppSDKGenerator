#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MovementJoystickController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MovementJoystickController"));
	}

	template <typename T = uintptr_t> T& m_MoveView() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwimStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMoveModeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MovementJoystickController*))(Il2CppBase() + 0x19D46DC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MovementJoystickController*))(Il2CppBase() + 0x19D4780))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MovementJoystickController*))(Il2CppBase() + 0x19D4910))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MovementJoystickController*))(Il2CppBase() + 0x19D4A38))(this);
	}
	template <typename T = void> T OnSwimStateChanged(uintptr_t Msg) {
		return ((T (*)(MovementJoystickController*, uintptr_t))(Il2CppBase() + 0x19D4AF4))(this, Msg);
	}
	template <typename T = void> T OnMoveModeChanged(uintptr_t msg) {
		return ((T (*)(MovementJoystickController*, uintptr_t))(Il2CppBase() + 0x19D4B94))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MovementJoystickController*))(Il2CppBase() + 0x19D4C60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MovementJoystickController*))(Il2CppBase() + 0x19D4C68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MovementJoystickController*))(Il2CppBase() + 0x19D4C70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MovementJoystickController*))(Il2CppBase() + 0x19D4C78))(this);
	}

};

}
