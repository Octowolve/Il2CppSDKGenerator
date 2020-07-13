#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AISightManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AISightManager"));
	}

	template <typename T = float> T& SightInfoValidSeconds() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& MaxSightCheckCountPerTick() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Game() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_GameAllPawnList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_ExecutedSightCheckInThisTick() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& OnlySenseOpponent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSeePlayerFor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSightInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(uintptr_t inGame) {
		return ((T (*)(AISightManager*, uintptr_t))(Il2CppBase() + 0x49B53B4))(this, inGame);
	}
	template <typename T = void> T CheckSeePlayerFor(uintptr_t c) {
		return ((T (*)(AISightManager*, uintptr_t))(Il2CppBase() + 0x49B5474))(this, c);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AISightManager*, float))(Il2CppBase() + 0x49B56A0))(this, deltaTime);
	}
	template <typename T = void> T UpdateSightInfo(uintptr_t controller) {
		return ((T (*)(AISightManager*, uintptr_t))(Il2CppBase() + 0x49B574C))(this, controller);
	}

};

}
