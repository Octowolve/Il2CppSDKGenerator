#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ExplodeScreenEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ExplodeScreenEffect"));
	}

	template <typename T = float> T& m_CurTimePercent() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplodeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculatePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T PlayExplodeEffect() {
		return ((T (*)(ExplodeScreenEffect*))(Il2CppBase() + 0x51BDF7C))(this);
	}
	template <typename T = float> T CalculatePercent() {
		return ((T (*)(ExplodeScreenEffect*))(Il2CppBase() + 0x51BE040))(this);
	}
	template <typename T = float> T xLuaBaseProxy_CalculatePercent() {
		return ((T (*)(ExplodeScreenEffect*))(Il2CppBase() + 0x51BE228))(this);
	}

};

}
