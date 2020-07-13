#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnTopAIDebugInfoHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnTopAIDebugInfoHUD"));
	}

	template <typename T = uintptr_t> T& AIDebugInfo() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_GameUIScene() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AIDebugInfoList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_PVP() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& isShow() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = bool> T& isNearst() {
		return *(T*)((uintptr_t)this + 0x8A);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAIDebugText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeadReplayBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeadReplayEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> static T Create(uintptr_t uiScene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16C9F4C))(0, uiScene);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PawnTopAIDebugInfoHUD*))(Il2CppBase() + 0x16CA120))(this);
	}
	template <typename T = void> T SetAIDebugText(uint32_t ActorID, Il2CppString* AIDebugText) {
		return ((T (*)(PawnTopAIDebugInfoHUD*, uint32_t, Il2CppString*))(Il2CppBase() + 0x16CA1C8))(this, ActorID, AIDebugText);
	}
	template <typename T = void> T Add(uintptr_t pawn) {
		return ((T (*)(PawnTopAIDebugInfoHUD*, uintptr_t))(Il2CppBase() + 0x16CA354))(this, pawn);
	}
	template <typename T = uintptr_t> T Spawn(uintptr_t pawn) {
		return ((T (*)(PawnTopAIDebugInfoHUD*, uintptr_t))(Il2CppBase() + 0x16CA4E8))(this, pawn);
	}
	template <typename T = void> T Remove(uintptr_t pawn) {
		return ((T (*)(PawnTopAIDebugInfoHUD*, uintptr_t))(Il2CppBase() + 0x16CA7C8))(this, pawn);
	}
	template <typename T = void> T ResetAll() {
		return ((T (*)(PawnTopAIDebugInfoHUD*))(Il2CppBase() + 0x16CA988))(this);
	}
	template <typename T = void> T ToggleShow() {
		return ((T (*)(PawnTopAIDebugInfoHUD*))(Il2CppBase() + 0x16CAAB8))(this);
	}
	template <typename T = void> T UpdateAll(float dt) {
		return ((T (*)(PawnTopAIDebugInfoHUD*, float))(Il2CppBase() + 0x16CAB60))(this, dt);
	}
	template <typename T = void> T DeadReplayBegin() {
		return ((T (*)(PawnTopAIDebugInfoHUD*))(Il2CppBase() + 0x16CAF6C))(this);
	}
	template <typename T = void> T DeadReplayEnd() {
		return ((T (*)(PawnTopAIDebugInfoHUD*))(Il2CppBase() + 0x16CB1F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PawnTopAIDebugInfoHUD*))(Il2CppBase() + 0x16CB484))(this);
	}

};

}
