#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdRootMotionFireFromCover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_RootMotionFireFromCover"));
	}

	template <typename T = uintptr_t> T& destCover() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& coverDuration() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& origMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SlowDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTargetInVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdRootMotionFireFromCover*, uintptr_t))(Il2CppBase() + 0x4CEFDEC))(this, inParam);
	}
	template <typename T = void> T SlowDown() {
		return ((T (*)(AICmdRootMotionFireFromCover*))(Il2CppBase() + 0x4CEFED8))(this);
	}
	template <typename T = void> T RecoverSpeed() {
		return ((T (*)(AICmdRootMotionFireFromCover*))(Il2CppBase() + 0x4CEFFB4))(this);
	}
	template <typename T = bool> T IsTargetInVisible() {
		return ((T (*)(AICmdRootMotionFireFromCover*))(Il2CppBase() + 0x4CF0084))(this);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdRootMotionFireFromCover*))(Il2CppBase() + 0x4CF031C))(this);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdRootMotionFireFromCover*))(Il2CppBase() + 0x4CF0404))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdRootMotionFireFromCover*))(Il2CppBase() + 0x4CF04E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(AICmdRootMotionFireFromCover*, uintptr_t))(Il2CppBase() + 0x4CF0720))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdRootMotionFireFromCover*))(Il2CppBase() + 0x4CF0728))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdRootMotionFireFromCover*))(Il2CppBase() + 0x4CF0730))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdRootMotionFireFromCover*))(Il2CppBase() + 0x4CF0738))(this);
	}

};

}
