#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ZMReviveContainerHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ZMReviveContainerHUD"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ReviveHudItem() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CountDownTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& TotalTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& BeginTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mCacheZMReviveHudList() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& ZMReviveDic() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& mCoutDown() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& lastRevivePlayerID() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Recycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoitfyReviveShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCoutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckReviveButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZMReviveContainerHUD*))(Il2CppBase() + 0x4DDA624))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMReviveContainerHUD*))(Il2CppBase() + 0x4DDA74C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ZMReviveContainerHUD*))(Il2CppBase() + 0x4DDA9E0))(this);
	}
	template <typename T = void> T Recycle(uintptr_t item) {
		return ((T (*)(ZMReviveContainerHUD*, uintptr_t))(Il2CppBase() + 0x4DDA8DC))(this, item);
	}
	template <typename T = uintptr_t> T GetItem() {
		return ((T (*)(ZMReviveContainerHUD*))(Il2CppBase() + 0x4DDAAB0))(this);
	}
	template <typename T = void> T OnNoitfyReviveShow(uintptr_t msg) {
		return ((T (*)(ZMReviveContainerHUD*, uintptr_t))(Il2CppBase() + 0x4DDAD4C))(this, msg);
	}
	template <typename T = void> T OnNotifyCountDown(uintptr_t msg) {
		return ((T (*)(ZMReviveContainerHUD*, uintptr_t))(Il2CppBase() + 0x4DDB0F0))(this, msg);
	}
	template <typename T = void> T DelayShow() {
		return ((T (*)(ZMReviveContainerHUD*))(Il2CppBase() + 0x4DDB224))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ZMReviveContainerHUD*))(Il2CppBase() + 0x4DDB520))(this);
	}
	template <typename T = void> T StartCountDown(int32_t totalTime) {
		return ((T (*)(ZMReviveContainerHUD*, int32_t))(Il2CppBase() + 0x4DDB400))(this, totalTime);
	}
	template <typename T = void> T UpdateCoutDown() {
		return ((T (*)(ZMReviveContainerHUD*))(Il2CppBase() + 0x4DDB5D0))(this);
	}
	template <typename T = void> T CheckReviveButton() {
		return ((T (*)(ZMReviveContainerHUD*))(Il2CppBase() + 0x4DDB6F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMReviveContainerHUD*))(Il2CppBase() + 0x4DDBE1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMReviveContainerHUD*))(Il2CppBase() + 0x4DDBE24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(ZMReviveContainerHUD*))(Il2CppBase() + 0x4DDBE2C))(this);
	}

};

}
