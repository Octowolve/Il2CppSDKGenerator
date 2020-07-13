#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DominationGame {

class DomAreaInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DominationGame", "DomAreaInfo"));
	}

	template <typename T = int32_t> T& AreaID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& AttackerCamp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& AreaState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& AreaCamp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& LastAreaCamp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& DomRate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& DomSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& NextSoundTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DomAreaInfo*))(Il2CppBase() + 0x2B2E0F4))(this);
	}
	template <typename T = void> T Set(uintptr_t camp, uintptr_t attackerCamp, unsigned char status, float rate, float speed) {
		return ((T (*)(DomAreaInfo*, uintptr_t, uintptr_t, unsigned char, float, float))(Il2CppBase() + 0x2B2E1A4))(this, camp, attackerCamp, status, rate, speed);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(DomAreaInfo*, float))(Il2CppBase() + 0x2B2E2CC))(this, deltaTime);
	}

};

}
