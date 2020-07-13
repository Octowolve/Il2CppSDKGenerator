#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdFireFromCover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_FireFromCover"));
	}

	template <typename T = uintptr_t> T& destCover() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& enemy() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& coverDuration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& origMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Execute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldUnHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToNeighborCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SlowDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPrecondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> static T Execute(uintptr_t owner, uintptr_t inCover, float maxTime) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4CE6B78))(0, owner, inCover, maxTime);
	}
	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdFireFromCover*, uintptr_t))(Il2CppBase() + 0x4CE6C9C))(this, inParam);
	}
	template <typename T = bool> T ShouldUnHide() {
		return ((T (*)(AICmdFireFromCover*))(Il2CppBase() + 0x4CE6D88))(this);
	}
	template <typename T = bool> T SwitchToNeighborCover() {
		return ((T (*)(AICmdFireFromCover*))(Il2CppBase() + 0x4CE6FC0))(this);
	}
	template <typename T = void> T SlowDown() {
		return ((T (*)(AICmdFireFromCover*))(Il2CppBase() + 0x4CE726C))(this);
	}
	template <typename T = void> T RecoverSpeed() {
		return ((T (*)(AICmdFireFromCover*))(Il2CppBase() + 0x4CE7348))(this);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdFireFromCover*))(Il2CppBase() + 0x4CE7418))(this);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdFireFromCover*))(Il2CppBase() + 0x4CE7500))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdFireFromCover*))(Il2CppBase() + 0x4CE763C))(this);
	}
	template <typename T = bool> T CheckPrecondition() {
		return ((T (*)(AICmdFireFromCover*))(Il2CppBase() + 0x4CE77A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(AICmdFireFromCover*, uintptr_t))(Il2CppBase() + 0x4CE78E8))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdFireFromCover*))(Il2CppBase() + 0x4CE78F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdFireFromCover*))(Il2CppBase() + 0x4CE78F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdFireFromCover*))(Il2CppBase() + 0x4CE7900))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckPrecondition() {
		return ((T (*)(AICmdFireFromCover*))(Il2CppBase() + 0x4CE7908))(this);
	}

};

}
