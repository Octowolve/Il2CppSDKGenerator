#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorBase"));
	}

	template <typename T = bool> T& active() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _behaviorType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& behaviorCoroutine() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _canMove() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ownerPawn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BehaviorMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MainBehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InterruptCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Finish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Log() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_IsActive() {
		return ((T (*)(NetworkAIBehaviorBase*))(Il2CppBase() + 0x462B41C))(this);
	}
	template <typename T = uintptr_t> T get_behaviorType() {
		return ((T (*)(NetworkAIBehaviorBase*))(Il2CppBase() + 0x462B424))(this);
	}
	template <typename T = bool> T get_canMove() {
		return ((T (*)(NetworkAIBehaviorBase*))(Il2CppBase() + 0x462B42C))(this);
	}
	template <typename T = void> T set_canMove(bool value) {
		return ((T (*)(NetworkAIBehaviorBase*, bool))(Il2CppBase() + 0x462B434))(this, value);
	}
	template <typename T = bool> T get_UseCoroutine() {
		return ((T (*)(NetworkAIBehaviorBase*))(Il2CppBase() + 0x462B4A4))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(NetworkAIBehaviorBase*, uintptr_t))(Il2CppBase() + 0x462B4AC))(this, pawn);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NetworkAIBehaviorBase*))(Il2CppBase() + 0x462B554))(this);
	}
	template <typename T = uintptr_t> T BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorBase*))(Il2CppBase() + 0x462B66C))(this);
	}
	template <typename T = void> T MainBehavior() {
		return ((T (*)(NetworkAIBehaviorBase*))(Il2CppBase() + 0x462B740))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NetworkAIBehaviorBase*, float))(Il2CppBase() + 0x462B7D8))(this, deltaTime);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(NetworkAIBehaviorBase*))(Il2CppBase() + 0x462B878))(this);
	}
	template <typename T = void> T InterruptCoroutine() {
		return ((T (*)(NetworkAIBehaviorBase*))(Il2CppBase() + 0x462B2D8))(this);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkAIBehaviorBase*))(Il2CppBase() + 0x462B9FC))(this);
	}
	template <typename T = void> T Finish() {
		return ((T (*)(NetworkAIBehaviorBase*))(Il2CppBase() + 0x462B938))(this);
	}
	template <typename T = void> T Log(Il2CppString* msg, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(NetworkAIBehaviorBase*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x462BA94))(this, msg, paras);
	}
	template <typename T = void> T LogError(Il2CppString* msg, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(NetworkAIBehaviorBase*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x462BB9C))(this, msg, paras);
	}

};

}
