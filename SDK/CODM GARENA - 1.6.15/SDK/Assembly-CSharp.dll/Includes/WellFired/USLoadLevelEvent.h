#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USLoadLevelEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USLoadLevelEvent"));
	}

	template <typename T = bool> T& fireInEditor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& levelName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& levelIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T FireEvent() {
		return ((T (*)(USLoadLevelEvent*))(Il2CppBase() + 0x4A3D62C))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USLoadLevelEvent*, float))(Il2CppBase() + 0x4A3D880))(this, deltaTime);
	}

};

}
