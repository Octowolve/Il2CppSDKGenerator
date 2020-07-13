#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VTOLBehitEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VTOLBehitEffect"));
	}

	template <typename T = float> static T& ORIGIN_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& ORIGIN_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayStopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(VTOLBehitEffect*))(Il2CppBase() + 0x2E926C8))(this);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(VTOLBehitEffect*))(Il2CppBase() + 0x2E92780))(this);
	}
	template <typename T = void> T DelayStopEffect() {
		return ((T (*)(VTOLBehitEffect*))(Il2CppBase() + 0x2E92864))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(VTOLBehitEffect*))(Il2CppBase() + 0x2E9293C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayEffect() {
		return ((T (*)(VTOLBehitEffect*))(Il2CppBase() + 0x2E92944))(this);
	}

};

}
