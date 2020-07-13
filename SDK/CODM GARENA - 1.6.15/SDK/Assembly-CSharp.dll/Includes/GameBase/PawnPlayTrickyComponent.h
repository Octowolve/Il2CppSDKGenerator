#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnPlayTrickyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnPlayTrickyComponent"));
	}

	template <typename T = float> T& m_LastPlayTrickTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_PlayTrickCDTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_PlayTrickTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPlayTricky() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlayTricky() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTrickyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPlayTricky() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InterStopPlayTricky() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayTrick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayTricky() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(PawnPlayTrickyComponent*, uintptr_t))(Il2CppBase() + 0x16C3A20))(this, pawn);
	}
	template <typename T = bool> T get_IsPlayingTricky() {
		return ((T (*)(PawnPlayTrickyComponent*))(Il2CppBase() + 0x16C3ADC))(this);
	}
	template <typename T = bool> T CanPlayTricky() {
		return ((T (*)(PawnPlayTrickyComponent*))(Il2CppBase() + 0x16C3B1C))(this);
	}
	template <typename T = void> T CheckPlayTricky() {
		return ((T (*)(PawnPlayTrickyComponent*))(Il2CppBase() + 0x16513F0))(this);
	}
	template <typename T = void> T PlayTrickyComponent() {
		return ((T (*)(PawnPlayTrickyComponent*))(Il2CppBase() + 0x16C3DB4))(this);
	}
	template <typename T = void> T StopPlayTricky() {
		return ((T (*)(PawnPlayTrickyComponent*))(Il2CppBase() + 0x1652CA4))(this);
	}
	template <typename T = void> T InterStopPlayTricky() {
		return ((T (*)(PawnPlayTrickyComponent*))(Il2CppBase() + 0x16C3FFC))(this);
	}
	template <typename T = void> T OnSyncPlayTrick() {
		return ((T (*)(PawnPlayTrickyComponent*))(Il2CppBase() + 0x16C417C))(this);
	}
	template <typename T = void> T OnSyncPlayTricky(uintptr_t buffer) {
		return ((T (*)(PawnPlayTrickyComponent*, uintptr_t))(Il2CppBase() + 0x16C4230))(this, buffer);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(PawnPlayTrickyComponent*, uintptr_t))(Il2CppBase() + 0x16C42F4))(this, P0);
	}

};

}
